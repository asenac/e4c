
#include "BlockUnit.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::BlockUnit include) START*/
/*PROTECTED REGION END*/

BlockUnit::BlockUnit()
{
    /*PROTECTED REGION ID(BlockUnit constructor) START*/
    /*PROTECTED REGION END*/
}

BlockUnit::~BlockUnit()
{
    /*PROTECTED REGION ID(BlockUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::BlockUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BlockUnit::eClassImpl() const
{
    return ActionPackage::_instance()->getBlockUnit();
}

