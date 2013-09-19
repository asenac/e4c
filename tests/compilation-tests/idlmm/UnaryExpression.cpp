
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

void UnaryExpression::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

operator_t UnaryExpression::getOperator() const
{
	return m_operator;
}



