
#ifndef EMF_CPP_KDM_PLATFORM_WRITESRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_WRITESRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::WritesResource
class WritesResource :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef WritesResource_ptr ptr_type;

	WritesResource();
	virtual ~WritesResource();

	// Typedefs
	typedef ::e4c::impl::reference< WritesResource__to_tag > _to_t;
	typedef ::e4c::impl::reference< WritesResource__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_WRITESRESOURCE__HPP
