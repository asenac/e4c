
#include "InventoryElement.hpp"
#include <kdm/source/SourcePackage.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::InventoryElement include) START*/
/*PROTECTED REGION END*/

InventoryElement::InventoryElement()
{
	/*PROTECTED REGION ID(InventoryElement constructor) START*/
	/*PROTECTED REGION END*/
}

InventoryElement::~InventoryElement()
{
	/*PROTECTED REGION ID(InventoryElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::source::InventoryElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InventoryElement::eClassImpl() const
{
	return SourcePackage::_instance()->getInventoryElement();
}
 
