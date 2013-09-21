
#include "TypedElement.hpp"
#include <emof/Type.hpp>

using namespace emof;

TypedElement::TypedElement() : 
	m_type()
{
}

TypedElement::~TypedElement()
{
}

TypedElement::type_t TypedElement::getType() const
{
	return e4c::returned(m_type);
}



