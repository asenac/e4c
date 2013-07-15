
#ifndef EMF_CPP_KDM_PLATFORM_THREAD__HPP
#define EMF_CPP_KDM_PLATFORM_THREAD__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/RuntimeResource.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::Thread
class Thread :  public virtual ::kdm::platform::RuntimeResource
{
public:

	typedef Thread_ptr ptr_type;

	Thread();
	virtual ~Thread();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_THREAD__HPP
