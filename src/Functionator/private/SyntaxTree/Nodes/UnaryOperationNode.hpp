#ifndef __UNARYOPERATIONNODE_HPP__
#define __UNARYOPERATIONNODE_HPP__

#include "SyntaxBaseNode.hpp"
#include <memory>

class UnaryOperationNode : public SyntaxBaseNode
{
public:
    UnaryOperationNode(const std::string& operation);
    UnaryOperationNode(const UnaryOperationNode& other);
    UnaryOperationNode(const UnaryOperationNode&& other);
    UnaryOperationNode(const SyntaxBaseNode& other);
    UnaryOperationNode(const SyntaxBaseNode&& other);
    virtual ~UnaryOperationNode();

    void setOperand(std::shared_ptr<SyntaxBaseNode> node);

private:
    std::shared_ptr<SyntaxBaseNode> mOperand;
};

#endif // __UNARYOPERATIONNODE_HPP__