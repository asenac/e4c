
#include "InitialState.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::InitialState include) START*/
/*PROTECTED REGION END*/

InitialState::InitialState()
{
    /*PROTECTED REGION ID(InitialState constructor) START*/
    /*PROTECTED REGION END*/
}

InitialState::~InitialState()
{
    /*PROTECTED REGION ID(InitialState destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::InitialState implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InitialState::eClassImpl() const
{
    return EventPackage::_instance()->getInitialState();
}

