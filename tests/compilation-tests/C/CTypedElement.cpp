
#include "CTypedElement.hpp"
#include <C/CClassifier.hpp>
#include <C/CSourceText.hpp>

using namespace C;

CTypedElement::CTypedElement() : 
	m_type(),
    m_source()
{
}

CTypedElement::~CTypedElement()
{
}

CTypedElement::type_t CTypedElement::getType() const
{
	return e4c::returned(m_type);
}

CTypedElement::source_t CTypedElement::getSource() const
{
	return e4c::returned(m_source);
}



