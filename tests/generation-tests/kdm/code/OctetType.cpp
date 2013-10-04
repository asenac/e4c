
#include "OctetType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::OctetType include) START*/
/*PROTECTED REGION END*/

OctetType::OctetType()
{
	/*PROTECTED REGION ID(OctetType constructor) START*/
	/*PROTECTED REGION END*/
}

OctetType::~OctetType()
{
	/*PROTECTED REGION ID(OctetType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::OctetType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OctetType::eClassImpl() const
{
	return CodePackage::_instance()->getOctetType();
}
 
