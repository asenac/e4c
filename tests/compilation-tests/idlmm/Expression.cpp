
#include "Expression.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Expression include) START*/
/*PROTECTED REGION END*/

Expression::Expression()
{
}

Expression::~Expression()
{
}




/*PROTECTED REGION ID(idlmm::Expression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Expression::eClassImpl() const
{
	return IdlmmPackage::_instance()->getExpression();
}
 
