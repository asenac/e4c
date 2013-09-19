
#include "ContentRestriction.hpp"

using namespace kdm::data;

ContentRestriction::ContentRestriction() : 
	m_kind(),
    m_value()
{
}

ContentRestriction::~ContentRestriction()
{
}

void ContentRestriction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t ContentRestriction::getKind() const
{
	return m_kind;
}

void ContentRestriction::setValue(value_t _value)
{
	m_value = _value;;
}

value_t ContentRestriction::getValue() const
{
	return m_value;
}



