
#include "Line.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Point.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Line include) START*/
/*PROTECTED REGION END*/

Line::Line() :
    m_between(),
    m_markerEnd(),
    m_markerStart()
{
    /*PROTECTED REGION ID(Line constructor) START*/
    /*PROTECTED REGION END*/
}

Line::~Line()
{
    /*PROTECTED REGION ID(Line destructor) START*/
    /*PROTECTED REGION END*/
}

Line::between_t Line::getBetween() const
{
    return e4c::returned(m_between);
}

void Line::addBetween(SVG::Point_ptr between_)
{
    if (e4c::contains(m_between, between_))
        return;
    m_between.insert(between_);
}

void Line::addAllBetween(const between_t& between_)
{
    for (auto i = between_.begin(); i != between_.end(); i++)
        addBetween(*i);
}

void Line::setMarkerEnd(markerEnd_t _markerEnd)
{
    m_markerEnd = _markerEnd;;
}

Line::markerEnd_t Line::getMarkerEnd() const
{
    return m_markerEnd;
}

void Line::setMarkerStart(markerStart_t _markerStart)
{
    m_markerStart = _markerStart;;
}

Line::markerStart_t Line::getMarkerStart() const
{
    return m_markerStart;
}



/*PROTECTED REGION ID(SVG::Line implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Line::eClassImpl() const
{
    return SVGPackage::_instance()->getLine();
}

