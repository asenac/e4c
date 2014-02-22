
#include "BooleanLiteral.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::BooleanLiteral include) START*/
/*PROTECTED REGION END*/

BooleanLiteral::BooleanLiteral()
{
    /*PROTECTED REGION ID(BooleanLiteral constructor) START*/
    /*PROTECTED REGION END*/
}

BooleanLiteral::~BooleanLiteral()
{
    /*PROTECTED REGION ID(BooleanLiteral destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::BooleanLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BooleanLiteral::eClassImpl() const
{
    return ExpressionPackage::_instance()->getBooleanLiteral();
}

