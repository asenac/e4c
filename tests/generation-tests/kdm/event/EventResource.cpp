
#include "EventResource.hpp"
#include <kdm/event/AbstractEventElement.hpp>

using namespace kdm::event;

EventResource::EventResource() : 
	m_eventElement()
{
}

EventResource::~EventResource()
{
}

EventResource::eventElement_t EventResource::getEventElement() const
{
	return e4c::returned(m_eventElement);
}



