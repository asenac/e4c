
#include "Element.hpp"

using namespace CST;

Element::Element() : 
	m_kind()
{
}

Element::~Element()
{
}

void Element::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

Element::kind_t Element::getKind() const
{
	return m_kind;
}



