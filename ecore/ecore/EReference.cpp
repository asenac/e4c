#include "EReference.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EReference include) START*/
/*PROTECTED REGION END*/

EReference::EReference() :
    m_containment(),
    m_container(),
    m_resolveProxies(),
    m_eOpposite(),
    m_eReferenceType(),
    m_eKeys()
{
    /*PROTECTED REGION ID(EReference constructor) START*/
    /*PROTECTED REGION END*/
}

EReference::~EReference()
{
    /*PROTECTED REGION ID(EReference destructor) START*/
    /*PROTECTED REGION END*/
}

void EReference::setContainment(containment_t _containment)
{
    m_containment = _containment;;
}

EReference::containment_t EReference::getContainment() const
{
    return m_containment;
}

void EReference::setContainer(container_t _container)
{
    m_container = _container;;
}

EReference::container_t EReference::getContainer() const
{
    return m_container;
}

void EReference::setResolveProxies(resolveProxies_t _resolveProxies)
{
    m_resolveProxies = _resolveProxies;;
}

EReference::resolveProxies_t EReference::getResolveProxies() const
{
    return m_resolveProxies;
}

EReference::eOpposite_t EReference::getEOpposite() const
{
    return e4c::returned(m_eOpposite);
}
void EReference::setEOpposite(eOpposite_t eOpposite_)
{
    if (m_eOpposite == eOpposite_)
        return;
    m_eOpposite = eOpposite_;
}

EReference::eReferenceType_t EReference::getEReferenceType() const
{
    return e4c::returned(m_eReferenceType);
}
void EReference::setEReferenceType(eReferenceType_t eReferenceType_)
{
    if (m_eReferenceType == eReferenceType_)
        return;
    m_eReferenceType = eReferenceType_;
}

EReference::eKeys_t EReference::getEKeys() const
{
    return e4c::returned(m_eKeys);
}
void EReference::addEKeys(ecore::EAttribute_ptr eKeys_)
{
    assert(eKeys_);
    if (e4c::contains(m_eKeys, eKeys_))
        return;
    m_eKeys.push_back(eKeys_);
}

void EReference::addAllEKeys(const eKeys_t& eKeys_)
{
    for (auto i = eKeys_.begin(); i != eKeys_.end(); i++)
        addEKeys(*i);
}

void EReference::removeEKeys(ecore::EAttribute_ptr eKeys_)
{
    assert(eKeys_);
    e4c::remove(m_eKeys, eKeys_);
}

void EReference::clearEKeys()
{
    m_eKeys.clear();
}



/*PROTECTED REGION ID(ecore::EReference implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EReference::eClassImpl() const
{
    return EcorePackage::_instance()->getEReference();
}

