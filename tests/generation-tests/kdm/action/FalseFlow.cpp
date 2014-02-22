
#include "FalseFlow.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::FalseFlow include) START*/
/*PROTECTED REGION END*/

FalseFlow::FalseFlow()
{
    /*PROTECTED REGION ID(FalseFlow constructor) START*/
    /*PROTECTED REGION END*/
}

FalseFlow::~FalseFlow()
{
    /*PROTECTED REGION ID(FalseFlow destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::FalseFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FalseFlow::eClassImpl() const
{
    return ActionPackage::_instance()->getFalseFlow();
}

