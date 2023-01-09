#include <Hazel.h>

class SandBox : public Hazel::Application {

};

Hazel::Application* Hazel::CreatApplication() {
	return new SandBox();
}