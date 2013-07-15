
#ifndef EMF_CPP_KDM_EVENT_ONEXIT__HPP
#define EMF_CPP_KDM_EVENT_ONEXIT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/Transition.hpp>


namespace kdm
{
namespace event
{


// kdm::event::OnExit
class OnExit :  public virtual ::kdm::event::Transition
{
public:

	typedef OnExit_ptr ptr_type;

	OnExit();
	virtual ~OnExit();

	// Typedefs
	
	
	// Members
	
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ONEXIT__HPP
