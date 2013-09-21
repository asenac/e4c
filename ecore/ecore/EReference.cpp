
#include "EReference.hpp"
#include <ecore/EReference.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EAttribute.hpp>

using namespace ecore;

EReference::EReference() : 
	m_containment(),
    m_container(),
    m_resolveProxies(),
    m_eOpposite(),
    m_eReferenceType(),
    m_eKeys()
{
}

EReference::~EReference()
{
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
	m_eOpposite = eOpposite_;
	
}


EReference::eReferenceType_t EReference::getEReferenceType() const
{
	return e4c::returned(m_eReferenceType);
}

void EReference::setEReferenceType(eReferenceType_t eReferenceType_)
{
	m_eReferenceType = eReferenceType_;
	
}


EReference::eKeys_t EReference::getEKeys() const
{
	return e4c::returned(m_eKeys);
}

void EReference::addEKeys(ecore::EAttribute_ptr eKeys_)
{
	m_eKeys.push_back(eKeys_);
	
}

void EReference::addAllEKeys(const eKeys_t& eKeys_)
{
	for (auto i = eKeys_.begin(); i != eKeys_.end(); i++)
		addEKeys(*i);
}





