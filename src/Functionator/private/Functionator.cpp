#include "Functionator.hpp"
#include "SyntaxTree/ExpressionParser.hpp"

class Functionator::Impl
{
public:
	std::shared_ptr<SyntaxBaseNode> mExpressionTree;

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

double Functionator::getResult() const
{
	//create visitor
	//mImpl->mExpressionTree->accept(visitor)
	return 0.0; //visitor->getResult();
}
