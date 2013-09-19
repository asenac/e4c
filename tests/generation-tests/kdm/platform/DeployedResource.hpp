
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::platform::ResourceType > platformElement_t;

	
	// TODO

	
protected:

	platformElement_t m_platformElement;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDRESOURCE__HPP
