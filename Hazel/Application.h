#pragma once

#include "Core.h"

namespace Hazel {
	class HAZEL_API_ Application
	{

	public:

		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreatApplication();
}



