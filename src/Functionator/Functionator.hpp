#ifndef FUNCTIONATOR_H
#define FUNCTIONATOR_H

#include <string>

class Functionator
{
private:
	std::string mFuncStr;
public:
	Functionator(const std::string& str);
	~Functionator();

	void analyse();
	const std::string& getString() const;

	Functionator(const Functionator& func) = delete;
	Functionator& operator=(const Functionator& func) = delete;

private:
	void removeSpaces(std::string& str);
};

#endif //FUNCTIONATOR_H