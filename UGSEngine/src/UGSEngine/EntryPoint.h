#pragma once

#ifdef UGS_PLATFORM_WINDOWS

extern UGSEngine::Application* UGSEngine::CreateApplication();

int main(int argc, char** argv) {
	UGSEngine::Log::Init();
	UGS_CORE_WARN("Initialized Log!");
	UGS_INFO("Hello");
	
	auto app = UGSEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif