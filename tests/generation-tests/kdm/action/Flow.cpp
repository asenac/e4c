
#include "Flow.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Flow include) START*/
/*PROTECTED REGION END*/

Flow::Flow()
{
    /*PROTECTED REGION ID(Flow constructor) START*/
    /*PROTECTED REGION END*/
}

Flow::~Flow()
{
    /*PROTECTED REGION ID(Flow destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::Flow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Flow::eClassImpl() const
{
    return ActionPackage::_instance()->getFlow();
}

