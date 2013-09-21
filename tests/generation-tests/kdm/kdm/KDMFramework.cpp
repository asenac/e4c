
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

KDMFramework::audit_t KDMFramework::getAudit() const
{
	return e4c::returned(m_audit);
}

KDMFramework::extensionFamily_t KDMFramework::getExtensionFamily() const
{
	return e4c::returned(m_extensionFamily);
}

void KDMFramework::setName(name_t _name)
{
	m_name = _name;;
}

KDMFramework::name_t KDMFramework::getName() const
{
	return m_name;
}



