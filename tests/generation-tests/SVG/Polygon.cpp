
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

Polygon::waypoints_t Polygon::getWaypoints() const
{
	return e4c::returned(m_waypoints);
}

void Polygon::setMarkerEnd(markerEnd_t _markerEnd)
{
	m_markerEnd = _markerEnd;;
}

Polygon::markerEnd_t Polygon::getMarkerEnd() const
{
	return m_markerEnd;
}

void Polygon::setMarkerStart(markerStart_t _markerStart)
{
	m_markerStart = _markerStart;;
}

Polygon::markerStart_t Polygon::getMarkerStart() const
{
	return m_markerStart;
}



