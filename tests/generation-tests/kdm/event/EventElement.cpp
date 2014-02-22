
#include "EventElement.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::EventElement include) START*/
/*PROTECTED REGION END*/

EventElement::EventElement()
{
    /*PROTECTED REGION ID(EventElement constructor) START*/
    /*PROTECTED REGION END*/
}

EventElement::~EventElement()
{
    /*PROTECTED REGION ID(EventElement destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::EventElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EventElement::eClassImpl() const
{
    return EventPackage::_instance()->getEventElement();
}

