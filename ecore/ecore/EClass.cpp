#include "EClass.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EOperation.hpp>
#include <ecore/EAttribute.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EClass include) ENABLED START*/
#include <map>

struct EClass::Impl
{
    typedef std::map< ecore::EStructuralFeature_ptr, e4c::get_t >
        gets_t;
    typedef std::map< ecore::EStructuralFeature_ptr, e4c::set_t >
        sets_t;

    gets_t gets;
    sets_t sets;
};

void EClass::addFeatureAccesors(ecore::EStructuralFeature_ptr feature, 
        e4c::get_t g, e4c::set_t s)
{
    if (g) m_impl->gets[feature] = g;
    if (s) m_impl->sets[feature] = s;
}

e4c::get_t EClass::getFeatureGet(ecore::EStructuralFeature_ptr feature)
{
    Impl::gets_t::iterator it = m_impl->gets.find(feature);
    if (it != m_impl->gets.end())
        return it->second;
    return e4c::get_t();
}

e4c::set_t EClass::getFeatureSet(ecore::EStructuralFeature_ptr feature)
{
    Impl::sets_t::iterator it = m_impl->sets.find(feature);
    if (it != m_impl->sets.end())
        return it->second;
    return e4c::set_t();
}
/*PROTECTED REGION END*/

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
	/*PROTECTED REGION ID(EClass constructor) ENABLED START*/
    m_impl = new Impl();
	/*PROTECTED REGION END*/
}

EClass::~EClass()
{
	/*PROTECTED REGION ID(EClass destructor) ENABLED START*/
    delete m_impl;
	/*PROTECTED REGION END*/
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
	assert(eSuperTypes_);
	if (e4c::contains(m_eSuperTypes, eSuperTypes_))
		return;
	m_eSuperTypes.push_back(eSuperTypes_);
}

void EClass::addAllESuperTypes(const eSuperTypes_t& eSuperTypes_)
{
	for (auto i = eSuperTypes_.begin(); i != eSuperTypes_.end(); i++)
		addESuperTypes(*i);
}

void EClass::removeESuperTypes(ecore::EClass_ptr eSuperTypes_)
{
	assert(eSuperTypes_);
	e4c::remove(m_eSuperTypes, eSuperTypes_);
}

void EClass::clearESuperTypes()
{
	m_eSuperTypes.clear();
}

EClass::eOperations_t EClass::getEOperations() const
{
	return e4c::returned(m_eOperations);
}

void EClass::addEOperations(ecore::EOperation_ptr eOperations_)
{
	assert(eOperations_);
	eOperations_->setEContainingClass(this);
	m_eOperations.push_back(std::unique_ptr < ecore::EOperation >(eOperations_));
}

void EClass::addAllEOperations(const eOperations_t& eOperations_)
{
	for (auto i = eOperations_.begin(); i != eOperations_.end(); i++)
		addEOperations(*i);
}

void EClass::removeEOperations(ecore::EOperation_ptr eOperations_)
{
	assert(eOperations_);
	e4c::remove(m_eOperations, eOperations_);
}

void EClass::clearEOperations()
{
	m_eOperations.clear();
}

EClass::eAllAttributes_t EClass::getEAllAttributes() const
{
	return e4c::returned(m_eAllAttributes);
}
void EClass::addEAllAttributes(ecore::EAttribute_ptr eAllAttributes_)
{
	assert(eAllAttributes_);
	if (e4c::contains(m_eAllAttributes, eAllAttributes_))
		return;
	m_eAllAttributes.push_back(eAllAttributes_);
}

void EClass::addAllEAllAttributes(const eAllAttributes_t& eAllAttributes_)
{
	for (auto i = eAllAttributes_.begin(); i != eAllAttributes_.end(); i++)
		addEAllAttributes(*i);
}

void EClass::removeEAllAttributes(ecore::EAttribute_ptr eAllAttributes_)
{
	assert(eAllAttributes_);
	e4c::remove(m_eAllAttributes, eAllAttributes_);
}

void EClass::clearEAllAttributes()
{
	m_eAllAttributes.clear();
}

