
#ifndef EMF_CPP_KDM_PLATFORM_READSRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_READSRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::ReadsResource
class ReadsResource :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsResource_ptr ptr_type;

	ReadsResource();
	virtual ~ReadsResource();

	// Typedefs
	typedef ::e4c::impl::reference< ReadsResource__to_tag > _to_t;
	typedef ::e4c::impl::reference< ReadsResource__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_READSRESOURCE__HPP
