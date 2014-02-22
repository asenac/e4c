
#include "FinallyUnit.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::FinallyUnit include) START*/
/*PROTECTED REGION END*/

FinallyUnit::FinallyUnit()
{
    /*PROTECTED REGION ID(FinallyUnit constructor) START*/
    /*PROTECTED REGION END*/
}

FinallyUnit::~FinallyUnit()
{
    /*PROTECTED REGION ID(FinallyUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::FinallyUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FinallyUnit::eClassImpl() const
{
    return ActionPackage::_instance()->getFinallyUnit();
}

