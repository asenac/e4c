
#ifndef EMF_CPP_KDM_EVENT_EVENTELEMENT__HPP
#define EMF_CPP_KDM_EVENT_EVENTELEMENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>


namespace kdm
{
namespace event
{


// kdm::event::EventElement
class EventElement :  public virtual ::kdm::event::AbstractEventElement
{
public:

	typedef EventElement_ptr ptr_type;

	EventElement();
	virtual ~EventElement();

	// Typedefs
	
	
	// Members
	
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTELEMENT__HPP
