
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

ExtensionFamily::stereotype_t ExtensionFamily::getStereotype() const
{
	return e4c::returned(m_stereotype);
}

void ExtensionFamily::setName(name_t _name)
{
	m_name = _name;;
}

ExtensionFamily::name_t ExtensionFamily::getName() const
{
	return m_name;
}



