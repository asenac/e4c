#include "ConceptualFactory.hpp"
#include "ConceptualPackage.hpp"
#include "include.hpp"

using namespace kdm::conceptual;

ConceptualFactory::ConceptualFactory()
{
    // m_ePackage = ConceptualPackage::_instance();
    // std::bind(&ConceptualFactory::createConceptualModel, this);
    // m_ePackage->getTag_ConceptualModel();
    // std::bind(&ConceptualFactory::createTermUnit, this);
    // m_ePackage->getTag_TermUnit();
    // std::bind(&ConceptualFactory::createConceptualContainer, this);
    // m_ePackage->getTag_ConceptualContainer();
    // std::bind(&ConceptualFactory::createFactUnit, this);
    // m_ePackage->getTag_FactUnit();
    // std::bind(&ConceptualFactory::createConceptualRelationship, this);
    // m_ePackage->getTag_ConceptualRelationship();
    // std::bind(&ConceptualFactory::createBehaviorUnit, this);
    // m_ePackage->getTag_BehaviorUnit();
    // std::bind(&ConceptualFactory::createRuleUnit, this);
    // m_ePackage->getTag_RuleUnit();
    // std::bind(&ConceptualFactory::createScenarioUnit, this);
    // m_ePackage->getTag_ScenarioUnit();
    // std::bind(&ConceptualFactory::createConceptualFlow, this);
    // m_ePackage->getTag_ConceptualFlow();
    // std::bind(&ConceptualFactory::createConceptualElement, this);
    // m_ePackage->getTag_ConceptualElement();
    // std::bind(&ConceptualFactory::createConceptualRole, this);
    // m_ePackage->getTag_ConceptualRole();
}

const ConceptualFactory_ptr ConceptualFactory::_instance()
{
    static ConceptualFactory __instance;
    return &__instance;
}

ConceptualModel_ptr ConceptualFactory::createConceptualModel() const
{
    return new ConceptualModel();
}

TermUnit_ptr ConceptualFactory::createTermUnit() const
{
    return new TermUnit();
}

ConceptualContainer_ptr ConceptualFactory::createConceptualContainer() const
{
    return new ConceptualContainer();
}

FactUnit_ptr ConceptualFactory::createFactUnit() const
{
    return new FactUnit();
}

ConceptualRelationship_ptr ConceptualFactory::createConceptualRelationship() const
{
    return new ConceptualRelationship();
}

BehaviorUnit_ptr ConceptualFactory::createBehaviorUnit() const
{
    return new BehaviorUnit();
}

RuleUnit_ptr ConceptualFactory::createRuleUnit() const
{
    return new RuleUnit();
}

ScenarioUnit_ptr ConceptualFactory::createScenarioUnit() const
{
    return new ScenarioUnit();
}

ConceptualFlow_ptr ConceptualFactory::createConceptualFlow() const
{
    return new ConceptualFlow();
}

ConceptualElement_ptr ConceptualFactory::createConceptualElement() const
{
    return new ConceptualElement();
}

ConceptualRole_ptr ConceptualFactory::createConceptualRole() const
{
    return new ConceptualRole();
}

