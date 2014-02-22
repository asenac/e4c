
#include "StreamResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::StreamResource include) START*/
/*PROTECTED REGION END*/

StreamResource::StreamResource()
{
    /*PROTECTED REGION ID(StreamResource constructor) START*/
    /*PROTECTED REGION END*/
}

StreamResource::~StreamResource()
{
    /*PROTECTED REGION ID(StreamResource destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::StreamResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StreamResource::eClassImpl() const
{
    return PlatformPackage::_instance()->getStreamResource();
}

