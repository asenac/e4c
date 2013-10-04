
#include "SwitchExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/expression/Case.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::SwitchExpression include) START*/
/*PROTECTED REGION END*/

SwitchExpression::SwitchExpression() : 
	m_switchExpr(),
    m_defaultExpr(),
    m_cases()
{
	/*PROTECTED REGION ID(SwitchExpression constructor) START*/
	/*PROTECTED REGION END*/
}

SwitchExpression::~SwitchExpression()
{
	/*PROTECTED REGION ID(SwitchExpression destructor) START*/
	/*PROTECTED REGION END*/
}

SwitchExpression::switchExpr_t SwitchExpression::getSwitchExpr() const
{
	return e4c::returned(m_switchExpr);
}


void SwitchExpression::setSwitchExpr(switchExpr_t switchExpr_)
{
	m_switchExpr.reset(switchExpr_);
}

SwitchExpression::switchExpr_t SwitchExpression::releaseSwitchExpr()
{
	return m_switchExpr.release();
}

SwitchExpression::defaultExpr_t SwitchExpression::getDefaultExpr() const
{
	return e4c::returned(m_defaultExpr);
}


void SwitchExpression::setDefaultExpr(defaultExpr_t defaultExpr_)
{
	m_defaultExpr.reset(defaultExpr_);
}

SwitchExpression::defaultExpr_t SwitchExpression::releaseDefaultExpr()
{
	return m_defaultExpr.release();
}

SwitchExpression::cases_t SwitchExpression::getCases() const
{
	return e4c::returned(m_cases);
}


void SwitchExpression::addCases(xpand3::expression::Case_ptr cases_)
{
	m_cases.push_back(std::unique_ptr < xpand3::expression::Case >(cases_));
}

void SwitchExpression::addAllCases(const cases_t& cases_)
{
	for (auto i = cases_.begin(); i != cases_.end(); i++)
		addCases(*i);
}



/*PROTECTED REGION ID(xpand3::expression::SwitchExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SwitchExpression::eClassImpl() const
{
	return ExpressionPackage::_instance()->getSwitchExpression();
}
 
