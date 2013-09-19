
#include "StringValue.hpp"

using namespace json;

StringValue::StringValue() : 
	m_value()
{
}

StringValue::~StringValue()
{
}

void StringValue::setValue(value_t _value)
{
	m_value = _value;;
}

value_t StringValue::getValue() const
{
	return m_value;
}



