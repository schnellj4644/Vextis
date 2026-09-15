#pragma once

#ifdef VX_PLATFORM_WINDOWS

extern Vextis::Application* Vextis::CreateApplication();

int main(int argc, char** argv) {
	auto app = Vextis::CreateApplication();
	app->Run();
	delete app;
}

#endif
