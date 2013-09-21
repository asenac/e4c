
#include "NextState.hpp"
#include <kdm/event/State.hpp>
#include <kdm/event/Transition.hpp>

using namespace kdm::event;

NextState::NextState() : 
	m_to(),
    m_from()
{
}

NextState::~NextState()
{
}

NextState::to_t NextState::getTo() const
{
	return e4c::returned(m_to);
}

NextState::from_t NextState::getFrom() const
{
	return e4c::returned(m_from);
}



