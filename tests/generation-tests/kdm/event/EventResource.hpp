
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

	typedef std::set < kdm::event::AbstractEventElement_ptr > eventElement_t;

	
	eventElement_t getEventElement() const;


	std::set < std::unique_ptr < kdm::event::AbstractEventElement > > m_eventElement;

		
protected:

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
