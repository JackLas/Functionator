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
	//std::string funcStr = getStringFromUser();
	std::string funcStr = "1+2";

	Functionator* func = new Functionator(funcStr);

	std::cout << func->getString() 
              << " = "
              << func->calculate()
              << std::endl;

    delete func;
}

std::string Application::getStringFromUser()
{
	std::cout << "Please enter your function:" << std::endl;
	std::string result;
	std::getline(std::cin, result);
	return result;
}
