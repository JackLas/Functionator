#ifndef __EXPRESSIONPARSER_HPP__
#define __EXPRESSIONPARSER_HPP__

#include "Nodes/ISyntaxNode.hpp"

#include <string>
#include <memory>

class ExpressionParser final
{
public:
    ExpressionParser(const std::string& expression);
    ~ExpressionParser() = default;

    std::unique_ptr<ISyntaxNode> getTree();

protected:
    std::string mExpression;

    ExpressionParser(const ExpressionParser&) = delete;
    ExpressionParser(const ExpressionParser&&) = delete;
    ExpressionParser& operator=(const ExpressionParser&) = delete;
    ExpressionParser& operator=(const ExpressionParser&&) = delete;
};

#endif //__EXPRESSIONPARSER_HPP__