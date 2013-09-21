
#include "ReadsState.hpp"
#include <kdm/event/State.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::event;

ReadsState::ReadsState() : 
	m_to(),
    m_from()
{
}

ReadsState::~ReadsState()
{
}

ReadsState::to_t ReadsState::getTo() const
{
	return e4c::returned(m_to);
}

ReadsState::from_t ReadsState::getFrom() const
{
	return e4c::returned(m_from);
}



