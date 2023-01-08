#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Engine start point" << std::endl;
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	//Sandbox* sandbox = new Sandbox();

	//sandbox->Run();
	//delete sandbox;

}
#endif