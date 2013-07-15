
#ifndef EMF_CPP_KDM_CONCEPTUAL_FWD_HPP
#define EMF_CPP_KDM_CONCEPTUAL_FWD_HPP

#include <emf4cpp2/emf4cpp2.hpp>


namespace kdm
{
namespace conceptual
{


class ConceptualPackage;
typedef ConceptualPackage * ConceptualPackage_ptr;
class ConceptualFactory;
typedef ConceptualFactory * ConceptualFactory_ptr;

// Data types


// Classes
class ConceptualModel;
typedef ConceptualModel* ConceptualModel_ptr;
class AbstractConceptualElement;
typedef AbstractConceptualElement* AbstractConceptualElement_ptr;
class TermUnit;
typedef TermUnit* TermUnit_ptr;
class ConceptualContainer;
typedef ConceptualContainer* ConceptualContainer_ptr;
class FactUnit;
typedef FactUnit* FactUnit_ptr;
class AbstractConceptualRelationship;
typedef AbstractConceptualRelationship* AbstractConceptualRelationship_ptr;
class ConceptualRelationship;
typedef ConceptualRelationship* ConceptualRelationship_ptr;
class BehaviorUnit;
typedef BehaviorUnit* BehaviorUnit_ptr;
class RuleUnit;
typedef RuleUnit* RuleUnit_ptr;
class ScenarioUnit;
typedef ScenarioUnit* ScenarioUnit_ptr;
class ConceptualFlow;
typedef ConceptualFlow* ConceptualFlow_ptr;
class ConceptualElement;
typedef ConceptualElement* ConceptualElement_ptr;
class ConceptualRole;
typedef ConceptualRole* ConceptualRole_ptr;


// Structural features
struct ConceptualModel__conceptualElement_tag;
struct AbstractConceptualElement__source_tag;
struct AbstractConceptualElement__implementation_tag;
struct AbstractConceptualElement__conceptualRelation_tag;
struct AbstractConceptualElement__abstraction_tag;
struct ConceptualContainer__conceptualElement_tag;
struct ConceptualRelationship__to_tag;
struct ConceptualRelationship__from_tag;
struct ConceptualFlow__to_tag;
struct ConceptualFlow__from_tag;
struct ConceptualRole__conceptualElement_tag;


} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_FWD_HPP
