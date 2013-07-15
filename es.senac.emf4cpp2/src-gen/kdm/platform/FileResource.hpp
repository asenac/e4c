
#ifndef EMF_CPP_KDM_PLATFORM_FILERESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_FILERESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::FileResource
class FileResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef FileResource_ptr ptr_type;

	FileResource();
	virtual ~FileResource();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_FILERESOURCE__HPP
