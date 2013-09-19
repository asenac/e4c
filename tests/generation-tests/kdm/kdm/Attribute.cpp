
#include "Attribute.hpp"

using namespace kdm::kdm;

Attribute::Attribute() : 
	m_tag(),
    m_value()
{
}

Attribute::~Attribute()
{
}

void Attribute::setTag(tag_t _tag)
{
	m_tag = _tag;;
}

tag_t Attribute::getTag() const
{
	return m_tag;
}

void Attribute::setValue(value_t _value)
{
	m_value = _value;;
}

value_t Attribute::getValue() const
{
	return m_value;
}



