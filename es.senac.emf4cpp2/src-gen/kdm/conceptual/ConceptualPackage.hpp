#ifndef EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP
#define EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/conceptual/fwd.hpp>

namespace kdm
{
namespace conceptual
{


class ConceptualPackage : public ::ecore::EPackage
{
public:
    static ConceptualPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_ConceptualModel();
 	e4c::tag_t getTag_AbstractConceptualElement();
 	e4c::tag_t getTag_TermUnit();
 	e4c::tag_t getTag_ConceptualContainer();
 	e4c::tag_t getTag_FactUnit();
 	e4c::tag_t getTag_AbstractConceptualRelationship();
 	e4c::tag_t getTag_ConceptualRelationship();
 	e4c::tag_t getTag_BehaviorUnit();
 	e4c::tag_t getTag_RuleUnit();
 	e4c::tag_t getTag_ScenarioUnit();
 	e4c::tag_t getTag_ConceptualFlow();
 	e4c::tag_t getTag_ConceptualElement();
 	e4c::tag_t getTag_ConceptualRole();
 
 	// Structural features
 	e4c::tag_t getTag_ConceptualModel__conceptualElement();
 	e4c::tag_t getTag_AbstractConceptualElement__source();
 	e4c::tag_t getTag_AbstractConceptualElement__implementation();
 	e4c::tag_t getTag_AbstractConceptualElement__conceptualRelation();
 	e4c::tag_t getTag_AbstractConceptualElement__abstraction();
 	e4c::tag_t getTag_ConceptualContainer__conceptualElement();
 	e4c::tag_t getTag_ConceptualRelationship__to();
 	e4c::tag_t getTag_ConceptualRelationship__from();
 	e4c::tag_t getTag_ConceptualFlow__to();
 	e4c::tag_t getTag_ConceptualFlow__from();
 	e4c::tag_t getTag_ConceptualRole__conceptualElement();

protected:
    ConceptualPackage();
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP
