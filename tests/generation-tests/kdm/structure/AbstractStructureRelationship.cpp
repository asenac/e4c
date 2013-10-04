
#include "AbstractStructureRelationship.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::AbstractStructureRelationship include) START*/
/*PROTECTED REGION END*/

AbstractStructureRelationship::AbstractStructureRelationship()
{
	/*PROTECTED REGION ID(AbstractStructureRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractStructureRelationship::~AbstractStructureRelationship()
{
	/*PROTECTED REGION ID(AbstractStructureRelationship destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::AbstractStructureRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractStructureRelationship::eClassImpl() const
{
	return StructurePackage::_instance()->getAbstractStructureRelationship();
}
 
