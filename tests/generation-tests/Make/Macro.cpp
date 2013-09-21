
#include "Macro.hpp"

using namespace Make;

Macro::Macro() : 
	m_value()
{
}

Macro::~Macro()
{
}

void Macro::setValue(value_t _value)
{
	m_value = _value;;
}

Macro::value_t Macro::getValue() const
{
	return m_value;
}



