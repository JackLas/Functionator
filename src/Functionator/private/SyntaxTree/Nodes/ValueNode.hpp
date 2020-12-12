#ifndef __VALUENODE_HPP__
#define __VALUENODE_HPP__

#include "SyntaxBaseNode.hpp"

class ValueNode : public SyntaxBaseNode
{
public:
    ValueNode(const std::string& value);
    ValueNode(const ValueNode& otherNode);
    ValueNode(const ValueNode&& otherNode);
    ~ValueNode();
};

#endif //__VALUENODE_HPP__