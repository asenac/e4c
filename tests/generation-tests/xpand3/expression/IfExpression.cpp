
#include "IfExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

IfExpression::IfExpression() : 
	m_condition(),
    m_thenPart(),
    m_elsePart()
{
}

IfExpression::~IfExpression()
{
}

IfExpression::condition_t IfExpression::getCondition() const
{
	return e4c::returned(m_condition);
}

IfExpression::thenPart_t IfExpression::getThenPart() const
{
	return e4c::returned(m_thenPart);
}

IfExpression::elsePart_t IfExpression::getElsePart() const
{
	return e4c::returned(m_elsePart);
}



