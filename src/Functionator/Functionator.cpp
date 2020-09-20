#include "Functionator.hpp"

#include "Nodes/IFuncNode.hpp"
#include "Parser/FunctionParser.hpp"

Functionator::Functionator(const std::string& str)
: mFuncStr(str)
, mFuncTree(nullptr)
{
	FunctionParser::removeSpaces(mFuncStr);
}
	
Functionator::~Functionator()
{
	delete mFuncTree;
}

double Functionator::calculate()
{
	double result = 0.0f;
	
	if (!mFuncTree)
	{
		mFuncTree = parser.getTree();
	}

	if (mFuncTree)
	{
		result = mFuncTree->getResult();
	}

	return result;
}

const std::string& Functionator::getString() const
{
	return mFuncStr;
}
