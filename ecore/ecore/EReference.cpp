
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

containment_t EReference::getContainment() const
{
	return m_containment;
}

void EReference::setContainer(container_t _container)
{
	m_container = _container;;
}

container_t EReference::getContainer() const
{
	return m_container;
}

void EReference::setResolveProxies(resolveProxies_t _resolveProxies)
{
	m_resolveProxies = _resolveProxies;;
}

resolveProxies_t EReference::getResolveProxies() const
{
	return m_resolveProxies;
}



