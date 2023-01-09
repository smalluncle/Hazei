#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreatApplication();

int main(int argc,char** argv) {

	auto app = Hazel::CreatApplication();
	app->Run();
	delete app;
	return 0;
}

#endif // HZ_PLATFORM_WINDOWS
