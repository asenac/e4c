
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

void EClass::addESuperTypes(ecore::EClass_ptr eSuperTypes_)
{
	m_eSuperTypes.push_back(eSuperTypes_);
	
}

void EClass::addAllESuperTypes(const eSuperTypes_t& eSuperTypes_)
{
	for (auto i = eSuperTypes_.begin(); i != eSuperTypes_.end(); i++)
		addESuperTypes(*i);
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

void EClass::addAllEOperations(const eOperations_t& eOperations_)
{
	for (auto i = eOperations_.begin(); i != eOperations_.end(); i++)
		addEOperations(*i);
}


EClass::eAllAttributes_t EClass::getEAllAttributes() const
{
	return e4c::returned(m_eAllAttributes);
}

void EClass::addEAllAttributes(ecore::EAttribute_ptr eAllAttributes_)
{
	m_eAllAttributes.push_back(eAllAttributes_);
	
}

void EClass::addAllEAllAttributes(const eAllAttributes_t& eAllAttributes_)
{
	for (auto i = eAllAttributes_.begin(); i != eAllAttributes_.end(); i++)
		addEAllAttributes(*i);
}


EClass::eAllReferences_t EClass::getEAllReferences() const
{
	return e4c::returned(m_eAllReferences);
}

void EClass::addEAllReferences(ecore::EReference_ptr eAllReferences_)
{
	m_eAllReferences.push_back(eAllReferences_);
	
}

void EClass::addAllEAllReferences(const eAllReferences_t& eAllReferences_)
{
	for (auto i = eAllReferences_.begin(); i != eAllReferences_.end(); i++)
		addEAllReferences(*i);
}


EClass::eReferences_t EClass::getEReferences() const
{
	return e4c::returned(m_eReferences);
}

void EClass::addEReferences(ecore::EReference_ptr eReferences_)
{
	m_eReferences.push_back(eReferences_);
	
}

void EClass::addAllEReferences(const eReferences_t& eReferences_)
{
	for (auto i = eReferences_.begin(); i != eReferences_.end(); i++)
		addEReferences(*i);
}


EClass::eAttributes_t EClass::getEAttributes() const
{
	return e4c::returned(m_eAttributes);
}

void EClass::addEAttributes(ecore::EAttribute_ptr eAttributes_)
{
	m_eAttributes.push_back(eAttributes_);
	
}

void EClass::addAllEAttributes(const eAttributes_t& eAttributes_)
{
	for (auto i = eAttributes_.begin(); i != eAttributes_.end(); i++)
		addEAttributes(*i);
}


EClass::eAllContainments_t EClass::getEAllContainments() const
{
	return e4c::returned(m_eAllContainments);
}

void EClass::addEAllContainments(ecore::EReference_ptr eAllContainments_)
{
	m_eAllContainments.push_back(eAllContainments_);
	
}

void EClass::addAllEAllContainments(const eAllContainments_t& eAllContainments_)
{
	for (auto i = eAllContainments_.begin(); i != eAllContainments_.end(); i++)
		addEAllContainments(*i);
}


EClass::eAllOperations_t EClass::getEAllOperations() const
{
	return e4c::returned(m_eAllOperations);
}

void EClass::addEAllOperations(ecore::EOperation_ptr eAllOperations_)
{
	m_eAllOperations.push_back(eAllOperations_);
	
}

void EClass::addAllEAllOperations(const eAllOperations_t& eAllOperations_)
{
	for (auto i = eAllOperations_.begin(); i != eAllOperations_.end(); i++)
		addEAllOperations(*i);
}


EClass::eAllStructuralFeatures_t EClass::getEAllStructuralFeatures() const
{
	return e4c::returned(m_eAllStructuralFeatures);
}

void EClass::addEAllStructuralFeatures(ecore::EStructuralFeature_ptr eAllStructuralFeatures_)
{
	m_eAllStructuralFeatures.push_back(eAllStructuralFeatures_);
	
}

void EClass::addAllEAllStructuralFeatures(const eAllStructuralFeatures_t& eAllStructuralFeatures_)
{
	for (auto i = eAllStructuralFeatures_.begin(); i != eAllStructuralFeatures_.end(); i++)
		addEAllStructuralFeatures(*i);
}


EClass::eAllSuperTypes_t EClass::getEAllSuperTypes() const
{
	return e4c::returned(m_eAllSuperTypes);
}

void EClass::addEAllSuperTypes(ecore::EClass_ptr eAllSuperTypes_)
{
	m_eAllSuperTypes.push_back(eAllSuperTypes_);
	
}

void EClass::addAllEAllSuperTypes(const eAllSuperTypes_t& eAllSuperTypes_)
{
	for (auto i = eAllSuperTypes_.begin(); i != eAllSuperTypes_.end(); i++)
		addEAllSuperTypes(*i);
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

void EClass::addAllEStructuralFeatures(const eStructuralFeatures_t& eStructuralFeatures_)
{
	for (auto i = eStructuralFeatures_.begin(); i != eStructuralFeatures_.end(); i++)
		addEStructuralFeatures(*i);
}


EClass::eGenericSuperTypes_t EClass::getEGenericSuperTypes() const
{
	return e4c::returned(m_eGenericSuperTypes);
}


void EClass::addEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_)
{
	m_eGenericSuperTypes.push_back(std::unique_ptr < ecore::EGenericType >(eGenericSuperTypes_));
}

void EClass::addAllEGenericSuperTypes(const eGenericSuperTypes_t& eGenericSuperTypes_)
{
	for (auto i = eGenericSuperTypes_.begin(); i != eGenericSuperTypes_.end(); i++)
		addEGenericSuperTypes(*i);
}


EClass::eAllGenericSuperTypes_t EClass::getEAllGenericSuperTypes() const
{
	return e4c::returned(m_eAllGenericSuperTypes);
}

void EClass::addEAllGenericSuperTypes(ecore::EGenericType_ptr eAllGenericSuperTypes_)
{
	m_eAllGenericSuperTypes.push_back(eAllGenericSuperTypes_);
	
}

void EClass::addAllEAllGenericSuperTypes(const eAllGenericSuperTypes_t& eAllGenericSuperTypes_)
{
	for (auto i = eAllGenericSuperTypes_.begin(); i != eAllGenericSuperTypes_.end(); i++)
		addEAllGenericSuperTypes(*i);
}




ecore::EBoolean EClass::isSuperTypeOf(ecore::EClass_ptr someClass)
{
	/*PROTECTED REGION ID(ecore::EBoolean EClass::isSuperTypeOf(ecore::EClass_ptr someClass)) START*/
	return ecore::EBoolean();
	/*PROTECTED REGION END*/
}
ecore::EInt EClass::getFeatureCount()
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getFeatureCount()) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}
ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(ecore::EInt featureID)
{
	/*PROTECTED REGION ID(ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(ecore::EInt featureID)) START*/
	return ecore::EStructuralFeature_ptr();
	/*PROTECTED REGION END*/
}
ecore::EInt EClass::getFeatureID(ecore::EStructuralFeature_ptr feature)
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getFeatureID(ecore::EStructuralFeature_ptr feature)) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}
ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(ecore::EString featureName)
{
	/*PROTECTED REGION ID(ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(ecore::EString featureName)) START*/
	return ecore::EStructuralFeature_ptr();
	/*PROTECTED REGION END*/
}
ecore::EInt EClass::getOperationCount()
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getOperationCount()) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}
ecore::EOperation_ptr EClass::getEOperation(ecore::EInt operationID)
{
	/*PROTECTED REGION ID(ecore::EOperation_ptr EClass::getEOperation(ecore::EInt operationID)) START*/
	return ecore::EOperation_ptr();
	/*PROTECTED REGION END*/
}
ecore::EInt EClass::getOperationID(ecore::EOperation_ptr operation)
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getOperationID(ecore::EOperation_ptr operation)) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}
ecore::EOperation_ptr EClass::getOverride(ecore::EOperation_ptr operation)
{
	/*PROTECTED REGION ID(ecore::EOperation_ptr EClass::getOverride(ecore::EOperation_ptr operation)) START*/
	return ecore::EOperation_ptr();
	/*PROTECTED REGION END*/
}

