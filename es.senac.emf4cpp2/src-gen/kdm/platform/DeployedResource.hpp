
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::DeployedResource
class DeployedResource :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef DeployedResource_ptr ptr_type;

	DeployedResource();
	virtual ~DeployedResource();

	// Typedefs
	typedef ::e4c::impl::reference< DeployedResource__platformElement_tag > _platformElement_t;

	
	// Members
	_platformElement_t platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP
