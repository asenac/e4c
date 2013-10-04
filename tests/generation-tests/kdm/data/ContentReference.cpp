
#include "ContentReference.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ContentReference include) START*/
/*PROTECTED REGION END*/

ContentReference::ContentReference()
{
	/*PROTECTED REGION ID(ContentReference constructor) START*/
	/*PROTECTED REGION END*/
}

ContentReference::~ContentReference()
{
	/*PROTECTED REGION ID(ContentReference destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::ContentReference implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ContentReference::eClassImpl() const
{
	return DataPackage::_instance()->getContentReference();
}
 
