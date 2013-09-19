
#include "EClass.hpp"
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

EClass::EClass() : 
	m_abstract(),
    m_interface(),
    m_eSuperTypes(),
    m_eOperations(),
    m_eAllAttributes(),
    m_eAllReferences(),
    m_eReferences(),
    m_eAttributes(),
    m_eAllContainments(),
    m_eAllOperations(),
    m_eAllStructuralFeatures(),
    m_eAllSuperTypes(),
    m_eIDAttribute(),
    m_eStructuralFeatures(),
    m_eGenericSuperTypes(),
    m_eAllGenericSuperTypes()
{
}

EClass::~EClass()
{
}

void EClass::setAbstract(abstract_t _abstract)
{
	m_abstract = _abstract;;
}

abstract_t EClass::getAbstract() const
{
	return m_abstract;
}

void EClass::setInterface(interface_t _interface)
{
	m_interface = _interface;;
}

interface_t EClass::getInterface() const
{
	return m_interface;
}



