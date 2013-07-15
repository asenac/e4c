
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< PlatformRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< PlatformRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP
