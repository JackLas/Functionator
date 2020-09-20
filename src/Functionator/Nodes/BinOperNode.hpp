#ifndef BINOPERNODE_H
#define BINOPERNODE_H

#include "Nodes/IFuncNode.hpp"
#include "Actions/IAction.hpp"

class BinOperNode: public IFuncNode
{
private:
	IFuncNode* mLhs;
	IFuncNode* mRhs;
	IAction* mAction;
public:
	BinOperNode();
	virtual ~BinOperNode();

	virtual double getResult();

	BinOperNode(const BinOperNode&) = delete;
	BinOperNode& operator=(const BinOperNode&) = delete;
};

#endif //BINOPERNODE_H