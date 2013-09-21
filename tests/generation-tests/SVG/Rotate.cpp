
#include "Rotate.hpp"

using namespace SVG;

Rotate::Rotate() : 
	m_angle(),
    m_cx(),
    m_cy()
{
}

Rotate::~Rotate()
{
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



