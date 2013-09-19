
#ifndef EMF_CPP_KDM_PLATFORM_RUNTIMERESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_RUNTIMERESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::RuntimeResource
class RuntimeResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef RuntimeResource_ptr ptr_type;
	
	RuntimeResource();
	virtual ~RuntimeResource();

	
	
	
	
protected:

	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_RUNTIMERESOURCE__HPP
