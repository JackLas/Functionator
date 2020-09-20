#ifndef FUNCTIONPARSER_H
#define FUNCTIONPARSER_H

#include "Actions/IAction.hpp"

#include <string>
#include <map>

//forward declaration
class IFuncNode;

class FunctionParser
{
private:
	std::map<std::string, IAction> mActionDictionary;

public:
	FunctionParser();
	~FunctionParser();

	IFuncNode* getTree(const std::string& funcStr);

	FunctionParser(const FunctionParser&) = delete;
	FunctionParser& operator=(const FunctionParser&) = delete;

	static void removeSpaces(std::string& str);
};

#endif //FUNCTIONPARSER_H