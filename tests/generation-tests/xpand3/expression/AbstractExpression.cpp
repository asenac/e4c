
#include "AbstractExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::AbstractExpression include) START*/
/*PROTECTED REGION END*/

AbstractExpression::AbstractExpression()
{
	/*PROTECTED REGION ID(AbstractExpression constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractExpression::~AbstractExpression()
{
	/*PROTECTED REGION ID(AbstractExpression destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(xpand3::expression::AbstractExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractExpression::eClassImpl() const
{
	return ExpressionPackage::_instance()->getAbstractExpression();
}
 
