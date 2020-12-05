#include "Application.hpp"
#include "Functionator.hpp"

#include <iostream> 
#include <string>

Application::Application()
{
}

Application::~Application()
{
}

void Application::run()
{
	std::cout << "Application::run()" << std::endl;
}

std::string getStringFromUser()
{
	std::cout << "Please enter your function:" << std::endl;
	std::string result;
	std::getline(std::cin, result);
	return result;
}
