
#include "ExceptionUnit.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::ExceptionUnit include) START*/
/*PROTECTED REGION END*/

ExceptionUnit::ExceptionUnit()
{
    /*PROTECTED REGION ID(ExceptionUnit constructor) START*/
    /*PROTECTED REGION END*/
}

ExceptionUnit::~ExceptionUnit()
{
    /*PROTECTED REGION ID(ExceptionUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::ExceptionUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExceptionUnit::eClassImpl() const
{
    return ActionPackage::_instance()->getExceptionUnit();
}

