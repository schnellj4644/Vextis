#include <Vextis.h>

class Sandbox : public Vextis::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Vextis::Application* Vextis::CreateApplication() {
	return new Sandbox();
}
