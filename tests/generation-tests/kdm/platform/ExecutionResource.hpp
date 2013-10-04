
#ifndef EMF_CPP_KDM_PLATFORM_EXECUTIONRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_EXECUTIONRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class ExecutionResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef ExecutionResource_ptr ptr_type;
	
	ExecutionResource();
	virtual ~ExecutionResource();

	
	

	/*PROTECTED REGION ID(kdm::platform::ExecutionResource public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::ExecutionResource protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_EXECUTIONRESOURCE__HPP
