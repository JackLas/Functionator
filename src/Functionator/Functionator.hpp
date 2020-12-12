#ifndef __FUNCTIONATOR_H__
#define __FUNCTIONATOR_H__

#include <string>
#include <memory>

class Functionator
{
public:
	Functionator(const std::string& expression);
	~Functionator();

private:
	class Impl;
	std::unique_ptr<Impl> mImpl;

protected:
	Functionator(const Functionator&) = delete;
	Functionator(const Functionator&&) = delete;
	Functionator& operator=(const Functionator&) = delete;
	Functionator& operator=(const Functionator&&) = delete;
};

#endif //__FUNCTIONATOR_H__