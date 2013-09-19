
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

name_t NVPair::getName() const
{
	return m_name;
}



