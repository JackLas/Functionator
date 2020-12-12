#ifndef __BINARYOPERATIONNODE_HPP__
#define __BINARYOPERATIONNODE_HPP__

#include "SyntaxBaseNode.hpp"
#include <memory>

// forward declaration
class UnaryOperationNode;
class ValueNode;

class BinaryOperationNode : public SyntaxBaseNode
{
public:
    BinaryOperationNode(const std::string& operation,
        const std::shared_ptr<SyntaxBaseNode>& lhs = nullptr,
        const std::shared_ptr<SyntaxBaseNode>& rhs = nullptr);
    BinaryOperationNode(const BinaryOperationNode& other);
    BinaryOperationNode(const BinaryOperationNode&& other);
    BinaryOperationNode(const UnaryOperationNode& other);
    BinaryOperationNode(const ValueNode& other);

    void setLeftOperand(const std::shared_ptr<SyntaxBaseNode>& node);
    void setRightOperand(const std::shared_ptr<SyntaxBaseNode>& node);

private:
    std::shared_ptr<SyntaxBaseNode> mLeftOperand;
    std::shared_ptr<SyntaxBaseNode> mRightOperand;
};

#endif //__BINARYOPERATIONNODE_HPP__