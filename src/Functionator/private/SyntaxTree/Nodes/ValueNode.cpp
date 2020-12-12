#include "ValueNode.hpp"

ValueNode::ValueNode(const std::string& value)
: SyntaxBaseNode(value)
{
}

ValueNode::ValueNode(const ValueNode& otherNode)
: SyntaxBaseNode(otherNode)
{
}

ValueNode::ValueNode(const ValueNode&& otherNode)
: SyntaxBaseNode(otherNode)
{
}

ValueNode::~ValueNode()
{
}