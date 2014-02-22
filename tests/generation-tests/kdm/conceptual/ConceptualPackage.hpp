#ifndef EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP
#define EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/conceptual/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace conceptual
{


class ConceptualPackage : public ::ecore::EPackage
{
public:
    static const ConceptualPackage_ptr _instance();

     ::ecore::EClass_ptr getConceptualModel() const;
     ::ecore::EClass_ptr getAbstractConceptualElement() const;
     ::ecore::EClass_ptr getTermUnit() const;
     ::ecore::EClass_ptr getConceptualContainer() const;
     ::ecore::EClass_ptr getFactUnit() const;
     ::ecore::EClass_ptr getAbstractConceptualRelationship() const;
     ::ecore::EClass_ptr getConceptualRelationship() const;
     ::ecore::EClass_ptr getBehaviorUnit() const;
     ::ecore::EClass_ptr getRuleUnit() const;
     ::ecore::EClass_ptr getScenarioUnit() const;
     ::ecore::EClass_ptr getConceptualFlow() const;
     ::ecore::EClass_ptr getConceptualElement() const;
     ::ecore::EClass_ptr getConceptualRole() const;

     ::ecore::EReference_ptr getConceptualModel__conceptualElement() const;
     ::ecore::EReference_ptr getAbstractConceptualElement__source() const;
     ::ecore::EReference_ptr getAbstractConceptualElement__implementation() const;
     ::ecore::EReference_ptr getAbstractConceptualElement__conceptualRelation() const;
     ::ecore::EReference_ptr getAbstractConceptualElement__abstraction() const;
     ::ecore::EReference_ptr getConceptualContainer__conceptualElement() const;
     ::ecore::EReference_ptr getConceptualRelationship__to() const;
     ::ecore::EReference_ptr getConceptualRelationship__from() const;
     ::ecore::EReference_ptr getConceptualFlow__to() const;
     ::ecore::EReference_ptr getConceptualFlow__from() const;
     ::ecore::EReference_ptr getConceptualRole__conceptualElement() const;

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

     ::ecore::EClass_ptr m_ConceptualModel;
     ::ecore::EClass_ptr m_AbstractConceptualElement;
     ::ecore::EClass_ptr m_TermUnit;
     ::ecore::EClass_ptr m_ConceptualContainer;
     ::ecore::EClass_ptr m_FactUnit;
     ::ecore::EClass_ptr m_AbstractConceptualRelationship;
     ::ecore::EClass_ptr m_ConceptualRelationship;
     ::ecore::EClass_ptr m_BehaviorUnit;
     ::ecore::EClass_ptr m_RuleUnit;
     ::ecore::EClass_ptr m_ScenarioUnit;
     ::ecore::EClass_ptr m_ConceptualFlow;
     ::ecore::EClass_ptr m_ConceptualElement;
     ::ecore::EClass_ptr m_ConceptualRole;
     ::ecore::EReference_ptr m_ConceptualModel__conceptualElement;
     ::ecore::EReference_ptr m_AbstractConceptualElement__source;
     ::ecore::EReference_ptr m_AbstractConceptualElement__implementation;
     ::ecore::EReference_ptr m_AbstractConceptualElement__conceptualRelation;
     ::ecore::EReference_ptr m_AbstractConceptualElement__abstraction;
     ::ecore::EReference_ptr m_ConceptualContainer__conceptualElement;
     ::ecore::EReference_ptr m_ConceptualRelationship__to;
     ::ecore::EReference_ptr m_ConceptualRelationship__from;
     ::ecore::EReference_ptr m_ConceptualFlow__to;
     ::ecore::EReference_ptr m_ConceptualFlow__from;
     ::ecore::EReference_ptr m_ConceptualRole__conceptualElement;
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_PACKAGE_HPP
