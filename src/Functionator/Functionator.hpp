#ifndef FUNCTIONATOR_H
#define FUNCTIONATOR_H

#include <string>

//forward declaration
class IFuncNode;
class FunctionParser;

class Functionator
{
private:
	FunctionParser parser;

	std::string mFuncStr;
	IFuncNode* mFuncTree;
public:
	Functionator(const std::string& str);
	~Functionator();

	double calculate();
	const std::string& getString() const;

	Functionator(const Functionator&) = delete;
	Functionator& operator=(const Functionator&) = delete;
};

#endif //FUNCTIONATOR_H