
#include "IfExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::IfExpression include) START*/
/*PROTECTED REGION END*/

IfExpression::IfExpression() : 
	m_condition(),
    m_thenPart(),
    m_elsePart()
{
	/*PROTECTED REGION ID(IfExpression constructor) START*/
	/*PROTECTED REGION END*/
}

IfExpression::~IfExpression()
{
	/*PROTECTED REGION ID(IfExpression destructor) START*/
	/*PROTECTED REGION END*/
}

IfExpression::condition_t IfExpression::getCondition() const
{
	return e4c::returned(m_condition);
}


void IfExpression::setCondition(condition_t condition_)
{
	m_condition.reset(condition_);
}

IfExpression::condition_t IfExpression::releaseCondition()
{
	return m_condition.release();
}

IfExpression::thenPart_t IfExpression::getThenPart() const
{
	return e4c::returned(m_thenPart);
}


void IfExpression::setThenPart(thenPart_t thenPart_)
{
	m_thenPart.reset(thenPart_);
}

IfExpression::thenPart_t IfExpression::releaseThenPart()
{
	return m_thenPart.release();
}

IfExpression::elsePart_t IfExpression::getElsePart() const
{
	return e4c::returned(m_elsePart);
}


void IfExpression::setElsePart(elsePart_t elsePart_)
{
	m_elsePart.reset(elsePart_);
}

IfExpression::elsePart_t IfExpression::releaseElsePart()
{
	return m_elsePart.release();
}



/*PROTECTED REGION ID(xpand3::expression::IfExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IfExpression::eClassImpl() const
{
	return ExpressionPackage::_instance()->getIfExpression();
}
 
