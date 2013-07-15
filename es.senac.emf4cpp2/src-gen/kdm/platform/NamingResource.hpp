
#ifndef EMF_CPP_KDM_PLATFORM_NAMINGRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_NAMINGRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::NamingResource
class NamingResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef NamingResource_ptr ptr_type;

	NamingResource();
	virtual ~NamingResource();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_NAMINGRESOURCE__HPP
