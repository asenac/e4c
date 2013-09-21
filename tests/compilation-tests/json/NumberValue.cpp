
#include "NumberValue.hpp"

using namespace json;

NumberValue::NumberValue() : 
	m_value()
{
}

NumberValue::~NumberValue()
{
}

void NumberValue::setValue(value_t _value)
{
	m_value = _value;;
}

NumberValue::value_t NumberValue::getValue() const
{
	return m_value;
}



