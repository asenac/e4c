
#include "ConstructorCallExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::ConstructorCallExpression include) START*/
/*PROTECTED REGION END*/

ConstructorCallExpression::ConstructorCallExpression() :
    m_type()
{
    /*PROTECTED REGION ID(ConstructorCallExpression constructor) START*/
    /*PROTECTED REGION END*/
}

ConstructorCallExpression::~ConstructorCallExpression()
{
    /*PROTECTED REGION ID(ConstructorCallExpression destructor) START*/
    /*PROTECTED REGION END*/
}

ConstructorCallExpression::type_t ConstructorCallExpression::getType() const
{
    return e4c::returned(m_type);
}


void ConstructorCallExpression::setType(type_t type_)
{
    m_type.reset(type_);
}

ConstructorCallExpression::type_t ConstructorCallExpression::releaseType()
{
    return m_type.release();
}



/*PROTECTED REGION ID(xpand3::expression::ConstructorCallExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConstructorCallExpression::eClassImpl() const
{
    return ExpressionPackage::_instance()->getConstructorCallExpression();
}

