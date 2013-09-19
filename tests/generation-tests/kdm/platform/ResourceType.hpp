
#ifndef EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP
#define EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::platform::AbstractPlatformElement > platformElement_t;

	
	// TODO

	
protected:

	platformElement_t m_platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP
