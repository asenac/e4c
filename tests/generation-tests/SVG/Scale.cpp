
#include "Scale.hpp"

using namespace SVG;

Scale::Scale() : 
	m_sx(),
    m_sy()
{
}

Scale::~Scale()
{
}

void Scale::setSx(sx_t _sx)
{
	m_sx = _sx;;
}

sx_t Scale::getSx() const
{
	return m_sx;
}

void Scale::setSy(sy_t _sy)
{
	m_sy = _sy;;
}

sy_t Scale::getSy() const
{
	return m_sy;
}



