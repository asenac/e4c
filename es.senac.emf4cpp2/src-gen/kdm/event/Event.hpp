
#ifndef EMF_CPP_KDM_EVENT_EVENT__HPP
#define EMF_CPP_KDM_EVENT_EVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>


namespace kdm
{
namespace event
{


// kdm::event::Event
class Event :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef Event_ptr ptr_type;

	Event();
	virtual ~Event();

	// Typedefs
	typedef ::e4c::impl::attribute< Event__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENT__HPP
