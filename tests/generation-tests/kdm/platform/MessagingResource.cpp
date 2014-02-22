
#include "MessagingResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::MessagingResource include) START*/
/*PROTECTED REGION END*/

MessagingResource::MessagingResource()
{
    /*PROTECTED REGION ID(MessagingResource constructor) START*/
    /*PROTECTED REGION END*/
}

MessagingResource::~MessagingResource()
{
    /*PROTECTED REGION ID(MessagingResource destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::MessagingResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MessagingResource::eClassImpl() const
{
    return PlatformPackage::_instance()->getMessagingResource();
}

