
#include "Coordinates.hpp"

using namespace SVG;

Coordinates::Coordinates() : 
	m_x(),
    m_y()
{
}

Coordinates::~Coordinates()
{
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



