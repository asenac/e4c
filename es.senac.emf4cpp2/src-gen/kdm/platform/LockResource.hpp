
#ifndef EMF_CPP_KDM_PLATFORM_LOCKRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_LOCKRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::LockResource
class LockResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef LockResource_ptr ptr_type;

	LockResource();
	virtual ~LockResource();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_LOCKRESOURCE__HPP
