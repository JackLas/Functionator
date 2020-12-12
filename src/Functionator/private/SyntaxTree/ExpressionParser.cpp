#include "ExpressionParser.hpp"

ExpressionParser::ExpressionParser(const std::string& expression)
: mExpression(expression)
{
}

std::shared_ptr<SyntaxBaseNode> ExpressionParser::getTree()
{   
    return std::unique_ptr<SyntaxBaseNode>(nullptr);
}