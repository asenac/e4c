
#include "ExtensionFamily.hpp"
#include <kdm/kdm/Stereotype.hpp>

using namespace kdm::kdm;

ExtensionFamily::ExtensionFamily() : 
	m_stereotype(),
    m_name()
{
}

ExtensionFamily::~ExtensionFamily()
{
}

void ExtensionFamily::setName(name_t _name)
{
	m_name = _name;;
}

name_t ExtensionFamily::getName() const
{
	return m_name;
}



