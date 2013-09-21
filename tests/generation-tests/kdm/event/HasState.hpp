
#ifndef EMF_CPP_KDM_EVENT_HASSTATE__HPP
#define EMF_CPP_KDM_EVENT_HASSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::HasState
class HasState :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef HasState_ptr ptr_type;
	
	HasState();
	virtual ~HasState();

	typedef kdm::event::AbstractEventElement_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::event::AbstractEventElement_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_HASSTATE__HPP
