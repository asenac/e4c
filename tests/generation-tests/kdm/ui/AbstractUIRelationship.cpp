
#include "AbstractUIRelationship.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::AbstractUIRelationship include) START*/
/*PROTECTED REGION END*/

AbstractUIRelationship::AbstractUIRelationship()
{
	/*PROTECTED REGION ID(AbstractUIRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractUIRelationship::~AbstractUIRelationship()
{
	/*PROTECTED REGION ID(AbstractUIRelationship destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::ui::AbstractUIRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractUIRelationship::eClassImpl() const
{
	return UiPackage::_instance()->getAbstractUIRelationship();
}
 
