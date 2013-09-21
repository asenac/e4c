
#ifndef EMF_CPP_KDM_EVENT_CONSUMESEVENT__HPP
#define EMF_CPP_KDM_EVENT_CONSUMESEVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::ConsumesEvent
class ConsumesEvent :  public virtual ::kdm::event::AbstractEventRelationship
{
public:

	typedef ConsumesEvent_ptr ptr_type;
	
	ConsumesEvent();
	virtual ~ConsumesEvent();

	typedef kdm::event::Event_ptr to_t;
	typedef kdm::event::Transition_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::event::Event_ptr m_to;
	kdm::event::Transition_ptr m_from;

		
protected:

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_CONSUMESEVENT__HPP