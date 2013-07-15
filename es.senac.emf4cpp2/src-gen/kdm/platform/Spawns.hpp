
#ifndef EMF_CPP_KDM_PLATFORM_SPAWNS__HPP
#define EMF_CPP_KDM_PLATFORM_SPAWNS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::Spawns
class Spawns :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Spawns_ptr ptr_type;

	Spawns();
	virtual ~Spawns();

	// Typedefs
	typedef ::e4c::impl::reference< Spawns__to_tag > _to_t;
	typedef ::e4c::impl::reference< Spawns__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_SPAWNS__HPP
