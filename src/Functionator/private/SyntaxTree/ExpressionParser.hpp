#ifndef __EXPRESSIONPARSER_HPP__
#define __EXPRESSIONPARSER_HPP__

#include "Nodes/SyntaxBaseNode.hpp"

#include <string>
#include <memory>

class ExpressionParser final
{
public:
    ExpressionParser(const std::string& expression);
    ~ExpressionParser() = default;

    std::shared_ptr<SyntaxBaseNode> getTree();

protected:
    std::string mExpression;

    ExpressionParser(const ExpressionParser&) = delete;
    ExpressionParser(const ExpressionParser&&) = delete;
    ExpressionParser& operator=(const ExpressionParser&) = delete;
    ExpressionParser& operator=(const ExpressionParser&&) = delete;
};

#endif //__EXPRESSIONPARSER_HPP__