
#include "EStringToStringMapEntry.hpp"

using namespace ecore;

EStringToStringMapEntry::EStringToStringMapEntry() : 
	m_key(),
    m_value()
{
}

EStringToStringMapEntry::~EStringToStringMapEntry()
{
}

void EStringToStringMapEntry::setKey(key_t _key)
{
	m_key = _key;;
}

EStringToStringMapEntry::key_t EStringToStringMapEntry::getKey() const
{
	return m_key;
}

void EStringToStringMapEntry::setValue(value_t _value)
{
	m_value = _value;;
}

EStringToStringMapEntry::value_t EStringToStringMapEntry::getValue() const
{
	return m_value;
}



