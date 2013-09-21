
#include "ProducesDataEvent.hpp"
#include <kdm/data/DataEvent.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

ProducesDataEvent::ProducesDataEvent() : 
	m_to(),
    m_from()
{
}

ProducesDataEvent::~ProducesDataEvent()
{
}

ProducesDataEvent::to_t ProducesDataEvent::getTo() const
{
	return e4c::returned(m_to);
}

ProducesDataEvent::from_t ProducesDataEvent::getFrom() const
{
	return e4c::returned(m_from);
}



