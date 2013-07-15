
#ifndef EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP
#define EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< EventRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< EventRelationship__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP
