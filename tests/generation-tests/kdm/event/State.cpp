
#include "State.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::State include) START*/
/*PROTECTED REGION END*/

State::State()
{
    /*PROTECTED REGION ID(State constructor) START*/
    /*PROTECTED REGION END*/
}

State::~State()
{
    /*PROTECTED REGION ID(State destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::State implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr State::eClassImpl() const
{
    return EventPackage::_instance()->getState();
}

