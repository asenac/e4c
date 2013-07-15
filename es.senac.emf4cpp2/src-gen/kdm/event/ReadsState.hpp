
#ifndef EMF_CPP_KDM_EVENT_READSSTATE__HPP
#define EMF_CPP_KDM_EVENT_READSSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace event
{


// kdm::event::ReadsState
class ReadsState :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsState_ptr ptr_type;

	ReadsState();
	virtual ~ReadsState();

	// Typedefs
	typedef ::e4c::impl::reference< ReadsState__to_tag > _to_t;
	typedef ::e4c::impl::reference< ReadsState__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_READSSTATE__HPP
