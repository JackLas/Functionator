#include "Application.hpp"

int main(int argc, char** argv)
{
	Application* app = new Application();
	app->start();
	delete app;
	return 0;
}