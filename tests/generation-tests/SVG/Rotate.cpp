
#include "Rotate.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Rotate include) START*/
/*PROTECTED REGION END*/

Rotate::Rotate() : 
	m_angle(),
    m_cx(),
    m_cy()
{
	/*PROTECTED REGION ID(Rotate constructor) START*/
	/*PROTECTED REGION END*/
}

Rotate::~Rotate()
{
	/*PROTECTED REGION ID(Rotate destructor) START*/
	/*PROTECTED REGION END*/
}

void Rotate::setAngle(angle_t _angle)
{
	m_angle = _angle;;
}

Rotate::angle_t Rotate::getAngle() const
{
	return m_angle;
}

void Rotate::setCx(cx_t _cx)
{
	m_cx = _cx;;
}

Rotate::cx_t Rotate::getCx() const
{
	return m_cx;
}

void Rotate::setCy(cy_t _cy)
{
	m_cy = _cy;;
}

Rotate::cy_t Rotate::getCy() const
{
	return m_cy;
}



/*PROTECTED REGION ID(SVG::Rotate implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Rotate::eClassImpl() const
{
	return SVGPackage::_instance()->getRotate();
}
 
