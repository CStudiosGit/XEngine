#pragma once

#ifdef XE_PLATFORM_WINDOWS

extern XEngine::Application* XEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = XEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif