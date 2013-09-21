
#include "AliasDef.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::AliasDef include) START*/
/*PROTECTED REGION END*/

AliasDef::AliasDef()
{
}

AliasDef::~AliasDef()
{
}




/*PROTECTED REGION ID(idlmm::AliasDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AliasDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getAliasDef();
}
 
