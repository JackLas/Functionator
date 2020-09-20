#include "Actions/ActionSum.cpp"

ActionSum::ActionSum()
{

}

ActionSum::~IAction()
{

}

double ActionSum::calculate(const IFuncNode* lhs, const IFuncNode* rhs)
{
	double lhsResult = hls ? lhs->getResult() : 0.0f;
	double rhsResult = rhs ? rhs->getResult() : 0.0f;
	
	return lhsResult + rhsResult;
}

IAction* ActionSum::createClone()
{
	return new ActionSum(this);
}