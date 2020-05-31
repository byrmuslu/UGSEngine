#pragma once
#include "UGSEngine/Layer.h"

#include "UGSEngine/Events/ApplicationEvent.h"
#include "UGSEngine/Events/KeyEvent.h"
#include "UGSEngine/Events/MouseEvent.h"

namespace UGSEngine {

	class  ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;
		
		void Begin();
		void End();

	private:
		float m_Time = 0.0f;
	};

}
