
#include "Literal.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::Literal include) START*/
/*PROTECTED REGION END*/

Literal::Literal() :
    m_literalValue()
{
    /*PROTECTED REGION ID(Literal constructor) START*/
    /*PROTECTED REGION END*/
}

Literal::~Literal()
{
    /*PROTECTED REGION ID(Literal destructor) START*/
    /*PROTECTED REGION END*/
}

Literal::literalValue_t Literal::getLiteralValue() const
{
    return e4c::returned(m_literalValue);
}


void Literal::setLiteralValue(literalValue_t literalValue_)
{
    m_literalValue.reset(literalValue_);
}

Literal::literalValue_t Literal::releaseLiteralValue()
{
    return m_literalValue.release();
}



/*PROTECTED REGION ID(xpand3::expression::Literal implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Literal::eClassImpl() const
{
    return ExpressionPackage::_instance()->getLiteral();
}

