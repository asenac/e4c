
#include "ENamedElement.hpp"

using namespace ecore;

ENamedElement::ENamedElement() : 
	m_name()
{
}

ENamedElement::~ENamedElement()
{
}

void ENamedElement::setName(name_t _name)
{
	m_name = _name;;
}

ENamedElement::name_t ENamedElement::getName() const
{
	return m_name;
}



