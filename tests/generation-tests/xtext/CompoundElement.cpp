
#include "CompoundElement.hpp"
#include <xtext/AbstractElement.hpp>

using namespace xtext;

CompoundElement::CompoundElement() : 
	m_elements()
{
}

CompoundElement::~CompoundElement()
{
}

CompoundElement::elements_t CompoundElement::getElements() const
{
	return e4c::returned(m_elements);
}



