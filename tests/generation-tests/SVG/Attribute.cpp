
#include "Attribute.hpp"
#include <SVG/Element.hpp>

using namespace SVG;

Attribute::Attribute() : 
	m_attOwner()
{
}

Attribute::~Attribute()
{
}

Attribute::attOwner_t Attribute::getAttOwner() const
{
	return e4c::returned(m_attOwner);
}



