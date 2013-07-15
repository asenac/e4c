
#ifndef EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
#define EMF_CPP_KDM_EVENT_EVENTMODEL__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace event
{


// kdm::event::EventModel
class EventModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef EventModel_ptr ptr_type;

	EventModel();
	virtual ~EventModel();

	// Typedefs
	typedef ::e4c::impl::reference< EventModel__eventElement_tag > _eventElement_t;

	
	// Members
	_eventElement_t eventElement;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
