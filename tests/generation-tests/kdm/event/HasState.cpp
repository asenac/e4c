
#include "HasState.hpp"
#include <kdm/event/AbstractEventElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::event;

HasState::HasState() : 
	m_to(),
    m_from()
{
}

HasState::~HasState()
{
}

HasState::to_t HasState::getTo() const
{
	return e4c::returned(m_to);
}

HasState::from_t HasState::getFrom() const
{
	return e4c::returned(m_from);
}



