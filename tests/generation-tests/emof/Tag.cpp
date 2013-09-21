
#include "Tag.hpp"
#include <emof/Element.hpp>

using namespace emof;

Tag::Tag() : 
	m_element(),
    m_name(),
    m_value()
{
}

Tag::~Tag()
{
}

Tag::element_t Tag::getElement() const
{
	return e4c::returned(m_element);
}

void Tag::setName(name_t _name)
{
	m_name = _name;;
}

Tag::name_t Tag::getName() const
{
	return m_name;
}

void Tag::setValue(value_t _value)
{
	m_value = _value;;
}

Tag::value_t Tag::getValue() const
{
	return m_value;
}



