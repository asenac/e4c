
#include "KDMFramework.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/Audit.hpp>
#include <kdm/kdm/ExtensionFamily.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::KDMFramework include) START*/
/*PROTECTED REGION END*/

KDMFramework::KDMFramework() :
    m_audit(),
    m_extensionFamily(),
    m_name()
{
    /*PROTECTED REGION ID(KDMFramework constructor) START*/
    /*PROTECTED REGION END*/
}

KDMFramework::~KDMFramework()
{
    /*PROTECTED REGION ID(KDMFramework destructor) START*/
    /*PROTECTED REGION END*/
}

KDMFramework::audit_t KDMFramework::getAudit() const
{
    return e4c::returned(m_audit);
}


void KDMFramework::addAudit(kdm::kdm::Audit_ptr audit_)
{
    m_audit.insert(std::unique_ptr < kdm::kdm::Audit >(audit_));
}

void KDMFramework::addAllAudit(const audit_t& audit_)
{
    for (auto i = audit_.begin(); i != audit_.end(); i++)
        addAudit(*i);
}

KDMFramework::extensionFamily_t KDMFramework::getExtensionFamily() const
{
    return e4c::returned(m_extensionFamily);
}


void KDMFramework::addExtensionFamily(kdm::kdm::ExtensionFamily_ptr extensionFamily_)
{
    m_extensionFamily.insert(std::unique_ptr < kdm::kdm::ExtensionFamily >(extensionFamily_));
}

void KDMFramework::addAllExtensionFamily(const extensionFamily_t& extensionFamily_)
{
    for (auto i = extensionFamily_.begin(); i != extensionFamily_.end(); i++)
        addExtensionFamily(*i);
}

void KDMFramework::setName(name_t _name)
{
    m_name = _name;;
}

KDMFramework::name_t KDMFramework::getName() const
{
    return m_name;
}



/*PROTECTED REGION ID(kdm::kdm::KDMFramework implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr KDMFramework::eClassImpl() const
{
    return KdmPackage::_instance()->getKDMFramework();
}

