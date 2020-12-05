#include "Functionator.hpp"
#include "SyntaxTree/ExpressionParser.hpp"

class Functionator::Impl
{
public:
	std::unique_ptr<ISyntaxNode> mExpressionTree;

	Impl()
	: mExpressionTree(nullptr)
	{
	}
	
	~Impl() = default;
};

Functionator::Functionator(const std::string& expression)
: mImpl(std::make_unique<Impl>())
{
	ExpressionParser parser(expression); 
	mImpl->mExpressionTree = parser.getTree();
}
	
Functionator::~Functionator()
{
}
