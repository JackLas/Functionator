#ifndef __UNARYOPERATIONNODE_HPP__
#define __UNARYOPERATIONNODE_HPP__

#include "SyntaxBaseNode.hpp"
#include <memory>

// forward declaration
class ValueNode;

class UnaryOperationNode : public SyntaxBaseNode
{
public:
    UnaryOperationNode(const std::string& operation, 
        const std::shared_ptr<SyntaxBaseNode>& operand = nullptr);
    UnaryOperationNode(const UnaryOperationNode& other);
    UnaryOperationNode(const UnaryOperationNode&& other);
    UnaryOperationNode(const ValueNode& other);
    virtual ~UnaryOperationNode();

    void setOperand(const std::shared_ptr<SyntaxBaseNode>& node);
    std::shared_ptr<SyntaxBaseNode> getOperand() const;

private:
    std::shared_ptr<SyntaxBaseNode> mOperand;
};

#endif // __UNARYOPERATIONNODE_HPP__