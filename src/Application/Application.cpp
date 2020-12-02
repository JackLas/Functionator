#include "Application.hpp"
#include "Functionator.hpp"

#include <iostream> 

Application::Application()
{

}

Application::~Application()
{

}

void Application::run()
{
	Functionator func;
	std::cout << func.str() << std::endl;
}

std::string Application::getStringFromUser()
{
	std::cout << "Please enter your function:" << std::endl;
	std::string result;
	std::getline(std::cin, result);
	return result;
}
