
#ifndef EMF_CPP_KDM_EVENT_CONSUMESEVENT__HPP
#define EMF_CPP_KDM_EVENT_CONSUMESEVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< ConsumesEvent__to_tag > _to_t;
	typedef ::e4c::impl::reference< ConsumesEvent__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_CONSUMESEVENT__HPP
