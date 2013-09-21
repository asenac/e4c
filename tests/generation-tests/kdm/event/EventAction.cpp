
#include "EventAction.hpp"
#include <kdm/event/Event.hpp>

using namespace kdm::event;

EventAction::EventAction() : 
	m_kind(),
    m_eventElement()
{
}

EventAction::~EventAction()
{
}

void EventAction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

EventAction::kind_t EventAction::getKind() const
{
	return m_kind;
}

EventAction::eventElement_t EventAction::getEventElement() const
{
	return e4c::returned(m_eventElement);
}



