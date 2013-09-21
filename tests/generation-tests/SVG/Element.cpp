
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

Element::owner_t Element::getOwner() const
{
	return e4c::returned(m_owner);
}

Element::target_t Element::getTarget() const
{
	return e4c::returned(m_target);
}

Element::attribute_t Element::getAttribute() const
{
	return e4c::returned(m_attribute);
}

Element::position_t Element::getPosition() const
{
	return e4c::returned(m_position);
}

Element::size_t Element::getSize() const
{
	return e4c::returned(m_size);
}

Element::root_t Element::getRoot() const
{
	return e4c::returned(m_root);
}

void Element::setFill(fill_t _fill)
{
	m_fill = _fill;;
}

Element::fill_t Element::getFill() const
{
	return m_fill;
}

void Element::setViewBox(viewBox_t _viewBox)
{
	m_viewBox = _viewBox;;
}

Element::viewBox_t Element::getViewBox() const
{
	return m_viewBox;
}

Element::group_t Element::getGroup() const
{
	return e4c::returned(m_group);
}

void Element::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

Element::identifier_t Element::getIdentifier() const
{
	return m_identifier;
}

Element::drawsMarker_t Element::getDrawsMarker() const
{
	return e4c::returned(m_drawsMarker);
}



