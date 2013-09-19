
#ifndef EMF_CPP_KDM_PLATFORM_MACHINE__HPP
#define EMF_CPP_KDM_PLATFORM_MACHINE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::Machine
class Machine :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef Machine_ptr ptr_type;
	
	Machine();
	virtual ~Machine();

	typedef boost::ptr_set < kdm::platform::DeployedComponent > deployedComponent_t;
	typedef boost::ptr_set < kdm::platform::DeployedResource > deployedResource_t;

	
	// TODO
	// TODO

	
protected:

	deployedComponent_t m_deployedComponent;
	deployedResource_t m_deployedResource;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MACHINE__HPP
