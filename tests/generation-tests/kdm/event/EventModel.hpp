
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

	typedef std::set < kdm::event::AbstractEventElement_ptr > eventElement_t;

	
	eventElement_t getEventElement() const;


	std::set < std::unique_ptr < kdm::event::AbstractEventElement > > m_eventElement;

		
protected:

};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
