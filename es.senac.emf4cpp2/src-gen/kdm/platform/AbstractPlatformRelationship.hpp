
#ifndef EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMRELATIONSHIP__HPP
#define EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMRELATIONSHIP__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::AbstractPlatformRelationship
class AbstractPlatformRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractPlatformRelationship_ptr ptr_type;

	AbstractPlatformRelationship();
	virtual ~AbstractPlatformRelationship();

	// Typedefs
	
	
	// Members
	
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMRELATIONSHIP__HPP
