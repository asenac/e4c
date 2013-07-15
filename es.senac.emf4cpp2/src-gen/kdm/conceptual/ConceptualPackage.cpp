#include "ConceptualPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::conceptual;

ConceptualPackage::ConceptualPackage()
{
}

ConceptualPackage_ptr ConceptualPackage::_instance()
{
	static ConceptualPackage __instance;
	return &__instance;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualModel()
{
	return e4c::tag< ConceptualModel >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement()
{
	return e4c::tag< AbstractConceptualElement >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_TermUnit()
{
	return e4c::tag< TermUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualContainer()
{
	return e4c::tag< ConceptualContainer >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_FactUnit()
{
	return e4c::tag< FactUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_AbstractConceptualRelationship()
{
	return e4c::tag< AbstractConceptualRelationship >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship()
{
	return e4c::tag< ConceptualRelationship >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_BehaviorUnit()
{
	return e4c::tag< BehaviorUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_RuleUnit()
{
	return e4c::tag< RuleUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ScenarioUnit()
{
	return e4c::tag< ScenarioUnit >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualFlow()
{
	return e4c::tag< ConceptualFlow >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualElement()
{
	return e4c::tag< ConceptualElement >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualRole()
{
	return e4c::tag< ConceptualRole >::get();
}
 
e4c::tag_t ConceptualPackage::getTag_ConceptualModel__conceptualElement()
{
	return e4c::tag< ConceptualModel__conceptualElement_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__source()
{
	return e4c::tag< AbstractConceptualElement__source_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__implementation()
{
	return e4c::tag< AbstractConceptualElement__implementation_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__conceptualRelation()
{
	return e4c::tag< AbstractConceptualElement__conceptualRelation_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__abstraction()
{
	return e4c::tag< AbstractConceptualElement__abstraction_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualContainer__conceptualElement()
{
	return e4c::tag< ConceptualContainer__conceptualElement_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship__to()
{
	return e4c::tag< ConceptualRelationship__to_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship__from()
{
	return e4c::tag< ConceptualRelationship__from_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow__to()
{
	return e4c::tag< ConceptualFlow__to_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow__from()
{
	return e4c::tag< ConceptualFlow__from_tag >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRole__conceptualElement()
{
	return e4c::tag< ConceptualRole__conceptualElement_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_conceptual()
{
	return ::kdm::conceptual::ConceptualPackage::_instance();
}
