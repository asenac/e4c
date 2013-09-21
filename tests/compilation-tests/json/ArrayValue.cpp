
#include "ArrayValue.hpp"
#include <json/Value.hpp>

using namespace json;

ArrayValue::ArrayValue() : 
	m_values()
{
}

ArrayValue::~ArrayValue()
{
}

ArrayValue::values_t ArrayValue::getValues() const
{
	return e4c::returned(m_values);
}



