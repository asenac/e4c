
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef std::vector < kdm::code::Module_ptr > groupedCode_t;

	
	// TODO

	
protected:

	groupedCode_t m_groupedCode;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP
