
#include "Case.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::Case include) START*/
/*PROTECTED REGION END*/

Case::Case() :
    m_condition(),
    m_thenPart()
{
    /*PROTECTED REGION ID(Case constructor) START*/
    /*PROTECTED REGION END*/
}

Case::~Case()
{
    /*PROTECTED REGION ID(Case destructor) START*/
    /*PROTECTED REGION END*/
}

Case::condition_t Case::getCondition() const
{
    return e4c::returned(m_condition);
}


void Case::setCondition(condition_t condition_)
{
    m_condition.reset(condition_);
}

Case::condition_t Case::releaseCondition()
{
    return m_condition.release();
}

Case::thenPart_t Case::getThenPart() const
{
    return e4c::returned(m_thenPart);
}


void Case::setThenPart(thenPart_t thenPart_)
{
    m_thenPart.reset(thenPart_);
}

Case::thenPart_t Case::releaseThenPart()
{
    return m_thenPart.release();
}



/*PROTECTED REGION ID(xpand3::expression::Case implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Case::eClassImpl() const
{
    return ExpressionPackage::_instance()->getCase();
}

