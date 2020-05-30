#include "UGSEngine/ugspch.h"
#include "UGSEngine/UGSEngine.h"

#include "UGSEngine/UGSEngine.h"
class ELayer : public UGSEngine::Layer
{
public:
	ELayer()
		: Layer("ExampleName")
	{
	}

	void OnUpdate() override
	{
		if (UGSEngine::Input::IsKeyPressed(UGS_KEY_ENTER))
			UGS_TRACE("Enter key is pressed!");
	}

	void OnEvent(UGSEngine::Event& event) override
	{
		//UGS_TRACE("{0}", event);
	}

};

class Sandbox : public UGSEngine::Application {
public:
	Sandbox() {
		PushLayer(new ELayer());
		PushOverlay(new UGSEngine::ImGuiLayer());
	}

	~Sandbox() {

	}
};

UGSEngine::Application* UGSEngine::CreateApplication() {
	return new Sandbox();
}