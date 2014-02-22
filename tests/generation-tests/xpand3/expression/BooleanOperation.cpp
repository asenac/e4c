
#include "BooleanOperation.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::BooleanOperation include) START*/
/*PROTECTED REGION END*/

BooleanOperation::BooleanOperation()
{
    /*PROTECTED REGION ID(BooleanOperation constructor) START*/
    /*PROTECTED REGION END*/
}

BooleanOperation::~BooleanOperation()
{
    /*PROTECTED REGION ID(BooleanOperation destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::BooleanOperation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BooleanOperation::eClassImpl() const
{
    return ExpressionPackage::_instance()->getBooleanOperation();
}

