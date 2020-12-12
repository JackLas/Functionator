#include "BinaryOperationNode.hpp"
#include "UnaryOperationNode.hpp"
#include "ValueNode.hpp"

BinaryOperationNode::BinaryOperationNode(const std::string& operation,
    const std::shared_ptr<SyntaxBaseNode>& lhs,
    const std::shared_ptr<SyntaxBaseNode>& rhs)
: SyntaxBaseNode(operation)
, mLeftOperand(lhs)
, mRightOperand(rhs)
{
}

BinaryOperationNode::BinaryOperationNode(const BinaryOperationNode& other)
: SyntaxBaseNode(other.mValue)
, mLeftOperand(other.mLeftOperand)
, mRightOperand(other.mRightOperand)
{
}

BinaryOperationNode::BinaryOperationNode(const BinaryOperationNode&& other)
: SyntaxBaseNode(std::move(other.mValue))
, mLeftOperand(std::move(other.mLeftOperand))
, mRightOperand(std::move(other.mRightOperand))
{
}

BinaryOperationNode::BinaryOperationNode(const UnaryOperationNode& other)
: SyntaxBaseNode(other.getValue())
, mLeftOperand(other.getOperand())
{
}

BinaryOperationNode::BinaryOperationNode(const ValueNode& other)
: SyntaxBaseNode(other.getValue())
{
}

void BinaryOperationNode::setLeftOperand(const std::shared_ptr<SyntaxBaseNode>& node)
{
    mLeftOperand = node;
}

void BinaryOperationNode::setRightOperand(const std::shared_ptr<SyntaxBaseNode>& node)
{
    mRightOperand = node;
}