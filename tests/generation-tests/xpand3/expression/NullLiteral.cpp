
#include "NullLiteral.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::NullLiteral include) START*/
/*PROTECTED REGION END*/

NullLiteral::NullLiteral()
{
    /*PROTECTED REGION ID(NullLiteral constructor) START*/
    /*PROTECTED REGION END*/
}

NullLiteral::~NullLiteral()
{
    /*PROTECTED REGION ID(NullLiteral destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::NullLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NullLiteral::eClassImpl() const
{
    return ExpressionPackage::_instance()->getNullLiteral();
}

