
#include "Point.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Point include) START*/
/*PROTECTED REGION END*/

Point::Point()
{
    /*PROTECTED REGION ID(Point constructor) START*/
    /*PROTECTED REGION END*/
}

Point::~Point()
{
    /*PROTECTED REGION ID(Point destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Point implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Point::eClassImpl() const
{
    return SVGPackage::_instance()->getPoint();
}

