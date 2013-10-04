
#include "FileResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::FileResource include) START*/
/*PROTECTED REGION END*/

FileResource::FileResource()
{
	/*PROTECTED REGION ID(FileResource constructor) START*/
	/*PROTECTED REGION END*/
}

FileResource::~FileResource()
{
	/*PROTECTED REGION ID(FileResource destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::platform::FileResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FileResource::eClassImpl() const
{
	return PlatformPackage::_instance()->getFileResource();
}
 
