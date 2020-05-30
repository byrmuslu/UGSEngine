#include "ugspch.h"
#include "UGSEngine.h"

class ELayer : public UGSEngine::Layer
{
public:
	ELayer()
		: Layer("ExampleName")
	{
	}

	void OnUpdate() override
	{
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