
#include "NamedElement.hpp"

using namespace emof;

NamedElement::NamedElement() : 
	m_name()
{
}

NamedElement::~NamedElement()
{
}

void NamedElement::setName(name_t _name)
{
	m_name = _name;;
}

NamedElement::name_t NamedElement::getName() const
{
	return m_name;
}