EClass::eAllReferences_t EClass::getEAllReferences() const
{
	return e4c::returned(m_eAllReferences);
}
void EClass::addEAllReferences(ecore::EReference_ptr eAllReferences_)
{
	assert(eAllReferences_);
	if (e4c::contains(m_eAllReferences, eAllReferences_))
		return;
	m_eAllReferences.push_back(eAllReferences_);
}

void EClass::addAllEAllReferences(const eAllReferences_t& eAllReferences_)
{
	for (auto i = eAllReferences_.begin(); i != eAllReferences_.end(); i++)
		addEAllReferences(*i);
}

void EClass::removeEAllReferences(ecore::EReference_ptr eAllReferences_)
{
	assert(eAllReferences_);
	e4c::remove(m_eAllReferences, eAllReferences_);
}

void EClass::clearEAllReferences()
{
	m_eAllReferences.clear();
}

EClass::eReferences_t EClass::getEReferences() const
{
	return e4c::returned(m_eReferences);
}
void EClass::addEReferences(ecore::EReference_ptr eReferences_)
{
	assert(eReferences_);
	if (e4c::contains(m_eReferences, eReferences_))
		return;
	m_eReferences.push_back(eReferences_);
}

void EClass::addAllEReferences(const eReferences_t& eReferences_)
{
	for (auto i = eReferences_.begin(); i != eReferences_.end(); i++)
		addEReferences(*i);
}

void EClass::removeEReferences(ecore::EReference_ptr eReferences_)
{
	assert(eReferences_);
	e4c::remove(m_eReferences, eReferences_);
}

void EClass::clearEReferences()
{
	m_eReferences.clear();
}

EClass::eAttributes_t EClass::getEAttributes() const
{
	return e4c::returned(m_eAttributes);
}
void EClass::addEAttributes(ecore::EAttribute_ptr eAttributes_)
{
	assert(eAttributes_);
	if (e4c::contains(m_eAttributes, eAttributes_))
		return;
	m_eAttributes.push_back(eAttributes_);
}

void EClass::addAllEAttributes(const eAttributes_t& eAttributes_)
{
	for (auto i = eAttributes_.begin(); i != eAttributes_.end(); i++)
		addEAttributes(*i);
}

void EClass::removeEAttributes(ecore::EAttribute_ptr eAttributes_)
{
	assert(eAttributes_);
	e4c::remove(m_eAttributes, eAttributes_);
}

void EClass::clearEAttributes()
{
	m_eAttributes.clear();
}

EClass::eAllContainments_t EClass::getEAllContainments() const
{
	return e4c::returned(m_eAllContainments);
}
void EClass::addEAllContainments(ecore::EReference_ptr eAllContainments_)
{
	assert(eAllContainments_);
	if (e4c::contains(m_eAllContainments, eAllContainments_))
		return;
	m_eAllContainments.push_back(eAllContainments_);
}

void EClass::addAllEAllContainments(const eAllContainments_t& eAllContainments_)
{
	for (auto i = eAllContainments_.begin(); i != eAllContainments_.end(); i++)
		addEAllContainments(*i);
}

void EClass::removeEAllContainments(ecore::EReference_ptr eAllContainments_)
{
	assert(eAllContainments_);
	e4c::remove(m_eAllContainments, eAllContainments_);
}

void EClass::clearEAllContainments()
{
	m_eAllContainments.clear();
}

EClass::eAllOperations_t EClass::getEAllOperations() const
{
	return e4c::returned(m_eAllOperations);
}
void EClass::addEAllOperations(ecore::EOperation_ptr eAllOperations_)
{
	assert(eAllOperations_);
	if (e4c::contains(m_eAllOperations, eAllOperations_))
		return;
	m_eAllOperations.push_back(eAllOperations_);
}

void EClass::addAllEAllOperations(const eAllOperations_t& eAllOperations_)
{
	for (auto i = eAllOperations_.begin(); i != eAllOperations_.end(); i++)
		addEAllOperations(*i);
}

void EClass::removeEAllOperations(ecore::EOperation_ptr eAllOperations_)
{
	assert(eAllOperations_);
	e4c::remove(m_eAllOperations, eAllOperations_);
}

