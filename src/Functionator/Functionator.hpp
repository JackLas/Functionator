#ifndef __FUNCTIONATOR_H__
#define __FUNCTIONATOR_H__

#include <string>

class Functionator
{
public:
	Functionator();
	~Functionator();

	std::string str();

protected:
	Functionator(const Functionator&) = delete;
	Functionator(const Functionator&&) = delete;
	Functionator& operator=(const Functionator&) = delete;
	Functionator& operator=(const Functionator&&) = delete;
};

#endif //__FUNCTIONATOR_H__