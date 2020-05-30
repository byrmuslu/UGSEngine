workspace "UGSEngine"
	architecture "x64"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directiories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "UGSEngine/vendor/GLFW/include"

include "UGSEngine/vendor/GLFW"

project "UGSEngine"
	location "UGSEngine"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "ugspch.h"
	pchsource "UGSEngine/src/ugspch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}"
	}

	links
	{
		"GLFW",
		"opengl32.lib"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"UGS_PLATFORM_WINDOWS",
			"UGS_BUILD_DLL"
		}

		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}

	filter "configurations:Debug"
		defines "UGS_DEBUG"
		buildoptions "/MDd"
		symbols "On"
	filter "configurations:Release"
		defines "UGS_RELEASE"
		buildoptions "/MD"
		symbols "On"
	filter "configurations:Dist"
		defines "UGS_DIST"
		buildoptions "/MD"
		symbols "On"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"

	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"UGSEngine/vendor/spdlog/include",
		"UGSEngine/src"
	}

	links
	{
		"UGSEngine"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		defines
		{
			"UGS_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "UGS_DEBUG"
		buildoptions "/MDd"
		symbols "On"
	filter "configurations:Release"
		defines "UGS_RELEASE"
		buildoptions "/MD"
		symbols "On"
	filter "configurations:Dist"
		defines "UGS_DIST"
		buildoptions "/MD"
		symbols "On"