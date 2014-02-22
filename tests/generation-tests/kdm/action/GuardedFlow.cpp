
#include "GuardedFlow.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::GuardedFlow include) START*/
/*PROTECTED REGION END*/

GuardedFlow::GuardedFlow()
{
    /*PROTECTED REGION ID(GuardedFlow constructor) START*/
    /*PROTECTED REGION END*/
}

GuardedFlow::~GuardedFlow()
{
    /*PROTECTED REGION ID(GuardedFlow destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::GuardedFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GuardedFlow::eClassImpl() const
{
    return ActionPackage::_instance()->getGuardedFlow();
}

