
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

kind_t EventAction::getKind() const
{
	return m_kind;
}



