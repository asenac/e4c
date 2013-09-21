
#include "Element.hpp"
#include <kdm/kdm/Attribute.hpp>
#include <kdm/kdm/Annotation.hpp>

using namespace kdm::core;

Element::Element() : 
	m_attribute(),
    m_annotation()
{
}

Element::~Element()
{
}

Element::attribute_t Element::getAttribute() const
{
	return e4c::returned(m_attribute);
}

Element::annotation_t Element::getAnnotation() const
{
	return e4c::returned(m_annotation);
}



