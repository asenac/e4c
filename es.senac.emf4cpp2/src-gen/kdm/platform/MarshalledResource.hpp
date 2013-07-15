
#ifndef EMF_CPP_KDM_PLATFORM_MARSHALLEDRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_MARSHALLEDRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::MarshalledResource
class MarshalledResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef MarshalledResource_ptr ptr_type;

	MarshalledResource();
	virtual ~MarshalledResource();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MARSHALLEDRESOURCE__HPP