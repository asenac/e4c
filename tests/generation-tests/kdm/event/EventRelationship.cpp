
#include "EventRelationship.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/event/AbstractEventElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::EventRelationship include) START*/
/*PROTECTED REGION END*/

EventRelationship::EventRelationship() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(EventRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

EventRelationship::~EventRelationship()
{
    /*PROTECTED REGION ID(EventRelationship destructor) START*/
    /*PROTECTED REGION END*/
}

EventRelationship::to_t EventRelationship::getTo() const
{
    return e4c::returned(m_to);
}

void EventRelationship::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

EventRelationship::from_t EventRelationship::getFrom() const
{
    return e4c::returned(m_from);
}

void EventRelationship::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::event::EventRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EventRelationship::eClassImpl() const
{
    return EventPackage::_instance()->getEventRelationship();
}

