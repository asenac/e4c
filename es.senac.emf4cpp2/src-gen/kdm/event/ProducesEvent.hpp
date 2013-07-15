
#ifndef EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP
#define EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace event
{


// kdm::event::ProducesEvent
class ProducesEvent :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ProducesEvent_ptr ptr_type;

	ProducesEvent();
	virtual ~ProducesEvent();

	// Typedefs
	typedef ::e4c::impl::reference< ProducesEvent__to_tag > _to_t;
	typedef ::e4c::impl::reference< ProducesEvent__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP
