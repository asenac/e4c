
#include "ExtensionAspect.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::ExtensionAspect include) START*/
/*PROTECTED REGION END*/

ExtensionAspect::ExtensionAspect() :
    m_expression()
{
    /*PROTECTED REGION ID(ExtensionAspect constructor) START*/
    /*PROTECTED REGION END*/
}

ExtensionAspect::~ExtensionAspect()
{
    /*PROTECTED REGION ID(ExtensionAspect destructor) START*/
    /*PROTECTED REGION END*/
}

ExtensionAspect::expression_t ExtensionAspect::getExpression() const
{
    return e4c::returned(m_expression);
}


void ExtensionAspect::setExpression(expression_t expression_)
{
    m_expression.reset(expression_);
}

ExtensionAspect::expression_t ExtensionAspect::releaseExpression()
{
    return m_expression.release();
}



/*PROTECTED REGION ID(xpand3::declaration::ExtensionAspect implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExtensionAspect::eClassImpl() const
{
    return DeclarationPackage::_instance()->getExtensionAspect();
}

