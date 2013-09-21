
#include "Identifier.hpp"

using namespace xpand3;

Identifier::Identifier() : 
	m_value()
{
}

Identifier::~Identifier()
{
}

void Identifier::setValue(value_t _value)
{
	m_value = _value;;
}

Identifier::value_t Identifier::getValue() const
{
	return m_value;
}



