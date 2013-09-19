
#ifndef EMF_CPP_KDM_PLATFORM_EXTERNALACTOR__HPP
#define EMF_CPP_KDM_PLATFORM_EXTERNALACTOR__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/PlatformAction.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::ExternalActor
class ExternalActor :  public virtual ::kdm::platform::PlatformAction
{
public:

	typedef ExternalActor_ptr ptr_type;
	
	ExternalActor();
	virtual ~ExternalActor();

	
	
	
	
protected:

	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_EXTERNALACTOR__HPP
