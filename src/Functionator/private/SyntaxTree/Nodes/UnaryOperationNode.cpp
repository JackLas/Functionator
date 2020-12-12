#include "UnaryOperationNode.hpp"
#include "ValueNode.hpp"

UnaryOperationNode::UnaryOperationNode(const std::string& operation,
    const std::shared_ptr<SyntaxBaseNode>& operand)
: SyntaxBaseNode(operation)
, mOperand(operand)
{
}

UnaryOperationNode::UnaryOperationNode(const UnaryOperationNode& other)
: SyntaxBaseNode(other)
, mOperand(other.mOperand)
{
}

UnaryOperationNode::UnaryOperationNode(const UnaryOperationNode&& other)
: SyntaxBaseNode(other)
, mOperand(std::move(other.mOperand))
{
}

UnaryOperationNode::UnaryOperationNode(const ValueNode& other)
: SyntaxBaseNode(other.getValue())
{
}

UnaryOperationNode::~UnaryOperationNode()
{
}

void UnaryOperationNode::setOperand(const std::shared_ptr<SyntaxBaseNode>& node)
{
    mOperand = node;
}

std::shared_ptr<SyntaxBaseNode> UnaryOperationNode::getOperand() const
{
    return mOperand;
}