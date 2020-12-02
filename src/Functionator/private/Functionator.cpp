#include "Functionator.hpp"

Functionator::Functionator()
{
	
}
	
Functionator::~Functionator()
{

}

#include "test/test.hpp"
std::string Functionator::str()
{
	test t;
	return t.str();
}
