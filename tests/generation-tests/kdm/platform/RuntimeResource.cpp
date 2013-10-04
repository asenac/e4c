
#include "RuntimeResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::RuntimeResource include) START*/
/*PROTECTED REGION END*/

RuntimeResource::RuntimeResource()
{
	/*PROTECTED REGION ID(RuntimeResource constructor) START*/
	/*PROTECTED REGION END*/
}

RuntimeResource::~RuntimeResource()
{
	/*PROTECTED REGION ID(RuntimeResource destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::RuntimeResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RuntimeResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getRuntimeResource();
}
 
