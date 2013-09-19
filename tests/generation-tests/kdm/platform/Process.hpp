
#ifndef EMF_CPP_KDM_PLATFORM_PROCESS__HPP
#define EMF_CPP_KDM_PLATFORM_PROCESS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/RuntimeResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::Process
class Process :  public virtual ::kdm::platform::RuntimeResource
{
public:

	typedef Process_ptr ptr_type;
	
	Process();
	virtual ~Process();

	
	
	
	
protected:

	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PROCESS__HPP
