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
		UGS_INFO("ExampleLayer::Update");
	}

	void OnEvent(UGSEngine::Event& event) override
	{
		UGS_TRACE("{0}", event);
	}

};

class Sandbox : public UGSEngine::Application {
public:
	Sandbox() {
		PushLayer(new ELayer());
	}

	~Sandbox() {

	}
};

UGSEngine::Application* UGSEngine::CreateApplication() {
	return new Sandbox();
}