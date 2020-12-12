#include "SyntaxBaseNode.hpp"

SyntaxBaseNode::SyntaxBaseNode(const std::string& value)
: mValue(value)
{
}

SyntaxBaseNode::SyntaxBaseNode(const SyntaxBaseNode& otherNode)
: mValue(otherNode.mValue)
{
}

SyntaxBaseNode::SyntaxBaseNode(const SyntaxBaseNode&& otherNode)
: mValue(std::move(otherNode.mValue))
{
}

SyntaxBaseNode::~SyntaxBaseNode()
{
}

SyntaxBaseNode& SyntaxBaseNode::operator=(const SyntaxBaseNode& rhs)
{
    if (this != &rhs)
    {
        mValue = rhs.mValue;
    }
    return *this;
}

SyntaxBaseNode& SyntaxBaseNode::operator=(const SyntaxBaseNode&& rhs)
{
    if (this != &rhs)
    {
        mValue = std::move(rhs.mValue);
    }
    return *this;
}

std::string SyntaxBaseNode::getValue() const
{
    return mValue;
}
