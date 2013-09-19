
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



