
#ifndef EMF_CPP_KDM_PLATFORM_BINDSTO__HPP
#define EMF_CPP_KDM_PLATFORM_BINDSTO__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::BindsTo
class BindsTo :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef BindsTo_ptr ptr_type;

	BindsTo();
	virtual ~BindsTo();

	// Typedefs
	typedef ::e4c::impl::reference< BindsTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< BindsTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_BINDSTO__HPP
