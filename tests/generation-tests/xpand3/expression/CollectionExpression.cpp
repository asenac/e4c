
#include "CollectionExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::CollectionExpression include) START*/
/*PROTECTED REGION END*/

CollectionExpression::CollectionExpression() : 
	m_closure(),
    m_eleName()
{
	/*PROTECTED REGION ID(CollectionExpression constructor) START*/
	/*PROTECTED REGION END*/
}

CollectionExpression::~CollectionExpression()
{
	/*PROTECTED REGION ID(CollectionExpression destructor) START*/
	/*PROTECTED REGION END*/
}

CollectionExpression::closure_t CollectionExpression::getClosure() const
{
	return e4c::returned(m_closure);
}


void CollectionExpression::setClosure(closure_t closure_)
{
	m_closure.reset(closure_);
}

CollectionExpression::closure_t CollectionExpression::releaseClosure()
{
	return m_closure.release();
}

CollectionExpression::eleName_t CollectionExpression::getEleName() const
{
	return e4c::returned(m_eleName);
}


void CollectionExpression::setEleName(eleName_t eleName_)
{
	m_eleName.reset(eleName_);
}

CollectionExpression::eleName_t CollectionExpression::releaseEleName()
{
	return m_eleName.release();
}



/*PROTECTED REGION ID(xpand3::expression::CollectionExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CollectionExpression::eClassImpl() const
{
	return ExpressionPackage::_instance()->getCollectionExpression();
}
 
