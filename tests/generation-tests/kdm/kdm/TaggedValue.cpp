
#include "TaggedValue.hpp"

using namespace kdm::kdm;

TaggedValue::TaggedValue() : 
	m_value()
{
}

TaggedValue::~TaggedValue()
{
}

void TaggedValue::setValue(value_t _value)
{
	m_value = _value;;
}

value_t TaggedValue::getValue() const
{
	return m_value;
}



