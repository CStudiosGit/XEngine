#pragma once

#include "Core.h"

namespace XEngine {

	class XENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}