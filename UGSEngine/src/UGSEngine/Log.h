#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace UGSEngine {

	class UGS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}
// Core log macros
#define UGS_CORE_TRACE(...)		::UGSEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define UGS_CORE_INFO(...)		::UGSEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define UGS_CORE_WARN(...)		::UGSEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define UGS_CORE_ERROR(...)		::UGSEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define UGS_CORE_FATAL(...)     ::UGSEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)
//#define UGS_CORE_ASSERT(...)    ::UGSEngine::Log::GetCoreLogger()->assert(__VA_ARGS__)
// Client log macros
#define UGS_TRACE(...)			::UGSEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define UGS_INFO(...)			::UGSEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define UGS_WARN(...)			::UGSEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define UGS_ERROR(...)			::UGSEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define UGS_FATAL(...)			::UGSEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
//#define UGS_ASSERT(...)			::UGSEngine::Log::GetClientLogger()->assert(__VA_ARGS__)