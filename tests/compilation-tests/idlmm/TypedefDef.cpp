
#include "TypedefDef.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::TypedefDef include) START*/
/*PROTECTED REGION END*/

TypedefDef::TypedefDef()
{
}

TypedefDef::~TypedefDef()
{
}




/*PROTECTED REGION ID(idlmm::TypedefDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TypedefDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getTypedefDef();
}
 
