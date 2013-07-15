
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::DeployedComponent
class DeployedComponent :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef DeployedComponent_ptr ptr_type;

	DeployedComponent();
	virtual ~DeployedComponent();

	// Typedefs
	typedef ::e4c::impl::reference< DeployedComponent__groupedCode_tag > _groupedCode_t;

	
	// Members
	_groupedCode_t groupedCode;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP
