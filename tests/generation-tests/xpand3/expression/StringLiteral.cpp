
#include "StringLiteral.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::StringLiteral include) START*/
/*PROTECTED REGION END*/

StringLiteral::StringLiteral()
{
	/*PROTECTED REGION ID(StringLiteral constructor) START*/
	/*PROTECTED REGION END*/
}

StringLiteral::~StringLiteral()
{
	/*PROTECTED REGION ID(StringLiteral destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::StringLiteral implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StringLiteral::eClassImpl() const
{
	return ExpressionPackage::_instance()->getStringLiteral();
}
 
