
#include "Shape.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Shape include) START*/
/*PROTECTED REGION END*/

Shape::Shape()
{
    /*PROTECTED REGION ID(Shape constructor) START*/
    /*PROTECTED REGION END*/
}

Shape::~Shape()
{
    /*PROTECTED REGION ID(Shape destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Shape implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Shape::eClassImpl() const
{
    return SVGPackage::_instance()->getShape();
}

