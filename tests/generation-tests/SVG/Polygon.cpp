
#include "Polygon.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Point.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Polygon include) START*/
/*PROTECTED REGION END*/

Polygon::Polygon() :
    m_waypoints(),
    m_markerEnd(),
    m_markerStart()
{
    /*PROTECTED REGION ID(Polygon constructor) START*/
    /*PROTECTED REGION END*/
}

Polygon::~Polygon()
{
    /*PROTECTED REGION ID(Polygon destructor) START*/
    /*PROTECTED REGION END*/
}

Polygon::waypoints_t Polygon::getWaypoints() const
{
    return e4c::returned(m_waypoints);
}

void Polygon::addWaypoints(SVG::Point_ptr waypoints_)
{
    if (e4c::contains(m_waypoints, waypoints_))
        return;
    m_waypoints.push_back(waypoints_);
}

void Polygon::addAllWaypoints(const waypoints_t& waypoints_)
{
    for (auto i = waypoints_.begin(); i != waypoints_.end(); i++)
        addWaypoints(*i);
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



/*PROTECTED REGION ID(SVG::Polygon implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Polygon::eClassImpl() const
{
    return SVGPackage::_instance()->getPolygon();
}

