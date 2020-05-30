workspace "UGSEngine"
	architecture "x64"
	startproject "Sandbox"
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	flags
	{
		"MultiProcessorCompile"
	}
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directiories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "UGSEngine/vendor/GLFW/include"
IncludeDir["Glad"] = "UGSEngine/vendor/Glad/include"
IncludeDir["ImGui"] = "UGSEngine/vendor/imgui"
IncludeDir["ImGui"] = "UGSEngine/vendor/glm"

include "UGSEngine/vendor/GLFW"
include "UGSEngine/vendor/Glad"
include "UGSEngine/vendor/imgui"

project "UGSEngine"
	location "UGSEngine"
	kind "SharedLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "ugspch.h"
	pchsource "UGSEngine/src/ugspch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/glm/glm/**.hpp",
		"%{prj.name}/vendor/glm/glm/**.inl"
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}"
	}

	links
	{
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
			"UGS_PLATFORM_WINDOWS",
			"UGS_BUILD_DLL",
			"GLFW_INCLUDE_NONE"
		}

		postbuildcommands
		{
			("IF NOT EXIST ../bin/" .. outputdir .. "/Sandbox mkdir ../bin/" .. outputdir .. "/Sandbox"),
			("{COPY} %{cfg.buildtarget.relpath} \"../bin/" .. outputdir .. "/Sandbox\"")
		}

	filter "configurations:Debug"
		defines "UGS_DEBUG"
		runtime "Debug"
		symbols "on"
	filter "configurations:Release"
		defines "UGS_RELEASE"
		runtime "Release"
		optimize "on"
	filter "configurations:Dist"
		defines "UGS_DIST"
		runtime "Release"
		optimize "on"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

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
		systemversion "latest"

		defines
		{
			"UGS_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "UGS_DEBUG"
		runtime "Debug"
		symbols "on"
	filter "configurations:Release"
		defines "UGS_RELEASE"
		runtime "Release"
		optimize "on"
	filter "configurations:Dist"
		defines "UGS_DIST"
		runtime "Release"
		optimize "on"