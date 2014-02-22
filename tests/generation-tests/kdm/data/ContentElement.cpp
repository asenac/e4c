
#include "ContentElement.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ContentElement include) START*/
/*PROTECTED REGION END*/

ContentElement::ContentElement()
{
    /*PROTECTED REGION ID(ContentElement constructor) START*/
    /*PROTECTED REGION END*/
}

ContentElement::~ContentElement()
{
    /*PROTECTED REGION ID(ContentElement destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::ContentElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ContentElement::eClassImpl() const
{
    return DataPackage::_instance()->getContentElement();
}

