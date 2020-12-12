#include "UnaryOperationNode.hpp"

UnaryOperationNode::UnaryOperationNode(const std::string& operation)
: SyntaxBaseNode(operation)
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

UnaryOperationNode::UnaryOperationNode(const SyntaxBaseNode& other)
: SyntaxBaseNode(other)
{
}

UnaryOperationNode::UnaryOperationNode(const SyntaxBaseNode&& other)
: SyntaxBaseNode(other)
{
}

UnaryOperationNode::~UnaryOperationNode()
{
}

void UnaryOperationNode::setOperand(std::shared_ptr<SyntaxBaseNode> node)
{
    mOperand = node;
}