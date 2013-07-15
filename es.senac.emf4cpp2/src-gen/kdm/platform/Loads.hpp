
#ifndef EMF_CPP_KDM_PLATFORM_LOADS__HPP
#define EMF_CPP_KDM_PLATFORM_LOADS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::Loads
class Loads :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Loads_ptr ptr_type;

	Loads();
	virtual ~Loads();

	// Typedefs
	typedef ::e4c::impl::reference< Loads__to_tag > _to_t;
	typedef ::e4c::impl::reference< Loads__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_LOADS__HPP
