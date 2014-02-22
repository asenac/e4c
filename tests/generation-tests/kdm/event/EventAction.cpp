
#include "EventAction.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/Event.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::EventAction include) START*/
/*PROTECTED REGION END*/

EventAction::EventAction() :
    m_kind(),
    m_eventElement()
{
    /*PROTECTED REGION ID(EventAction constructor) START*/
    /*PROTECTED REGION END*/
}

EventAction::~EventAction()
{
    /*PROTECTED REGION ID(EventAction destructor) START*/
    /*PROTECTED REGION END*/
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


void EventAction::addEventElement(kdm::event::Event_ptr eventElement_)
{
    m_eventElement.insert(std::unique_ptr < kdm::event::Event >(eventElement_));
}

void EventAction::addAllEventElement(const eventElement_t& eventElement_)
{
    for (auto i = eventElement_.begin(); i != eventElement_.end(); i++)
        addEventElement(*i);
}



/*PROTECTED REGION ID(kdm::event::EventAction implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EventAction::eClassImpl() const
{
    return EventPackage::_instance()->getEventAction();
}

