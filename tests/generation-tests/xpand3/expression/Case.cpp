
#include "Case.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

Case::Case() : 
	m_condition(),
    m_thenPart()
{
}

Case::~Case()
{
}

Case::condition_t Case::getCondition() const
{
	return e4c::returned(m_condition);
}

Case::thenPart_t Case::getThenPart() const
{
	return e4c::returned(m_thenPart);
}



