
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMELEMENT__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMELEMENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class PlatformElement :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef PlatformElement_ptr ptr_type;
	
	PlatformElement();
	virtual ~PlatformElement();

	
	

	/*PROTECTED REGION ID(kdm::platform::PlatformElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::PlatformElement protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMELEMENT__HPP
