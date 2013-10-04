
#include "NamingResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::NamingResource include) START*/
/*PROTECTED REGION END*/

NamingResource::NamingResource()
{
	/*PROTECTED REGION ID(NamingResource constructor) START*/
	/*PROTECTED REGION END*/
}

NamingResource::~NamingResource()
{
	/*PROTECTED REGION ID(NamingResource destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::NamingResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NamingResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getNamingResource();
}
 
