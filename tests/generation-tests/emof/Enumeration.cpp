
#include "Enumeration.hpp"
#include <emof/EnumerationLiteral.hpp>

using namespace emof;

Enumeration::Enumeration() : 
	m_ownedLiteral()
{
}

Enumeration::~Enumeration()
{
}

Enumeration::ownedLiteral_t Enumeration::getOwnedLiteral() const
{
	return e4c::returned(m_ownedLiteral);
}



