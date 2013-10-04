
#include "ExternalActor.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::ExternalActor include) START*/
/*PROTECTED REGION END*/

ExternalActor::ExternalActor()
{
	/*PROTECTED REGION ID(ExternalActor constructor) START*/
	/*PROTECTED REGION END*/
}

ExternalActor::~ExternalActor()
{
	/*PROTECTED REGION ID(ExternalActor destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::ExternalActor implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExternalActor::eClassImpl() const
{
	return PlatformPackage::_instance()->getExternalActor();
}
 
