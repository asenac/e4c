
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMELEMENT__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMELEMENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::PlatformElement
class PlatformElement :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef PlatformElement_ptr ptr_type;

	PlatformElement();
	virtual ~PlatformElement();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMELEMENT__HPP