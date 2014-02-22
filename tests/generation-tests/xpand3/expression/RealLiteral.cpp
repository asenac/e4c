
#include "RealLiteral.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::RealLiteral include) START*/
/*PROTECTED REGION END*/

RealLiteral::RealLiteral()
{
    /*PROTECTED REGION ID(RealLiteral constructor) START*/
    /*PROTECTED REGION END*/
}

RealLiteral::~RealLiteral()
{
    /*PROTECTED REGION ID(RealLiteral destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::RealLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RealLiteral::eClassImpl() const
{
    return ExpressionPackage::_instance()->getRealLiteral();
}

