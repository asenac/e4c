
#ifndef EMF_CPP_KDM_PLATFORM_LOCKRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_LOCKRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class LockResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef LockResource_ptr ptr_type;
	
	LockResource();
	virtual ~LockResource();

	
	

	/*PROTECTED REGION ID(kdm::platform::LockResource public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::LockResource protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_LOCKRESOURCE__HPP
