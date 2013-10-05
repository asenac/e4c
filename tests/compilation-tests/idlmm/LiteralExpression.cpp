#include "LiteralExpression.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::LiteralExpression include) START*/
/*PROTECTED REGION END*/

LiteralExpression::LiteralExpression()
{
	/*PROTECTED REGION ID(LiteralExpression constructor) START*/
	/*PROTECTED REGION END*/
}

LiteralExpression::~LiteralExpression()
{
	/*PROTECTED REGION ID(LiteralExpression destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(idlmm::LiteralExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr LiteralExpression::eClassImpl() const
{
	return IdlmmPackage::_instance()->getLiteralExpression();
}
 
