
#ifndef EMF_CPP_KDM_PLATFORM_MACHINE__HPP
#define EMF_CPP_KDM_PLATFORM_MACHINE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< Machine__deployedComponent_tag > _deployedComponent_t;
	typedef ::e4c::impl::reference< Machine__deployedResource_tag > _deployedResource_t;

	
	// Members
	_deployedComponent_t deployedComponent;
	_deployedResource_t deployedResource;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MACHINE__HPP
