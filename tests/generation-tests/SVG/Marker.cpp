
#include "Marker.hpp"
#include <SVG/Element.hpp>

using namespace SVG;

Marker::Marker() : 
	m_markerUnits(),
    m_refX(),
    m_refY(),
    m_markerWidth(),
    m_markerHeight(),
    m_orient(),
    m_drawing()
{
}

Marker::~Marker()
{
}

void Marker::setMarkerUnits(markerUnits_t _markerUnits)
{
	m_markerUnits = _markerUnits;;
}

markerUnits_t Marker::getMarkerUnits() const
{
	return m_markerUnits;
}

void Marker::setRefX(refX_t _refX)
{
	m_refX = _refX;;
}

refX_t Marker::getRefX() const
{
	return m_refX;
}

void Marker::setRefY(refY_t _refY)
{
	m_refY = _refY;;
}

refY_t Marker::getRefY() const
{
	return m_refY;
}

void Marker::setMarkerWidth(markerWidth_t _markerWidth)
{
	m_markerWidth = _markerWidth;;
}

markerWidth_t Marker::getMarkerWidth() const
{
	return m_markerWidth;
}

void Marker::setMarkerHeight(markerHeight_t _markerHeight)
{
	m_markerHeight = _markerHeight;;
}

markerHeight_t Marker::getMarkerHeight() const
{
	return m_markerHeight;
}

void Marker::setOrient(orient_t _orient)
{
	m_orient = _orient;;
}

orient_t Marker::getOrient() const
{
	return m_orient;
}



