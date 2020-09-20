#include "FunctionParser.hpp"
#include "Nodes/BinOperNode.hpp"

#include "Actions/ActionSum.hpp"

#include <algorithm>

FunctionParser::FunctionParser()
{
	//register actions
	mActionDictionary["+"] = ActionSum();
}

FunctionParser::~FunctionParser()
{

}

IFuncNode* FunctionParser::getTree(const std::string& funcStr)
{
	std::string str = funcStr;
	removeSpaces(str);

	//parsing

	return new BinOperNode();
}


void FunctionParser::removeSpaces(std::string& str)
{
	const char space = ' ';
	str.erase(std::remove(str.begin(), str.end(), space), str.end());
}
