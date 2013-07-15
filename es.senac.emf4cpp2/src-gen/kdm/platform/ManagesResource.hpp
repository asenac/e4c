
#ifndef EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::ManagesResource
class ManagesResource :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ManagesResource_ptr ptr_type;

	ManagesResource();
	virtual ~ManagesResource();

	// Typedefs
	typedef ::e4c::impl::reference< ManagesResource__to_tag > _to_t;
	typedef ::e4c::impl::reference< ManagesResource__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP
