#include "Nodes/BinOperNode.hpp"

BinOperNode::BinOperNode()
: mLhs(nullptr)
, mRhs(nullptr)
, mAction(nullptr)
{

}

BinOperNode::~BinOperNode()
{
	delete mLhs;
	delete mRhs;
	delete mAction;
}

double BinOperNode::getResult()
{
	return mAction->calculate(mLhs, mRhs);
}