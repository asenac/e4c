
#include "SwitchExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/expression/Case.hpp>

using namespace xpand3::expression;

SwitchExpression::SwitchExpression() : 
	m_switchExpr(),
    m_defaultExpr(),
    m_cases()
{
}

SwitchExpression::~SwitchExpression()
{
}

SwitchExpression::switchExpr_t SwitchExpression::getSwitchExpr() const
{
	return e4c::returned(m_switchExpr);
}

SwitchExpression::defaultExpr_t SwitchExpression::getDefaultExpr() const
{
	return e4c::returned(m_defaultExpr);
}

SwitchExpression::cases_t SwitchExpression::getCases() const
{
	return e4c::returned(m_cases);
}



