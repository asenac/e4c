
#ifndef EMF_CPP_KDM_EVENT_EVENTACTION__HPP
#define EMF_CPP_KDM_EVENT_EVENTACTION__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef ::kdm::core::String kind_t;
	typedef std::set < kdm::event::Event_ptr > eventElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	eventElement_t getEventElement() const;


	kind_t m_kind;
	std::set < std::unique_ptr < kdm::event::Event > > m_eventElement;

		
protected:

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTACTION__HPP
