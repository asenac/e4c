
#include "Field.hpp"

using namespace idlmm;

Field::Field() : 
	m_identifier()
{
}

Field::~Field()
{
}

void Field::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

Field::identifier_t Field::getIdentifier() const
{
	return m_identifier;
}



