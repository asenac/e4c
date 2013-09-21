
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

	typedef std::set < kdm::platform::AbstractPlatformElement_ptr > platformElement_t;

	
	platformElement_t getPlatformElement() const;


	std::set < std::unique_ptr < kdm::platform::AbstractPlatformElement > > m_platformElement;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_RESOURCETYPE__HPP
