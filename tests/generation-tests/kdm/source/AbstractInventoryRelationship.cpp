
#include "AbstractInventoryRelationship.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::AbstractInventoryRelationship include) START*/
/*PROTECTED REGION END*/

AbstractInventoryRelationship::AbstractInventoryRelationship()
{
	/*PROTECTED REGION ID(AbstractInventoryRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractInventoryRelationship::~AbstractInventoryRelationship()
{
	/*PROTECTED REGION ID(AbstractInventoryRelationship destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::AbstractInventoryRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractInventoryRelationship::eClassImpl() const
{
	return SourcePackage::_instance()->getAbstractInventoryRelationship();
}
 
