#include "ConceptualPackage.hpp"
#include "ConceptualFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::conceptual;

ConceptualPackage::ConceptualPackage()
{
	m_eFactoryInstance = ConceptualFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr ConceptualModel_ = ecoreFactory->createEClass();
	ConceptualModel_->setName("ConceptualModel");
	// m_eClassifiers.push_back(ConceptualModel_);
	::ecore::EClass_ptr AbstractConceptualElement_ = ecoreFactory->createEClass();
	AbstractConceptualElement_->setName("AbstractConceptualElement");
	// m_eClassifiers.push_back(AbstractConceptualElement_);
	::ecore::EClass_ptr TermUnit_ = ecoreFactory->createEClass();
	TermUnit_->setName("TermUnit");
	// m_eClassifiers.push_back(TermUnit_);
	::ecore::EClass_ptr ConceptualContainer_ = ecoreFactory->createEClass();
	ConceptualContainer_->setName("ConceptualContainer");
	// m_eClassifiers.push_back(ConceptualContainer_);
	::ecore::EClass_ptr FactUnit_ = ecoreFactory->createEClass();
	FactUnit_->setName("FactUnit");
	// m_eClassifiers.push_back(FactUnit_);
	::ecore::EClass_ptr AbstractConceptualRelationship_ = ecoreFactory->createEClass();
	AbstractConceptualRelationship_->setName("AbstractConceptualRelationship");
	// m_eClassifiers.push_back(AbstractConceptualRelationship_);
	::ecore::EClass_ptr ConceptualRelationship_ = ecoreFactory->createEClass();
	ConceptualRelationship_->setName("ConceptualRelationship");
	// m_eClassifiers.push_back(ConceptualRelationship_);
	::ecore::EClass_ptr BehaviorUnit_ = ecoreFactory->createEClass();
	BehaviorUnit_->setName("BehaviorUnit");
	// m_eClassifiers.push_back(BehaviorUnit_);
	::ecore::EClass_ptr RuleUnit_ = ecoreFactory->createEClass();
	RuleUnit_->setName("RuleUnit");
	// m_eClassifiers.push_back(RuleUnit_);
	::ecore::EClass_ptr ScenarioUnit_ = ecoreFactory->createEClass();
	ScenarioUnit_->setName("ScenarioUnit");
	// m_eClassifiers.push_back(ScenarioUnit_);
	::ecore::EClass_ptr ConceptualFlow_ = ecoreFactory->createEClass();
	ConceptualFlow_->setName("ConceptualFlow");
	// m_eClassifiers.push_back(ConceptualFlow_);
	::ecore::EClass_ptr ConceptualElement_ = ecoreFactory->createEClass();
	ConceptualElement_->setName("ConceptualElement");
	// m_eClassifiers.push_back(ConceptualElement_);
	::ecore::EClass_ptr ConceptualRole_ = ecoreFactory->createEClass();
	ConceptualRole_->setName("ConceptualRole");
	// m_eClassifiers.push_back(ConceptualRole_);
	
	
	// ConceptualModel_->addESuperType(KDMModel_);
	// AbstractConceptualElement_->addESuperType(KDMEntity_);
	// TermUnit_->addESuperType(AbstractConceptualElement_);
	// ConceptualContainer_->addESuperType(AbstractConceptualElement_);
	// FactUnit_->addESuperType(ConceptualContainer_);
	// AbstractConceptualRelationship_->addESuperType(KDMRelationship_);
	// ConceptualRelationship_->addESuperType(AbstractConceptualRelationship_);
	// BehaviorUnit_->addESuperType(ConceptualContainer_);
	// RuleUnit_->addESuperType(ConceptualContainer_);
	// ScenarioUnit_->addESuperType(ConceptualContainer_);
	// ConceptualFlow_->addESuperType(AbstractConceptualRelationship_);
	// ConceptualElement_->addESuperType(AbstractConceptualElement_);
	// ConceptualRole_->addESuperType(AbstractConceptualElement_);
	
	
	
	
}

const ConceptualPackage_ptr ConceptualPackage::_instance()
{
	static ConceptualPackage __instance;
	return &__instance;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualModel() const
{
	return e4c::tag< ConceptualModel >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement() const
{
	return e4c::tag< AbstractConceptualElement >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_TermUnit() const
{
	return e4c::tag< TermUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualContainer() const
{
	return e4c::tag< ConceptualContainer >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_FactUnit() const
{
	return e4c::tag< FactUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_AbstractConceptualRelationship() const
{
	return e4c::tag< AbstractConceptualRelationship >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship() const
{
	return e4c::tag< ConceptualRelationship >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_BehaviorUnit() const
{
	return e4c::tag< BehaviorUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_RuleUnit() const
{
	return e4c::tag< RuleUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ScenarioUnit() const
{
	return e4c::tag< ScenarioUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualFlow() const
{
	return e4c::tag< ConceptualFlow >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualElement() const
{
	return e4c::tag< ConceptualElement >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualRole() const
{
	return e4c::tag< ConceptualRole >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualModel__conceptualElement() const
{
	return e4c::tag< ConceptualModel__conceptualElement_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__source() const
{
	return e4c::tag< AbstractConceptualElement__source_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__implementation() const
{
	return e4c::tag< AbstractConceptualElement__implementation_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__conceptualRelation() const
{
	return e4c::tag< AbstractConceptualElement__conceptualRelation_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__abstraction() const
{
	return e4c::tag< AbstractConceptualElement__abstraction_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualContainer__conceptualElement() const
{
	return e4c::tag< ConceptualContainer__conceptualElement_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship__to() const
{
	return e4c::tag< ConceptualRelationship__to_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship__from() const
{
	return e4c::tag< ConceptualRelationship__from_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow__to() const
{
	return e4c::tag< ConceptualFlow__to_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow__from() const
{
	return e4c::tag< ConceptualFlow__from_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRole__conceptualElement() const
{
	return e4c::tag< ConceptualRole__conceptualElement_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_conceptual()
{
	return ::kdm::conceptual::ConceptualPackage::_instance();
}
