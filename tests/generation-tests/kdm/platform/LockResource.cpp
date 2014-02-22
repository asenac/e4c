
#include "LockResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::LockResource include) START*/
/*PROTECTED REGION END*/

LockResource::LockResource()
{
    /*PROTECTED REGION ID(LockResource constructor) START*/
    /*PROTECTED REGION END*/
}

LockResource::~LockResource()
{
    /*PROTECTED REGION ID(LockResource destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::LockResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr LockResource::eClassImpl() const
{
    return PlatformPackage::_instance()->getLockResource();
}

