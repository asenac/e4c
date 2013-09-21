
#include "UnaryExpression.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

UnaryExpression::UnaryExpression() : 
	m_expression(),
    m_operator()
{
}

UnaryExpression::~UnaryExpression()
{
}

UnaryExpression::expression_t UnaryExpression::getExpression() const
{
	return e4c::returned(m_expression);
}


void UnaryExpression::setExpression(expression_t expression_)
{
	m_expression.reset(expression_);
}

UnaryExpression::expression_t UnaryExpression::releaseExpression()
{
	return m_expression.release();
}


void UnaryExpression::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

UnaryExpression::operator_t UnaryExpression::getOperator() const
{
	return m_operator;
}



