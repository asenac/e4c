
#include "StructureElement.hpp"
#include <kdm/structure/StructurePackage.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::StructureElement include) START*/
/*PROTECTED REGION END*/

StructureElement::StructureElement()
{
    /*PROTECTED REGION ID(StructureElement constructor) START*/
    /*PROTECTED REGION END*/
}

StructureElement::~StructureElement()
{
    /*PROTECTED REGION ID(StructureElement destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::structure::StructureElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StructureElement::eClassImpl() const
{
    return StructurePackage::_instance()->getStructureElement();
}

