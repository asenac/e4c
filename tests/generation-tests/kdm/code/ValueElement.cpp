
#include "ValueElement.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ValueElement include) START*/
/*PROTECTED REGION END*/

ValueElement::ValueElement()
{
    /*PROTECTED REGION ID(ValueElement constructor) START*/
    /*PROTECTED REGION END*/
}

ValueElement::~ValueElement()
{
    /*PROTECTED REGION ID(ValueElement destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::ValueElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ValueElement::eClassImpl() const
{
    return CodePackage::_instance()->getValueElement();
}

