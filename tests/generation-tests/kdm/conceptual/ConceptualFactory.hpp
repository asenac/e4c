#ifndef EMF_CPP_KDM_CONCEPTUAL_FACTORY_HPP
#define EMF_CPP_KDM_CONCEPTUAL_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/conceptual/fwd.hpp>

namespace kdm
{
namespace conceptual
{


class ConceptualFactory : public ::ecore::EFactory
{
public:

    static const ConceptualFactory_ptr _instance();

    ConceptualModel_ptr createConceptualModel() const;
    TermUnit_ptr createTermUnit() const;
    ConceptualContainer_ptr createConceptualContainer() const;
    FactUnit_ptr createFactUnit() const;
    ConceptualRelationship_ptr createConceptualRelationship() const;
    BehaviorUnit_ptr createBehaviorUnit() const;
    RuleUnit_ptr createRuleUnit() const;
    ScenarioUnit_ptr createScenarioUnit() const;
    ConceptualFlow_ptr createConceptualFlow() const;
    ConceptualElement_ptr createConceptualElement() const;
    ConceptualRole_ptr createConceptualRole() const;

protected:

    ConceptualFactory();
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_FACTORY_HPP
