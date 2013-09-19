
#include "Polyline.hpp"
#include <SVG/Point.hpp>

using namespace SVG;

Polyline::Polyline() : 
	m_waypoints(),
    m_strokeDashArray(),
    m_markerEnd(),
    m_markerStart()
{
}

Polyline::~Polyline()
{
}

void Polyline::setStrokeDashArray(strokeDashArray_t _strokeDashArray)
{
	m_strokeDashArray = _strokeDashArray;;
}

strokeDashArray_t Polyline::getStrokeDashArray() const
{
	return m_strokeDashArray;
}

void Polyline::setMarkerEnd(markerEnd_t _markerEnd)
{
	m_markerEnd = _markerEnd;;
}

markerEnd_t Polyline::getMarkerEnd() const
{
	return m_markerEnd;
}

void Polyline::setMarkerStart(markerStart_t _markerStart)
{
	m_markerStart = _markerStart;;
}

markerStart_t Polyline::getMarkerStart() const
{
	return m_markerStart;
}



