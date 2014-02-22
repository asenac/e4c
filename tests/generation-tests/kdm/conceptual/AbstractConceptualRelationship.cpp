
#include "AbstractConceptualRelationship.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualRelationship include) START*/
/*PROTECTED REGION END*/

AbstractConceptualRelationship::AbstractConceptualRelationship()
{
    /*PROTECTED REGION ID(AbstractConceptualRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractConceptualRelationship::~AbstractConceptualRelationship()
{
    /*PROTECTED REGION ID(AbstractConceptualRelationship destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractConceptualRelationship::eClassImpl() const
{
    return ConceptualPackage::_instance()->getAbstractConceptualRelationship();
}

