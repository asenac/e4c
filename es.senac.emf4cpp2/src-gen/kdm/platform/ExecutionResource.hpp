
#ifndef EMF_CPP_KDM_PLATFORM_EXECUTIONRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_EXECUTIONRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::ExecutionResource
class ExecutionResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef ExecutionResource_ptr ptr_type;

	ExecutionResource();
	virtual ~ExecutionResource();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_EXECUTIONRESOURCE__HPP
