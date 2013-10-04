
#include "ExtendedDataElement.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ExtendedDataElement include) START*/
/*PROTECTED REGION END*/

ExtendedDataElement::ExtendedDataElement()
{
	/*PROTECTED REGION ID(ExtendedDataElement constructor) START*/
	/*PROTECTED REGION END*/
}

ExtendedDataElement::~ExtendedDataElement()
{
	/*PROTECTED REGION ID(ExtendedDataElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::ExtendedDataElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExtendedDataElement::eClassImpl() const
{
	return DataPackage::_instance()->getExtendedDataElement();
}
 
