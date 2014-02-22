
#include "Coordinates.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Coordinates include) START*/
/*PROTECTED REGION END*/

Coordinates::Coordinates() :
    m_x(),
    m_y()
{
    /*PROTECTED REGION ID(Coordinates constructor) START*/
    /*PROTECTED REGION END*/
}

Coordinates::~Coordinates()
{
    /*PROTECTED REGION ID(Coordinates destructor) START*/
    /*PROTECTED REGION END*/
}

void Coordinates::setX(x_t _x)
{
    m_x = _x;;
}

Coordinates::x_t Coordinates::getX() const
{
    return m_x;
}

void Coordinates::setY(y_t _y)
{
    m_y = _y;;
}

Coordinates::y_t Coordinates::getY() const
{
    return m_y;
}



/*PROTECTED REGION ID(SVG::Coordinates implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Coordinates::eClassImpl() const
{
    return SVGPackage::_instance()->getCoordinates();
}

