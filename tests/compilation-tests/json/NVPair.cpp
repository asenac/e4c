
#include "NVPair.hpp"
#include <json/Value.hpp>

using namespace json;

NVPair::NVPair() : 
	m_name(),
    m_value()
{
}

NVPair::~NVPair()
{
}

void NVPair::setName(name_t _name)
{
	m_name = _name;;
}

NVPair::name_t NVPair::getName() const
{
	return m_name;
}

NVPair::value_t NVPair::getValue() const
{
	return e4c::returned(m_value);
}



