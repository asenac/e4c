
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::PlatformRelationship
class PlatformRelationship :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef PlatformRelationship_ptr ptr_type;
	
	PlatformRelationship();
	virtual ~PlatformRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::platform::AbstractPlatformElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP
