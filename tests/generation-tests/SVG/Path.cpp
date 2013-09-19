
#include "Path.hpp"

using namespace SVG;

Path::Path() : 
	m_pathLength(),
    m_d(),
    m_markerEnd(),
    m_markerStart()
{
}

Path::~Path()
{
}

void Path::setPathLength(pathLength_t _pathLength)
{
	m_pathLength = _pathLength;;
}

pathLength_t Path::getPathLength() const
{
	return m_pathLength;
}

void Path::setD(d_t _d)
{
	m_d = _d;;
}

d_t Path::getD() const
{
	return m_d;
}

void Path::setMarkerEnd(markerEnd_t _markerEnd)
{
	m_markerEnd = _markerEnd;;
}

markerEnd_t Path::getMarkerEnd() const
{
	return m_markerEnd;
}

void Path::setMarkerStart(markerStart_t _markerStart)
{
	m_markerStart = _markerStart;;
}

markerStart_t Path::getMarkerStart() const
{
	return m_markerStart;
}



