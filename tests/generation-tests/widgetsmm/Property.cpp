
#include "Property.hpp"

using namespace widgetsmm;

Property::Property() : 
	m_name(),
    m_value()
{
}

Property::~Property()
{
}

void Property::setName(name_t _name)
{
	m_name = _name;;
}

name_t Property::getName() const
{
	return m_name;
}

void Property::setValue(value_t _value)
{
	m_value = _value;;
}

value_t Property::getValue() const
{
	return m_value;
}



