
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::DeployedSoftwareSystem
class DeployedSoftwareSystem :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef DeployedSoftwareSystem_ptr ptr_type;

	DeployedSoftwareSystem();
	virtual ~DeployedSoftwareSystem();

	// Typedefs
	typedef ::e4c::impl::reference< DeployedSoftwareSystem__groupedComponent_tag > _groupedComponent_t;

	
	// Members
	_groupedComponent_t groupedComponent;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP
