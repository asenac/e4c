
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef std::vector < kdm::platform::DeployedComponent_ptr > groupedComponent_t;

	
	// TODO

	
protected:

	groupedComponent_t m_groupedComponent;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP
