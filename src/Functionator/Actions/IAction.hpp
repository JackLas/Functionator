#ifndef IACTION_H
#define IACTION_H

#include "Nodes/IFuncNode.hpp"

class IAction
{
private:
public:
	virtual ~IAction(){}
	virtual double calculate(const IFuncNode* lhs, const IFuncNode* rhs) = 0;
	virtual IAction* createClone() = 0;
};

#endif //IACTION_H