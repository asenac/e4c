
#include "EventResource.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/event/AbstractEventElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::EventResource include) START*/
/*PROTECTED REGION END*/

EventResource::EventResource() :
    m_eventElement()
{
    /*PROTECTED REGION ID(EventResource constructor) START*/
    /*PROTECTED REGION END*/
}

EventResource::~EventResource()
{
    /*PROTECTED REGION ID(EventResource destructor) START*/
    /*PROTECTED REGION END*/
}

EventResource::eventElement_t EventResource::getEventElement() const
{
    return e4c::returned(m_eventElement);
}


void EventResource::addEventElement(kdm::event::AbstractEventElement_ptr eventElement_)
{
    m_eventElement.insert(std::unique_ptr < kdm::event::AbstractEventElement >(eventElement_));
}

void EventResource::addAllEventElement(const eventElement_t& eventElement_)
{
    for (auto i = eventElement_.begin(); i != eventElement_.end(); i++)
        addEventElement(*i);
}



/*PROTECTED REGION ID(kdm::event::EventResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EventResource::eClassImpl() const
{
    return EventPackage::_instance()->getEventResource();
}

