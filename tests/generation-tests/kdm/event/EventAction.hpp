
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

	typedef int kind_t;
	typedef boost::ptr_set < kdm::event::Event > eventElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	// TODO

	
protected:

	kind_t m_kind;
	eventElement_t m_eventElement;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTACTION__HPP
