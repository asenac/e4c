
#include "KDMFramework.hpp"
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>

using namespace kdm::kdm;

KDMFramework::KDMFramework() : 
	m_audit(),
    m_extensionFamily(),
    m_name()
{
}

KDMFramework::~KDMFramework()
{
}

void KDMFramework::setName(name_t _name)
{
	m_name = _name;;
}

name_t KDMFramework::getName() const
{
	return m_name;
}



