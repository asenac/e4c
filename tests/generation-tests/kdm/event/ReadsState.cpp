
#include "ReadsState.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/State.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::ReadsState include) START*/
/*PROTECTED REGION END*/

ReadsState::ReadsState() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ReadsState constructor) START*/
    /*PROTECTED REGION END*/
}

ReadsState::~ReadsState()
{
    /*PROTECTED REGION ID(ReadsState destructor) START*/
    /*PROTECTED REGION END*/
}

ReadsState::to_t ReadsState::getTo() const
{
    return e4c::returned(m_to);
}

void ReadsState::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ReadsState::from_t ReadsState::getFrom() const
{
    return e4c::returned(m_from);
}

void ReadsState::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::event::ReadsState implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReadsState::eClassImpl() const
{
    return EventPackage::_instance()->getReadsState();
}

