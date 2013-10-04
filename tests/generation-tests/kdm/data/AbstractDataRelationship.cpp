
#include "AbstractDataRelationship.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::AbstractDataRelationship include) START*/
/*PROTECTED REGION END*/

AbstractDataRelationship::AbstractDataRelationship()
{
	/*PROTECTED REGION ID(AbstractDataRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractDataRelationship::~AbstractDataRelationship()
{
	/*PROTECTED REGION ID(AbstractDataRelationship destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::AbstractDataRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractDataRelationship::eClassImpl() const
{
	return DataPackage::_instance()->getAbstractDataRelationship();
}
 
