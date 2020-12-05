#include "ExpressionParser.hpp"

ExpressionParser::ExpressionParser(const std::string& expression)
: mExpression(expression)
{
}

std::unique_ptr<ISyntaxNode> ExpressionParser::getTree()
{   
    return std::unique_ptr<ISyntaxNode>(nullptr);
}