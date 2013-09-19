
#include "Element.hpp"
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>

using namespace SVG;

Element::Element() : 
	m_owner(),
    m_target(),
    m_attribute(),
    m_position(),
    m_size(),
    m_root(),
    m_fill(),
    m_viewBox(),
    m_group(),
    m_identifier(),
    m_drawsMarker()
{
}

Element::~Element()
{
}

void Element::setFill(fill_t _fill)
{
	m_fill = _fill;;
}

fill_t Element::getFill() const
{
	return m_fill;
}

void Element::setViewBox(viewBox_t _viewBox)
{
	m_viewBox = _viewBox;;
}

viewBox_t Element::getViewBox() const
{
	return m_viewBox;
}

void Element::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

identifier_t Element::getIdentifier() const
{
	return m_identifier;
}



