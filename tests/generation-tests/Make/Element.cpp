
#include "Element.hpp"

using namespace Make;

Element::Element() : 
	m_name()
{
}

Element::~Element()
{
}

void Element::setName(name_t _name)
{
	m_name = _name;;
}

name_t Element::getName() const
{
	return m_name;
}



