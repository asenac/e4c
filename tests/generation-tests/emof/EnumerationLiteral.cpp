
#include "EnumerationLiteral.hpp"
#include <emof/Enumeration.hpp>

using namespace emof;

EnumerationLiteral::EnumerationLiteral() : 
	m_enumeration()
{
}

EnumerationLiteral::~EnumerationLiteral()
{
}

EnumerationLiteral::enumeration_t EnumerationLiteral::getEnumeration() const
{
	return e4c::returned(m_enumeration);
}



