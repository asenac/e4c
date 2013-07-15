
#ifndef EMF_CPP_KDM_EVENT_EVENTACTION__HPP
#define EMF_CPP_KDM_EVENT_EVENTACTION__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>


namespace kdm
{
namespace event
{


// kdm::event::EventAction
class EventAction :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef EventAction_ptr ptr_type;

	EventAction();
	virtual ~EventAction();

	// Typedefs
	typedef ::e4c::impl::attribute< EventAction__kind_tag > _kind_t;
	typedef ::e4c::impl::reference< EventAction__eventElement_tag > _eventElement_t;

	
	// Members
	_kind_t kind;
	_eventElement_t eventElement;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTACTION__HPP
