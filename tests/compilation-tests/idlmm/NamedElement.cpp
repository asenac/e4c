
#include "NamedElement.hpp"

using namespace idlmm;

NamedElement::NamedElement() : 
	m_identifier()
{
}

NamedElement::~NamedElement()
{
}

void NamedElement::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

NamedElement::identifier_t NamedElement::getIdentifier() const
{
	return m_identifier;
}



