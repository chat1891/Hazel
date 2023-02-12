#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Engine start point" << std::endl;

	Hazel::Log::Init();
	int a = 5;
	HZ_CORE_WARN("CORE test");
	HZ_CLIENT_INFO("APP test var={0}",a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	//Sandbox* sandbox = new Sandbox();

	//sandbox->Run();
	//delete sandbox;

}
#endif