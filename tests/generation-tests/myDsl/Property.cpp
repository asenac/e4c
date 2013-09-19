
#include "Property.hpp"
#include <myDsl/Type.hpp>

using namespace myDsl;

Property::Property() : 
	m_name(),
    m_type(),
    m_many()
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

void Property::setMany(many_t _many)
{
	m_many = _many;;
}

many_t Property::getMany() const
{
	return m_many;
}



