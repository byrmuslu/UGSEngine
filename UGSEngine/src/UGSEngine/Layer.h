#pragma once
#include "UGSEngine/Core.h"
#include "UGSEngine/Events/Event.h"

namespace UGSEngine {
	class UGS_API Layer {
	public:
		Layer(const std::string& name = "Layer");
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}
		virtual void OnUpdate() {}
		virtual void OnImGuiRender() {}
		virtual void OnEvent(Event& event) {};

		const std::string GetName() const { return m_DebugName; }
	protected:
		std::string m_DebugName;

	};
}