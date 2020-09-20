#include "Functionator.hpp"

#include <algorithm>

Functionator::Functionator(const std::string& str)
{
	mFuncStr = str;
	removeSpaces(mFuncStr);
}
	
Functionator::~Functionator()
{

}

void Functionator::analyse()
{

}

const std::string& Functionator::getString() const
{
	return mFuncStr;
}

void Functionator::removeSpaces(std::string& str)
{
	const char space = ' ';
	str.erase(std::remove(str.begin(), str.end(), space), str.end());
}