void EClass::clearEAllOperations()
{
	m_eAllOperations.clear();
}

EClass::eAllStructuralFeatures_t EClass::getEAllStructuralFeatures() const
{
	return e4c::returned(m_eAllStructuralFeatures);
}
void EClass::addEAllStructuralFeatures(ecore::EStructuralFeature_ptr eAllStructuralFeatures_)
{
	assert(eAllStructuralFeatures_);
	if (e4c::contains(m_eAllStructuralFeatures, eAllStructuralFeatures_))
		return;
	m_eAllStructuralFeatures.push_back(eAllStructuralFeatures_);
}

void EClass::addAllEAllStructuralFeatures(const eAllStructuralFeatures_t& eAllStructuralFeatures_)
{
	for (auto i = eAllStructuralFeatures_.begin(); i != eAllStructuralFeatures_.end(); i++)
		addEAllStructuralFeatures(*i);
}

void EClass::removeEAllStructuralFeatures(ecore::EStructuralFeature_ptr eAllStructuralFeatures_)
{
	assert(eAllStructuralFeatures_);
	e4c::remove(m_eAllStructuralFeatures, eAllStructuralFeatures_);
}

void EClass::clearEAllStructuralFeatures()
{
	m_eAllStructuralFeatures.clear();
}

EClass::eAllSuperTypes_t EClass::getEAllSuperTypes() const
{
	return e4c::returned(m_eAllSuperTypes);
}
void EClass::addEAllSuperTypes(ecore::EClass_ptr eAllSuperTypes_)
{
	assert(eAllSuperTypes_);
	if (e4c::contains(m_eAllSuperTypes, eAllSuperTypes_))
		return;
	m_eAllSuperTypes.push_back(eAllSuperTypes_);
}

void EClass::addAllEAllSuperTypes(const eAllSuperTypes_t& eAllSuperTypes_)
{
	for (auto i = eAllSuperTypes_.begin(); i != eAllSuperTypes_.end(); i++)
		addEAllSuperTypes(*i);
}

void EClass::removeEAllSuperTypes(ecore::EClass_ptr eAllSuperTypes_)
{
	assert(eAllSuperTypes_);
	e4c::remove(m_eAllSuperTypes, eAllSuperTypes_);
}

void EClass::clearEAllSuperTypes()
{
	m_eAllSuperTypes.clear();
}

EClass::eIDAttribute_t EClass::getEIDAttribute() const
{
	return e4c::returned(m_eIDAttribute);
}
void EClass::setEIDAttribute(eIDAttribute_t eIDAttribute_)
{
	if (m_eIDAttribute == eIDAttribute_)
		return;
	m_eIDAttribute = eIDAttribute_;
}

EClass::eStructuralFeatures_t EClass::getEStructuralFeatures() const
{
	return e4c::returned(m_eStructuralFeatures);
}

void EClass::addEStructuralFeatures(ecore::EStructuralFeature_ptr eStructuralFeatures_)
{
	assert(eStructuralFeatures_);
	eStructuralFeatures_->setEContainingClass(this);
	m_eStructuralFeatures.push_back(std::unique_ptr < ecore::EStructuralFeature >(eStructuralFeatures_));
}

void EClass::addAllEStructuralFeatures(const eStructuralFeatures_t& eStructuralFeatures_)
{
	for (auto i = eStructuralFeatures_.begin(); i != eStructuralFeatures_.end(); i++)
		addEStructuralFeatures(*i);
}

void EClass::removeEStructuralFeatures(ecore::EStructuralFeature_ptr eStructuralFeatures_)
{
	assert(eStructuralFeatures_);
	e4c::remove(m_eStructuralFeatures, eStructuralFeatures_);
}

void EClass::clearEStructuralFeatures()
{
	m_eStructuralFeatures.clear();
}

EClass::eGenericSuperTypes_t EClass::getEGenericSuperTypes() const
{
	return e4c::returned(m_eGenericSuperTypes);
}

void EClass::addEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_)
{
	assert(eGenericSuperTypes_);
	m_eGenericSuperTypes.push_back(std::unique_ptr < ecore::EGenericType >(eGenericSuperTypes_));
}

