
#include "ProducesEvent.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/Event.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::ProducesEvent include) START*/
/*PROTECTED REGION END*/

ProducesEvent::ProducesEvent() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ProducesEvent constructor) START*/
    /*PROTECTED REGION END*/
}

ProducesEvent::~ProducesEvent()
{
    /*PROTECTED REGION ID(ProducesEvent destructor) START*/
    /*PROTECTED REGION END*/
}

ProducesEvent::to_t ProducesEvent::getTo() const
{
    return e4c::returned(m_to);
}

void ProducesEvent::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ProducesEvent::from_t ProducesEvent::getFrom() const
{
    return e4c::returned(m_from);
}

void ProducesEvent::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::event::ProducesEvent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ProducesEvent::eClassImpl() const
{
    return EventPackage::_instance()->getProducesEvent();
}

