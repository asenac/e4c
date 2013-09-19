
#ifndef EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
#define EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::event::AbstractEventElement > eventElement_t;

	
	// TODO

	
protected:

	eventElement_t m_eventElement;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
