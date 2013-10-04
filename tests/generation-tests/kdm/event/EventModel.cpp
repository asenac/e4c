
#include "EventModel.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/AbstractEventElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::EventModel include) START*/
/*PROTECTED REGION END*/

EventModel::EventModel() : 
	m_eventElement()
{
	/*PROTECTED REGION ID(EventModel constructor) START*/
	/*PROTECTED REGION END*/
}

EventModel::~EventModel()
{
	/*PROTECTED REGION ID(EventModel destructor) START*/
	/*PROTECTED REGION END*/
}

EventModel::eventElement_t EventModel::getEventElement() const
{
	return e4c::returned(m_eventElement);
}


void EventModel::addEventElement(kdm::event::AbstractEventElement_ptr eventElement_)
{
	m_eventElement.insert(std::unique_ptr < kdm::event::AbstractEventElement >(eventElement_));
}

void EventModel::addAllEventElement(const eventElement_t& eventElement_)
{
	for (auto i = eventElement_.begin(); i != eventElement_.end(); i++)
		addEventElement(*i);
}



/*PROTECTED REGION ID(kdm::event::EventModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EventModel::eClassImpl() const
{
	return EventPackage::_instance()->getEventModel();
}
 
