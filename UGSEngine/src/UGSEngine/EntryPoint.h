#pragma once

#ifdef UGS_PLATFORM_WINDOWS

extern UGSEngine::Application* UGSEngine::CreateApplication();

int main(int argc, char** argv) {
	auto app = UGSEngine::CreateApplication();
	app->Run();
	delete app;
}


#endif