void EClass::addAllEGenericSuperTypes(const eGenericSuperTypes_t& eGenericSuperTypes_)
{
	for (auto i = eGenericSuperTypes_.begin(); i != eGenericSuperTypes_.end(); i++)
		addEGenericSuperTypes(*i);
}

void EClass::removeEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_)
{
	assert(eGenericSuperTypes_);
	e4c::remove(m_eGenericSuperTypes, eGenericSuperTypes_);
}

void EClass::clearEGenericSuperTypes()
{
	m_eGenericSuperTypes.clear();
}

EClass::eAllGenericSuperTypes_t EClass::getEAllGenericSuperTypes() const
{
	return e4c::returned(m_eAllGenericSuperTypes);
}
void EClass::addEAllGenericSuperTypes(ecore::EGenericType_ptr eAllGenericSuperTypes_)
{
	assert(eAllGenericSuperTypes_);
	if (e4c::contains(m_eAllGenericSuperTypes, eAllGenericSuperTypes_))
		return;
	m_eAllGenericSuperTypes.push_back(eAllGenericSuperTypes_);
}

void EClass::addAllEAllGenericSuperTypes(const eAllGenericSuperTypes_t& eAllGenericSuperTypes_)
{
	for (auto i = eAllGenericSuperTypes_.begin(); i != eAllGenericSuperTypes_.end(); i++)
		addEAllGenericSuperTypes(*i);
}

void EClass::removeEAllGenericSuperTypes(ecore::EGenericType_ptr eAllGenericSuperTypes_)
{
	assert(eAllGenericSuperTypes_);
	e4c::remove(m_eAllGenericSuperTypes, eAllGenericSuperTypes_);
}

void EClass::clearEAllGenericSuperTypes()
{
	m_eAllGenericSuperTypes.clear();
}


ecore::EBoolean EClass::isSuperTypeOf(ecore::EClass_ptr someClass)
{
	/*PROTECTED REGION ID(ecore::EBoolean EClass::isSuperTypeOfecore::EClass_ptr someClass) START*/
	return ecore::EBoolean();
	/*PROTECTED REGION END*/
}

ecore::EInt EClass::getFeatureCount()
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getFeatureCount) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}

ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(ecore::EInt featureID)
{
	/*PROTECTED REGION ID(ecore::EStructuralFeature_ptr EClass::getEStructuralFeatureecore::EInt featureID) START*/
	return ecore::EStructuralFeature_ptr();
	/*PROTECTED REGION END*/
}

ecore::EInt EClass::getFeatureID(ecore::EStructuralFeature_ptr feature)
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getFeatureIDecore::EStructuralFeature_ptr feature) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}

ecore::EStructuralFeature_ptr EClass::getEStructuralFeature(ecore::EString featureName)
{
	/*PROTECTED REGION ID(ecore::EStructuralFeature_ptr EClass::getEStructuralFeatureecore::EString featureName) START*/
	return ecore::EStructuralFeature_ptr();
	/*PROTECTED REGION END*/
}

ecore::EInt EClass::getOperationCount()
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getOperationCount) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}

ecore::EOperation_ptr EClass::getEOperation(ecore::EInt operationID)
{
	/*PROTECTED REGION ID(ecore::EOperation_ptr EClass::getEOperationecore::EInt operationID) START*/
	return ecore::EOperation_ptr();
	/*PROTECTED REGION END*/
}

ecore::EInt EClass::getOperationID(ecore::EOperation_ptr operation)
{
	/*PROTECTED REGION ID(ecore::EInt EClass::getOperationIDecore::EOperation_ptr operation) START*/
	return ecore::EInt();
	/*PROTECTED REGION END*/
}

ecore::EOperation_ptr EClass::getOverride(ecore::EOperation_ptr operation)
{
	/*PROTECTED REGION ID(ecore::EOperation_ptr EClass::getOverrideecore::EOperation_ptr operation) START*/
	return ecore::EOperation_ptr();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EClass implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EClass::eClassImpl() const
{
	return EcorePackage::_instance()->getEClass();
}
 
