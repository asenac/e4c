
#include "Rect.hpp"

using namespace SVG;

Rect::Rect() : 
	m_rx(),
    m_ry()
{
}

Rect::~Rect()
{
}

void Rect::setRx(rx_t _rx)
{
	m_rx = _rx;;
}

rx_t Rect::getRx() const
{
	return m_rx;
}

void Rect::setRy(ry_t _ry)
{
	m_ry = _ry;;
}

ry_t Rect::getRy() const
{
	return m_ry;
}



