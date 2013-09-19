
#ifndef EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
#define EMF_CPP_KDM_EVENT_EVENTMODEL__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::event::AbstractEventElement > eventElement_t;

	
	// TODO

	
protected:

	eventElement_t m_eventElement;

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
