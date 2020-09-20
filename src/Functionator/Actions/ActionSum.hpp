#ifndef ACTIONSUM_HPP
#define ACTIONSUM_HPP

#include "Actions/IAction.hpp"

class ActionSum: public IAction
{
private:
public:
	ActionSum();
	virtual ~IAction(){}
	virtual double calculate(const IFuncNode* lhs, const IFuncNode* rhs);
	virtual IAction* createClone();

	ActionSum(const ActionSum&) = default;
	ActionSum& operator=(ActionSum&) = default;
};

#endif //ACTIONSUM_HPP