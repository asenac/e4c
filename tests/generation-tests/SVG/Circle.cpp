
#include "Circle.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Circle include) START*/
/*PROTECTED REGION END*/

Circle::Circle()
{
    /*PROTECTED REGION ID(Circle constructor) START*/
    /*PROTECTED REGION END*/
}

Circle::~Circle()
{
    /*PROTECTED REGION ID(Circle destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Circle implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Circle::eClassImpl() const
{
    return SVGPackage::_instance()->getCircle();
}

