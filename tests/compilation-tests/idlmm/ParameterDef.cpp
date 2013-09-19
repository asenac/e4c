
#include "ParameterDef.hpp"

using namespace idlmm;

ParameterDef::ParameterDef() : 
	m_identifier(),
    m_direction()
{
}

ParameterDef::~ParameterDef()
{
}

void ParameterDef::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

identifier_t ParameterDef::getIdentifier() const
{
	return m_identifier;
}

void ParameterDef::setDirection(direction_t _direction)
{
	m_direction = _direction;;
}

direction_t ParameterDef::getDirection() const
{
	return m_direction;
}



