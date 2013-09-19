
#ifndef EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP
#define EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::EventRelationship
class EventRelationship :  public virtual ::kdm::event::AbstractEventRelationship
{
public:

	typedef EventRelationship_ptr ptr_type;
	
	EventRelationship();
	virtual ~EventRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::event::AbstractEventElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP
