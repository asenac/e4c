
#include "ChainExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::ChainExpression include) START*/
/*PROTECTED REGION END*/

ChainExpression::ChainExpression() : 
	m_first(),
    m_next()
{
	/*PROTECTED REGION ID(ChainExpression constructor) START*/
	/*PROTECTED REGION END*/
}

ChainExpression::~ChainExpression()
{
	/*PROTECTED REGION ID(ChainExpression destructor) START*/
	/*PROTECTED REGION END*/
}

ChainExpression::first_t ChainExpression::getFirst() const
{
	return e4c::returned(m_first);
}


void ChainExpression::setFirst(first_t first_)
{
	m_first.reset(first_);
}

ChainExpression::first_t ChainExpression::releaseFirst()
{
	return m_first.release();
}

ChainExpression::next_t ChainExpression::getNext() const
{
	return e4c::returned(m_next);
}


void ChainExpression::setNext(next_t next_)
{
	m_next.reset(next_);
}

ChainExpression::next_t ChainExpression::releaseNext()
{
	return m_next.release();
}



/*PROTECTED REGION ID(xpand3::expression::ChainExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ChainExpression::eClassImpl() const
{
	return ExpressionPackage::_instance()->getChainExpression();
}
 
