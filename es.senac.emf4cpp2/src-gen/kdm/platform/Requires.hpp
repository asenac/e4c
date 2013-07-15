
#ifndef EMF_CPP_KDM_PLATFORM_REQUIRES__HPP
#define EMF_CPP_KDM_PLATFORM_REQUIRES__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::Requires
class Requires :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Requires_ptr ptr_type;

	Requires();
	virtual ~Requires();

	// Typedefs
	typedef ::e4c::impl::reference< Requires__to_tag > _to_t;
	typedef ::e4c::impl::reference< Requires__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_REQUIRES__HPP
