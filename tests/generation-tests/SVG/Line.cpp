
#include "Line.hpp"
#include <SVG/Point.hpp>

using namespace SVG;

Line::Line() : 
	m_between(),
    m_markerEnd(),
    m_markerStart()
{
}

Line::~Line()
{
}

void Line::setMarkerEnd(markerEnd_t _markerEnd)
{
	m_markerEnd = _markerEnd;;
}

markerEnd_t Line::getMarkerEnd() const
{
	return m_markerEnd;
}

void Line::setMarkerStart(markerStart_t _markerStart)
{
	m_markerStart = _markerStart;;
}

markerStart_t Line::getMarkerStart() const
{
	return m_markerStart;
}



