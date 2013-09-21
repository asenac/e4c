
#include "GroupingElement.hpp"
#include <SVG/Element.hpp>

using namespace SVG;

GroupingElement::GroupingElement() : 
	m_groupContent()
{
}

GroupingElement::~GroupingElement()
{
}

GroupingElement::groupContent_t GroupingElement::getGroupContent() const
{
	return e4c::returned(m_groupContent);
}



