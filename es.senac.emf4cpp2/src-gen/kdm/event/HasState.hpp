
#ifndef EMF_CPP_KDM_EVENT_HASSTATE__HPP
#define EMF_CPP_KDM_EVENT_HASSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace event
{


// kdm::event::HasState
class HasState :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef HasState_ptr ptr_type;

	HasState();
	virtual ~HasState();

	// Typedefs
	typedef ::e4c::impl::reference< HasState__to_tag > _to_t;
	typedef ::e4c::impl::reference< HasState__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_HASSTATE__HPP
