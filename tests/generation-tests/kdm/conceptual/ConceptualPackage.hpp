#ifndef EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP
#define EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/conceptual/fwd.hpp>

namespace kdm
{
namespace conceptual
{


class ConceptualPackage : public ::ecore::EPackage
{
public:
    static const ConceptualPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_ConceptualModel() const;
 	e4c::tag_t getTag_AbstractConceptualElement() const;
 	e4c::tag_t getTag_TermUnit() const;
 	e4c::tag_t getTag_ConceptualContainer() const;
 	e4c::tag_t getTag_FactUnit() const;
 	e4c::tag_t getTag_AbstractConceptualRelationship() const;
 	e4c::tag_t getTag_ConceptualRelationship() const;
 	e4c::tag_t getTag_BehaviorUnit() const;
 	e4c::tag_t getTag_RuleUnit() const;
 	e4c::tag_t getTag_ScenarioUnit() const;
 	e4c::tag_t getTag_ConceptualFlow() const;
 	e4c::tag_t getTag_ConceptualElement() const;
 	e4c::tag_t getTag_ConceptualRole() const;
 
 	// Structural features
 	e4c::tag_t getTag_ConceptualModel__conceptualElement() const;
 	e4c::tag_t getTag_AbstractConceptualElement__source() const;
 	e4c::tag_t getTag_AbstractConceptualElement__implementation() const;
 	e4c::tag_t getTag_AbstractConceptualElement__conceptualRelation() const;
 	e4c::tag_t getTag_AbstractConceptualElement__abstraction() const;
 	e4c::tag_t getTag_ConceptualContainer__conceptualElement() const;
 	e4c::tag_t getTag_ConceptualRelationship__to() const;
 	e4c::tag_t getTag_ConceptualRelationship__from() const;
 	e4c::tag_t getTag_ConceptualFlow__to() const;
 	e4c::tag_t getTag_ConceptualFlow__from() const;
 	e4c::tag_t getTag_ConceptualRole__conceptualElement() const;

protected:
    ConceptualPackage();
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP
