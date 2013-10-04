
#include "AbstractContentElement.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::AbstractContentElement include) START*/
/*PROTECTED REGION END*/

AbstractContentElement::AbstractContentElement()
{
	/*PROTECTED REGION ID(AbstractContentElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractContentElement::~AbstractContentElement()
{
	/*PROTECTED REGION ID(AbstractContentElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::AbstractContentElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractContentElement::eClassImpl() const
{
	return DataPackage::_instance()->getAbstractContentElement();
}
 
