#pragma once

#include "Core.h"

namespace ArronEngine{

	class ARRONENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//To be defined in CLIENT
	Application* CreateApplication();
}
