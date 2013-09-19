
#ifndef EMF_CPP_KDM_EVENT_READSSTATE__HPP
#define EMF_CPP_KDM_EVENT_READSSTATE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


// kdm::event::ReadsState
class ReadsState :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ReadsState_ptr ptr_type;
	
	ReadsState();
	virtual ~ReadsState();

	typedef kdm::event::State_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_READSSTATE__HPP
