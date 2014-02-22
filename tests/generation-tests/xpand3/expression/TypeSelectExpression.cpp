
#include "TypeSelectExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::TypeSelectExpression include) START*/
/*PROTECTED REGION END*/

TypeSelectExpression::TypeSelectExpression() :
    m_typeLiteral()
{
    /*PROTECTED REGION ID(TypeSelectExpression constructor) START*/
    /*PROTECTED REGION END*/
}

TypeSelectExpression::~TypeSelectExpression()
{
    /*PROTECTED REGION ID(TypeSelectExpression destructor) START*/
    /*PROTECTED REGION END*/
}

TypeSelectExpression::typeLiteral_t TypeSelectExpression::getTypeLiteral() const
{
    return e4c::returned(m_typeLiteral);
}


void TypeSelectExpression::setTypeLiteral(typeLiteral_t typeLiteral_)
{
    m_typeLiteral.reset(typeLiteral_);
}

TypeSelectExpression::typeLiteral_t TypeSelectExpression::releaseTypeLiteral()
{
    return m_typeLiteral.release();
}



/*PROTECTED REGION ID(xpand3::expression::TypeSelectExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TypeSelectExpression::eClassImpl() const
{
    return ExpressionPackage::_instance()->getTypeSelectExpression();
}

