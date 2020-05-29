#include "UGSEngine/ugspch.h"
#include "UGSEngine/UGSEngine.h"

class Sandbox : public UGSEngine::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

UGSEngine::Application* UGSEngine::CreateApplication() {
	return new Sandbox();
}