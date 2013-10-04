
#ifndef EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMRELATIONSHIP__HPP
#define EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMRELATIONSHIP__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class AbstractPlatformRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractPlatformRelationship_ptr ptr_type;
	
	virtual ~AbstractPlatformRelationship();

	
	

	/*PROTECTED REGION ID(kdm::platform::AbstractPlatformRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractPlatformRelationship();

	friend class PlatformPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::AbstractPlatformRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMRELATIONSHIP__HPP
