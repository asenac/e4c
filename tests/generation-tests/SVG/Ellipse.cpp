
#include "Ellipse.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Ellipse include) START*/
/*PROTECTED REGION END*/

Ellipse::Ellipse()
{
    /*PROTECTED REGION ID(Ellipse constructor) START*/
    /*PROTECTED REGION END*/
}

Ellipse::~Ellipse()
{
    /*PROTECTED REGION ID(Ellipse destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Ellipse implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Ellipse::eClassImpl() const
{
    return SVGPackage::_instance()->getEllipse();
}

