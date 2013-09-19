#include "ConceptualPackage.hpp"
#include "ConceptualFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::conceptual;

ConceptualPackage::ConceptualPackage()
{
	m_eFactoryInstance = ConceptualFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
