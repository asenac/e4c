
#include "CatchUnit.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::CatchUnit include) START*/
/*PROTECTED REGION END*/

CatchUnit::CatchUnit()
{
    /*PROTECTED REGION ID(CatchUnit constructor) START*/
    /*PROTECTED REGION END*/
}

CatchUnit::~CatchUnit()
{
    /*PROTECTED REGION ID(CatchUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::CatchUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CatchUnit::eClassImpl() const
{
    return ActionPackage::_instance()->getCatchUnit();
}

