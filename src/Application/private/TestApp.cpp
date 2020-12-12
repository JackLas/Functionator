#include "TestApp.hpp"
#include "Functionator.hpp"

#include <iostream> 
#include <string>

TestApp::TestApp()
{

}

TestApp::~TestApp()
{

}

void TestApp::run()
{
	std::cout << "TestApp::run()" << std::endl;
	
	const std::string test = "1+2";
	std::cout << "Test expression: " << test << std::endl; 

	Functionator expr(test);
	double result = expr.getResult();
	std::cout << "Result: " << result << std::endl;
}
