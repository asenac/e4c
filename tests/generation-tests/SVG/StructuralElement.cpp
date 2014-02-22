
#include "StructuralElement.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::StructuralElement include) START*/
/*PROTECTED REGION END*/

StructuralElement::StructuralElement()
{
    /*PROTECTED REGION ID(StructuralElement constructor) START*/
    /*PROTECTED REGION END*/
}

StructuralElement::~StructuralElement()
{
    /*PROTECTED REGION ID(StructuralElement destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::StructuralElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StructuralElement::eClassImpl() const
{
    return SVGPackage::_instance()->getStructuralElement();
}

