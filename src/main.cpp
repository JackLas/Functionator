#include "ArgsHelper.hpp"
#include "Application.hpp"
#include "TestApp.hpp"

int main(int argc, char** argv)
{
	ArgsHelper args(argc, argv);

	IApplication* app = nullptr;
	if (args.isTestApp())
	{
		app = new TestApp();
	}
	else
	{
		app = new Application();
	}

	if (app != nullptr)
	{
		app->run();	
	}

	delete app;
	app = nullptr;

	return 0;
}