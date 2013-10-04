
#include "Polyline.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Point.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Polyline include) START*/
/*PROTECTED REGION END*/

Polyline::Polyline() : 
	m_waypoints(),
    m_strokeDashArray(),
    m_markerEnd(),
    m_markerStart()
{
	/*PROTECTED REGION ID(Polyline constructor) START*/
	/*PROTECTED REGION END*/
}

Polyline::~Polyline()
{
	/*PROTECTED REGION ID(Polyline destructor) START*/
	/*PROTECTED REGION END*/
}

Polyline::waypoints_t Polyline::getWaypoints() const
{
	return e4c::returned(m_waypoints);
}


void Polyline::addWaypoints(SVG::Point_ptr waypoints_)
{
	m_waypoints.push_back(std::unique_ptr < SVG::Point >(waypoints_));
}

void Polyline::addAllWaypoints(const waypoints_t& waypoints_)
{
	for (auto i = waypoints_.begin(); i != waypoints_.end(); i++)
		addWaypoints(*i);
}

void Polyline::setStrokeDashArray(strokeDashArray_t _strokeDashArray)
{
	m_strokeDashArray = _strokeDashArray;;
}

Polyline::strokeDashArray_t Polyline::getStrokeDashArray() const
{
	return m_strokeDashArray;
}

void Polyline::setMarkerEnd(markerEnd_t _markerEnd)
{
	m_markerEnd = _markerEnd;;
}

Polyline::markerEnd_t Polyline::getMarkerEnd() const
{
	return m_markerEnd;
}

void Polyline::setMarkerStart(markerStart_t _markerStart)
{
	m_markerStart = _markerStart;;
}

Polyline::markerStart_t Polyline::getMarkerStart() const
{
	return m_markerStart;
}



/*PROTECTED REGION ID(SVG::Polyline implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Polyline::eClassImpl() const
{
	return SVGPackage::_instance()->getPolyline();
}
 
