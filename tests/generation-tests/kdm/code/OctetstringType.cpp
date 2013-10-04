
#include "OctetstringType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::OctetstringType include) START*/
/*PROTECTED REGION END*/

OctetstringType::OctetstringType()
{
	/*PROTECTED REGION ID(OctetstringType constructor) START*/
	/*PROTECTED REGION END*/
}

OctetstringType::~OctetstringType()
{
	/*PROTECTED REGION ID(OctetstringType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::OctetstringType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OctetstringType::eClassImpl() const
{
	return CodePackage::_instance()->getOctetstringType();
}
 
