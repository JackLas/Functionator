#include "ValueNode.hpp"

ValueNode::ValueNode(const std::string& value)
: SyntaxBaseNode(value)
{
}

ValueNode::ValueNode(const ValueNode& other)
: SyntaxBaseNode(other)
{
}

ValueNode::ValueNode(const ValueNode&& other)
: SyntaxBaseNode(other)
{
}

ValueNode::~ValueNode()
{
}