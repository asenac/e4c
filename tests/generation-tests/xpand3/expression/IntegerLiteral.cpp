
#include "IntegerLiteral.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::IntegerLiteral include) START*/
/*PROTECTED REGION END*/

IntegerLiteral::IntegerLiteral()
{
	/*PROTECTED REGION ID(IntegerLiteral constructor) START*/
	/*PROTECTED REGION END*/
}

IntegerLiteral::~IntegerLiteral()
{
	/*PROTECTED REGION ID(IntegerLiteral destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::IntegerLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IntegerLiteral::eClassImpl() const
{
	return ExpressionPackage::_instance()->getIntegerLiteral();
}
 
