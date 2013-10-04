
#include "MarshalledResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::MarshalledResource include) START*/
/*PROTECTED REGION END*/

MarshalledResource::MarshalledResource()
{
	/*PROTECTED REGION ID(MarshalledResource constructor) START*/
	/*PROTECTED REGION END*/
}

MarshalledResource::~MarshalledResource()
{
	/*PROTECTED REGION ID(MarshalledResource destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::MarshalledResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MarshalledResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getMarshalledResource();
}
 
