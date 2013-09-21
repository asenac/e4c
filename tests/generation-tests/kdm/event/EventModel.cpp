
#include "EventModel.hpp"
#include <kdm/event/AbstractEventElement.hpp>

using namespace kdm::event;

EventModel::EventModel() : 
	m_eventElement()
{
}

EventModel::~EventModel()
{
}

EventModel::eventElement_t EventModel::getEventElement() const
{
	return e4c::returned(m_eventElement);
}



