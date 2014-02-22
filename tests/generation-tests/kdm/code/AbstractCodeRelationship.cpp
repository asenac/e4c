
#include "AbstractCodeRelationship.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::AbstractCodeRelationship include) START*/
/*PROTECTED REGION END*/

AbstractCodeRelationship::AbstractCodeRelationship()
{
    /*PROTECTED REGION ID(AbstractCodeRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractCodeRelationship::~AbstractCodeRelationship()
{
    /*PROTECTED REGION ID(AbstractCodeRelationship destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::AbstractCodeRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractCodeRelationship::eClassImpl() const
{
    return CodePackage::_instance()->getAbstractCodeRelationship();
}

