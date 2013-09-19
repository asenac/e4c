
#include "BooleanValue.hpp"

using namespace json;

BooleanValue::BooleanValue() : 
	m_value()
{
}

BooleanValue::~BooleanValue()
{
}

void BooleanValue::setValue(value_t _value)
{
	m_value = _value;;
}

value_t BooleanValue::getValue() const
{
	return m_value;
}



