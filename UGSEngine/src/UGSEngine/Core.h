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

#ifdef UGS_DEBUG
#define UGS_ENABLE_ASSERTS
#endif

#ifdef UGS_ENABLE_ASSERTS
#define UGS_ASSERT(x, ...) { if(!(x)) { UGS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define UGS_CORE_ASSERT(x, ...) { if(!(x)) { UGS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define UGS_ASSERT(x, ...)
#define UGS_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define UGS_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)