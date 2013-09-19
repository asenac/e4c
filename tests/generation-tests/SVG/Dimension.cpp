
#include "Dimension.hpp"

using namespace SVG;

Dimension::Dimension() : 
	m_width(),
    m_height()
{
}

Dimension::~Dimension()
{
}

void Dimension::setWidth(width_t _width)
{
	m_width = _width;;
}

width_t Dimension::getWidth() const
{
	return m_width;
}

void Dimension::setHeight(height_t _height)
{
	m_height = _height;;
}

height_t Dimension::getHeight() const
{
	return m_height;
}



