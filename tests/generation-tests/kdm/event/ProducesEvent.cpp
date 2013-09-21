
#include "ProducesEvent.hpp"
#include <kdm/event/Event.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::event;

ProducesEvent::ProducesEvent() : 
	m_to(),
    m_from()
{
}

ProducesEvent::~ProducesEvent()
{
}

ProducesEvent::to_t ProducesEvent::getTo() const
{
	return e4c::returned(m_to);
}

ProducesEvent::from_t ProducesEvent::getFrom() const
{
	return e4c::returned(m_from);
}



