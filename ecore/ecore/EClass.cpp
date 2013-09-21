
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

EClass::abstract_t EClass::getAbstract() const
{
	return m_abstract;
}

void EClass::setInterface(interface_t _interface)
{
	m_interface = _interface;;
}

EClass::interface_t EClass::getInterface() const
{
	return m_interface;
}

EClass::eSuperTypes_t EClass::getESuperTypes() const
{
	return e4c::returned(m_eSuperTypes);
}



EClass::eOperations_t EClass::getEOperations() const
{
	return e4c::returned(m_eOperations);
}

void EClass::addEOperations(ecore::EOperation_ptr eOperations_)
{
	eOperations_->setEContainingClass(this);
	m_eOperations.push_back(std::unique_ptr < ecore::EOperation >(eOperations_));
}


EClass::eAllAttributes_t EClass::getEAllAttributes() const
{
	return e4c::returned(m_eAllAttributes);
}



EClass::eAllReferences_t EClass::getEAllReferences() const
{
	return e4c::returned(m_eAllReferences);
}



EClass::eReferences_t EClass::getEReferences() const
{
	return e4c::returned(m_eReferences);
}



EClass::eAttributes_t EClass::getEAttributes() const
{
	return e4c::returned(m_eAttributes);
}



EClass::eAllContainments_t EClass::getEAllContainments() const
{
	return e4c::returned(m_eAllContainments);
}



EClass::eAllOperations_t EClass::getEAllOperations() const
{
	return e4c::returned(m_eAllOperations);
}



EClass::eAllStructuralFeatures_t EClass::getEAllStructuralFeatures() const
{
	return e4c::returned(m_eAllStructuralFeatures);
}



EClass::eAllSuperTypes_t EClass::getEAllSuperTypes() const
{
	return e4c::returned(m_eAllSuperTypes);
}



EClass::eIDAttribute_t EClass::getEIDAttribute() const
{
	return e4c::returned(m_eIDAttribute);
}

void EClass::setEIDAttribute(eIDAttribute_t eIDAttribute_)
{
	m_eIDAttribute = eIDAttribute_;
}


EClass::eStructuralFeatures_t EClass::getEStructuralFeatures() const
{
	return e4c::returned(m_eStructuralFeatures);
}

void EClass::addEStructuralFeatures(ecore::EStructuralFeature_ptr eStructuralFeatures_)
{
	eStructuralFeatures_->setEContainingClass(this);
	m_eStructuralFeatures.push_back(std::unique_ptr < ecore::EStructuralFeature >(eStructuralFeatures_));
}


EClass::eGenericSuperTypes_t EClass::getEGenericSuperTypes() const
{
	return e4c::returned(m_eGenericSuperTypes);
}

void EClass::addEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_)
{
	m_eGenericSuperTypes.push_back(std::unique_ptr < ecore::EGenericType >(eGenericSuperTypes_));
}


EClass::eAllGenericSuperTypes_t EClass::getEAllGenericSuperTypes() const
{
	return e4c::returned(m_eAllGenericSuperTypes);
}





