
#include "AbstractActionRelationship.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::AbstractActionRelationship include) START*/
/*PROTECTED REGION END*/

AbstractActionRelationship::AbstractActionRelationship()
{
    /*PROTECTED REGION ID(AbstractActionRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractActionRelationship::~AbstractActionRelationship()
{
    /*PROTECTED REGION ID(AbstractActionRelationship destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::AbstractActionRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractActionRelationship::eClassImpl() const
{
    return ActionPackage::_instance()->getAbstractActionRelationship();
}

