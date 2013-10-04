
#include "PlatformElement.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::PlatformElement include) START*/
/*PROTECTED REGION END*/

PlatformElement::PlatformElement()
{
	/*PROTECTED REGION ID(PlatformElement constructor) START*/
	/*PROTECTED REGION END*/
}

PlatformElement::~PlatformElement()
{
	/*PROTECTED REGION ID(PlatformElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::PlatformElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PlatformElement::eClassImpl() const
{
	return PlatformPackage::_instance()->getPlatformElement();
}
 
