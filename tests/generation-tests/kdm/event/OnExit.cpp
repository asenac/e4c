
#include "OnExit.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::OnExit include) START*/
/*PROTECTED REGION END*/

OnExit::OnExit()
{
    /*PROTECTED REGION ID(OnExit constructor) START*/
    /*PROTECTED REGION END*/
}

OnExit::~OnExit()
{
    /*PROTECTED REGION ID(OnExit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::OnExit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OnExit::eClassImpl() const
{
    return EventPackage::_instance()->getOnExit();
}

