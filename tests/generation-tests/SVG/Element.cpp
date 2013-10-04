
#include "Element.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/SvgFile.hpp>
#include <SVG/Use.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Coordinates.hpp>
#include <SVG/Dimension.hpp>
#include <SVG/Svg.hpp>
#include <SVG/GroupingElement.hpp>
#include <SVG/Marker.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Element include) START*/
/*PROTECTED REGION END*/

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
	/*PROTECTED REGION ID(Element constructor) START*/
	/*PROTECTED REGION END*/
}

Element::~Element()
{
	/*PROTECTED REGION ID(Element destructor) START*/
	/*PROTECTED REGION END*/
}

Element::owner_t Element::getOwner() const
{
	return e4c::returned(m_owner);
}

void Element::addOwner(SVG::SvgFile_ptr owner_)
{
	if (e4c::contains(m_owner, owner_))
		return;
	m_owner.insert(owner_);
	owner_->addElements(this);
}

void Element::addAllOwner(const owner_t& owner_)
{
	for (auto i = owner_.begin(); i != owner_.end(); i++)
		addOwner(*i);
}

Element::target_t Element::getTarget() const
{
	return e4c::returned(m_target);
}

void Element::addTarget(SVG::Use_ptr target_)
{
	if (e4c::contains(m_target, target_))
		return;
	m_target.insert(target_);
	target_->addUse(this);
}

void Element::addAllTarget(const target_t& target_)
{
	for (auto i = target_.begin(); i != target_.end(); i++)
		addTarget(*i);
}

Element::attribute_t Element::getAttribute() const
{
	return e4c::returned(m_attribute);
}

void Element::addAttribute(SVG::Attribute_ptr attribute_)
{
	if (e4c::contains(m_attribute, attribute_))
		return;
	m_attribute.insert(attribute_);
	attribute_->addAttOwner(this);
}

void Element::addAllAttribute(const attribute_t& attribute_)
{
	for (auto i = attribute_.begin(); i != attribute_.end(); i++)
		addAttribute(*i);
}

Element::position_t Element::getPosition() const
{
	return e4c::returned(m_position);
}


void Element::setPosition(position_t position_)
{
	m_position.reset(position_);
}

Element::position_t Element::releasePosition()
{
	return m_position.release();
}

Element::size_t Element::getSize() const
{
	return e4c::returned(m_size);
}


void Element::setSize(size_t size_)
{
	m_size.reset(size_);
}

Element::size_t Element::releaseSize()
{
	return m_size.release();
}

Element::root_t Element::getRoot() const
{
	return e4c::returned(m_root);
}

void Element::setRoot(root_t root_)
{
	m_root = root_;
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

void Element::setGroup(group_t group_)
{
	m_group = group_;
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

void Element::setDrawsMarker(drawsMarker_t drawsMarker_)
{
	m_drawsMarker = drawsMarker_;
}



/*PROTECTED REGION ID(SVG::Element implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Element::eClassImpl() const
{
	return SVGPackage::_instance()->getElement();
}
 
