
#include "BinaryExpression.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

BinaryExpression::BinaryExpression() : 
	m_left(),
    m_right(),
    m_operator()
{
}

BinaryExpression::~BinaryExpression()
{
}

void BinaryExpression::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

operator_t BinaryExpression::getOperator() const
{
	return m_operator;
}



