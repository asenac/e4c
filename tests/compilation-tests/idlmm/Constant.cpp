
#include "Constant.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Constant include) START*/
/*PROTECTED REGION END*/

Constant::Constant()
{
}

Constant::~Constant()
{
}




/*PROTECTED REGION ID(idlmm::Constant implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Constant::eClassImpl() const
{
	return IdlmmPackage::_instance()->getConstant();
}
 
