
#include "ConsumesEvent.hpp"
#include <kdm/event/Event.hpp>
#include <kdm/event/Transition.hpp>

using namespace kdm::event;

ConsumesEvent::ConsumesEvent() : 
	m_to(),
    m_from()
{
}

ConsumesEvent::~ConsumesEvent()
{
}

ConsumesEvent::to_t ConsumesEvent::getTo() const
{
	return e4c::returned(m_to);
}

ConsumesEvent::from_t ConsumesEvent::getFrom() const
{
	return e4c::returned(m_from);
}



