
#include "SharedUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::SharedUnit include) START*/
/*PROTECTED REGION END*/

SharedUnit::SharedUnit()
{
    /*PROTECTED REGION ID(SharedUnit constructor) START*/
    /*PROTECTED REGION END*/
}

SharedUnit::~SharedUnit()
{
    /*PROTECTED REGION ID(SharedUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::SharedUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SharedUnit::eClassImpl() const
{
    return CodePackage::_instance()->getSharedUnit();
}

