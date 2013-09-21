
#include "ExpressionStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

ExpressionStatement::ExpressionStatement() : 
	m_expression()
{
}

ExpressionStatement::~ExpressionStatement()
{
}

ExpressionStatement::expression_t ExpressionStatement::getExpression() const
{
	return e4c::returned(m_expression);
}



