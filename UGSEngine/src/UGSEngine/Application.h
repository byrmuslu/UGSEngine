#pragma once

#include "Core.h"
#include "Window.h"
#include "UGSEngine/LayerStack.h"
#include "Events/Event.h"
#include "Events/ApplicationEvent.h"

#include "UGSEngine/ImGui/ImGuiLayer.h"

namespace UGSEngine {
	class  Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		inline static Application& Get() { return *s_Instance; }

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline Window& GetWindow() { return *m_Window; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);
		static Application* s_Instance;
		std::unique_ptr<Window> m_Window;
		ImGuiLayer* m_ImGuiLayer;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};
	// To be defined in client
	Application* CreateApplication();
}