#pragma once

#ifdef UGS_PLATFORM_WINDOWS
#ifdef UGS_BUILD_DLL
	#define UGS_API __declspec(dllexport)
#else
	#define UGS_API __declspec(dllimport)
#endif // UGS_BUILD_DLL
#else
	#error UGS only support windows
#endif