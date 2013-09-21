
#include "ChainExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

ChainExpression::ChainExpression() : 
	m_first(),
    m_next()
{
}

ChainExpression::~ChainExpression()
{
}

ChainExpression::first_t ChainExpression::getFirst() const
{
	return e4c::returned(m_first);
}

ChainExpression::next_t ChainExpression::getNext() const
{
	return e4c::returned(m_next);
}



