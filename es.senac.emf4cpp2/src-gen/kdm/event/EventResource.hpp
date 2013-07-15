
#ifndef EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
#define EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>


namespace kdm
{
namespace event
{


// kdm::event::EventResource
class EventResource :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef EventResource_ptr ptr_type;

	EventResource();
	virtual ~EventResource();

	// Typedefs
	typedef ::e4c::impl::reference< EventResource__eventElement_tag > _eventElement_t;

	
	// Members
	_eventElement_t eventElement;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
