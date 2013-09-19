
#include "Stereotype.hpp"
#include <kdm/kdm/TagDefinition.hpp>

using namespace kdm::kdm;

Stereotype::Stereotype() : 
	m_tag(),
    m_name(),
    m_type()
{
}

Stereotype::~Stereotype()
{
}

void Stereotype::setName(name_t _name)
{
	m_name = _name;;
}

name_t Stereotype::getName() const
{
	return m_name;
}

void Stereotype::setType(type_t _type)
{
	m_type = _type;;
}

type_t Stereotype::getType() const
{
	return m_type;
}



