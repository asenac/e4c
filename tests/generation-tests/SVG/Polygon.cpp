
#include "Polygon.hpp"
#include <SVG/Point.hpp>

using namespace SVG;

Polygon::Polygon() : 
	m_waypoints(),
    m_markerEnd(),
    m_markerStart()
{
}

Polygon::~Polygon()
{
}

void Polygon::setMarkerEnd(markerEnd_t _markerEnd)
{
	m_markerEnd = _markerEnd;;
}

markerEnd_t Polygon::getMarkerEnd() const
{
	return m_markerEnd;
}

void Polygon::setMarkerStart(markerStart_t _markerStart)
{
	m_markerStart = _markerStart;;
}

markerStart_t Polygon::getMarkerStart() const
{
	return m_markerStart;
}



