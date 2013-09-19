
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



