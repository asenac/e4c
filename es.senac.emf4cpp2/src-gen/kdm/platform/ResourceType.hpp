
#ifndef EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP
#define EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::ResourceType
class ResourceType :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef ResourceType_ptr ptr_type;

	ResourceType();
	virtual ~ResourceType();

	// Typedefs
	typedef ::e4c::impl::reference< ResourceType__platformElement_tag > _platformElement_t;

	
	// Members
	_platformElement_t platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP
