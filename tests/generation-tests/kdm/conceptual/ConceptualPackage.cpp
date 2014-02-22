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



    m_ConceptualModel = ecoreFactory->createEClass();
    m_ConceptualModel->setName("ConceptualModel");
    addEClassifiers(m_ConceptualModel);
    m_AbstractConceptualElement = ecoreFactory->createEClass();
    m_AbstractConceptualElement->setName("AbstractConceptualElement");
    addEClassifiers(m_AbstractConceptualElement);
    m_TermUnit = ecoreFactory->createEClass();
    m_TermUnit->setName("TermUnit");
    addEClassifiers(m_TermUnit);
    m_ConceptualContainer = ecoreFactory->createEClass();
    m_ConceptualContainer->setName("ConceptualContainer");
    addEClassifiers(m_ConceptualContainer);
    m_FactUnit = ecoreFactory->createEClass();
    m_FactUnit->setName("FactUnit");
    addEClassifiers(m_FactUnit);
    m_AbstractConceptualRelationship = ecoreFactory->createEClass();
    m_AbstractConceptualRelationship->setName("AbstractConceptualRelationship");
    addEClassifiers(m_AbstractConceptualRelationship);
    m_ConceptualRelationship = ecoreFactory->createEClass();
    m_ConceptualRelationship->setName("ConceptualRelationship");
    addEClassifiers(m_ConceptualRelationship);
    m_BehaviorUnit = ecoreFactory->createEClass();
    m_BehaviorUnit->setName("BehaviorUnit");
    addEClassifiers(m_BehaviorUnit);
    m_RuleUnit = ecoreFactory->createEClass();
    m_RuleUnit->setName("RuleUnit");
    addEClassifiers(m_RuleUnit);
    m_ScenarioUnit = ecoreFactory->createEClass();
    m_ScenarioUnit->setName("ScenarioUnit");
    addEClassifiers(m_ScenarioUnit);
    m_ConceptualFlow = ecoreFactory->createEClass();
    m_ConceptualFlow->setName("ConceptualFlow");
    addEClassifiers(m_ConceptualFlow);
    m_ConceptualElement = ecoreFactory->createEClass();
    m_ConceptualElement->setName("ConceptualElement");
    addEClassifiers(m_ConceptualElement);
    m_ConceptualRole = ecoreFactory->createEClass();
    m_ConceptualRole->setName("ConceptualRole");
    addEClassifiers(m_ConceptualRole);


    {
        m_ConceptualModel__conceptualElement = ecoreFactory->createEReference();
        m_ConceptualModel__conceptualElement->setName("conceptualElement");
        m_ConceptualModel->addEStructuralFeatures(m_ConceptualModel__conceptualElement);
        m_ConceptualModel->addEAllStructuralFeatures(m_ConceptualModel__conceptualElement);
        m_ConceptualModel->addEReferences(m_ConceptualModel__conceptualElement);
        m_ConceptualModel->addEAllReferences(m_ConceptualModel__conceptualElement);
    }
    {
        m_AbstractConceptualElement__source = ecoreFactory->createEReference();
        m_AbstractConceptualElement__source->setName("source");
        m_AbstractConceptualElement->addEStructuralFeatures(m_AbstractConceptualElement__source);
        m_AbstractConceptualElement->addEAllStructuralFeatures(m_AbstractConceptualElement__source);
        m_AbstractConceptualElement->addEReferences(m_AbstractConceptualElement__source);
        m_AbstractConceptualElement->addEAllReferences(m_AbstractConceptualElement__source);
    }
    {
        m_AbstractConceptualElement__implementation = ecoreFactory->createEReference();
        m_AbstractConceptualElement__implementation->setName("implementation");
        m_AbstractConceptualElement->addEStructuralFeatures(m_AbstractConceptualElement__implementation);
        m_AbstractConceptualElement->addEAllStructuralFeatures(m_AbstractConceptualElement__implementation);
        m_AbstractConceptualElement->addEReferences(m_AbstractConceptualElement__implementation);
        m_AbstractConceptualElement->addEAllReferences(m_AbstractConceptualElement__implementation);
    }
    {
        m_AbstractConceptualElement__conceptualRelation = ecoreFactory->createEReference();
        m_AbstractConceptualElement__conceptualRelation->setName("conceptualRelation");
        m_AbstractConceptualElement->addEStructuralFeatures(m_AbstractConceptualElement__conceptualRelation);
        m_AbstractConceptualElement->addEAllStructuralFeatures(m_AbstractConceptualElement__conceptualRelation);
        m_AbstractConceptualElement->addEReferences(m_AbstractConceptualElement__conceptualRelation);
        m_AbstractConceptualElement->addEAllReferences(m_AbstractConceptualElement__conceptualRelation);
    }
    {
        m_AbstractConceptualElement__abstraction = ecoreFactory->createEReference();
        m_AbstractConceptualElement__abstraction->setName("abstraction");
        m_AbstractConceptualElement->addEStructuralFeatures(m_AbstractConceptualElement__abstraction);
        m_AbstractConceptualElement->addEAllStructuralFeatures(m_AbstractConceptualElement__abstraction);
        m_AbstractConceptualElement->addEReferences(m_AbstractConceptualElement__abstraction);
        m_AbstractConceptualElement->addEAllReferences(m_AbstractConceptualElement__abstraction);
    }
    {
        m_ConceptualContainer__conceptualElement = ecoreFactory->createEReference();
        m_ConceptualContainer__conceptualElement->setName("conceptualElement");
        m_ConceptualContainer->addEStructuralFeatures(m_ConceptualContainer__conceptualElement);
        m_ConceptualContainer->addEAllStructuralFeatures(m_ConceptualContainer__conceptualElement);
        m_ConceptualContainer->addEReferences(m_ConceptualContainer__conceptualElement);
        m_ConceptualContainer->addEAllReferences(m_ConceptualContainer__conceptualElement);
    }
    {
        m_ConceptualRelationship__to = ecoreFactory->createEReference();
        m_ConceptualRelationship__to->setName("to");
        m_ConceptualRelationship->addEStructuralFeatures(m_ConceptualRelationship__to);
        m_ConceptualRelationship->addEAllStructuralFeatures(m_ConceptualRelationship__to);
        m_ConceptualRelationship->addEReferences(m_ConceptualRelationship__to);
        m_ConceptualRelationship->addEAllReferences(m_ConceptualRelationship__to);
    }
    {
        m_ConceptualRelationship__from = ecoreFactory->createEReference();
        m_ConceptualRelationship__from->setName("from");
        m_ConceptualRelationship->addEStructuralFeatures(m_ConceptualRelationship__from);
        m_ConceptualRelationship->addEAllStructuralFeatures(m_ConceptualRelationship__from);
        m_ConceptualRelationship->addEReferences(m_ConceptualRelationship__from);
        m_ConceptualRelationship->addEAllReferences(m_ConceptualRelationship__from);
    }
    {
        m_ConceptualFlow__to = ecoreFactory->createEReference();
        m_ConceptualFlow__to->setName("to");
        m_ConceptualFlow->addEStructuralFeatures(m_ConceptualFlow__to);
        m_ConceptualFlow->addEAllStructuralFeatures(m_ConceptualFlow__to);
        m_ConceptualFlow->addEReferences(m_ConceptualFlow__to);
        m_ConceptualFlow->addEAllReferences(m_ConceptualFlow__to);
    }
    {
        m_ConceptualFlow__from = ecoreFactory->createEReference();
        m_ConceptualFlow__from->setName("from");
        m_ConceptualFlow->addEStructuralFeatures(m_ConceptualFlow__from);
        m_ConceptualFlow->addEAllStructuralFeatures(m_ConceptualFlow__from);
        m_ConceptualFlow->addEReferences(m_ConceptualFlow__from);
        m_ConceptualFlow->addEAllReferences(m_ConceptualFlow__from);
    }
    {
        m_ConceptualRole__conceptualElement = ecoreFactory->createEReference();
        m_ConceptualRole__conceptualElement->setName("conceptualElement");
        m_ConceptualRole->addEStructuralFeatures(m_ConceptualRole__conceptualElement);
        m_ConceptualRole->addEAllStructuralFeatures(m_ConceptualRole__conceptualElement);
        m_ConceptualRole->addEReferences(m_ConceptualRole__conceptualElement);
        m_ConceptualRole->addEAllReferences(m_ConceptualRole__conceptualElement);
    }

    m_ConceptualModel->addESuperTypes(m_KDMModel);
    m_ConceptualModel->addAllEAllOperations(m_KDMModel->getEOperations());
    m_ConceptualModel->addAllEAllReferences(m_KDMModel->getEReferences());
    m_ConceptualModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
    m_ConceptualModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
    m_AbstractConceptualElement->addESuperTypes(m_KDMEntity);
    m_AbstractConceptualElement->addAllEAllOperations(m_KDMEntity->getEOperations());
    m_AbstractConceptualElement->addAllEAllReferences(m_KDMEntity->getEReferences());
    m_AbstractConceptualElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
    m_AbstractConceptualElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
    m_TermUnit->addESuperTypes(m_AbstractConceptualElement);
    m_TermUnit->addAllEAllOperations(m_AbstractConceptualElement->getEOperations());
    m_TermUnit->addAllEAllReferences(m_AbstractConceptualElement->getEReferences());
    m_TermUnit->addAllEAllAttributes(m_AbstractConceptualElement->getEAttributes());
    m_TermUnit->addAllEAllStructuralFeatures(m_AbstractConceptualElement->getEStructuralFeatures());
    m_ConceptualContainer->addESuperTypes(m_AbstractConceptualElement);
    m_ConceptualContainer->addAllEAllOperations(m_AbstractConceptualElement->getEOperations());
    m_ConceptualContainer->addAllEAllReferences(m_AbstractConceptualElement->getEReferences());
    m_ConceptualContainer->addAllEAllAttributes(m_AbstractConceptualElement->getEAttributes());
    m_ConceptualContainer->addAllEAllStructuralFeatures(m_AbstractConceptualElement->getEStructuralFeatures());
    m_FactUnit->addESuperTypes(m_ConceptualContainer);
    m_FactUnit->addAllEAllOperations(m_ConceptualContainer->getEOperations());
    m_FactUnit->addAllEAllReferences(m_ConceptualContainer->getEReferences());
    m_FactUnit->addAllEAllAttributes(m_ConceptualContainer->getEAttributes());
    m_FactUnit->addAllEAllStructuralFeatures(m_ConceptualContainer->getEStructuralFeatures());
    m_AbstractConceptualRelationship->addESuperTypes(m_KDMRelationship);
    m_AbstractConceptualRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
    m_AbstractConceptualRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
    m_AbstractConceptualRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
    m_AbstractConceptualRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
    m_ConceptualRelationship->addESuperTypes(m_AbstractConceptualRelationship);
    m_ConceptualRelationship->addAllEAllOperations(m_AbstractConceptualRelationship->getEOperations());
    m_ConceptualRelationship->addAllEAllReferences(m_AbstractConceptualRelationship->getEReferences());
    m_ConceptualRelationship->addAllEAllAttributes(m_AbstractConceptualRelationship->getEAttributes());
    m_ConceptualRelationship->addAllEAllStructuralFeatures(m_AbstractConceptualRelationship->getEStructuralFeatures());
    m_BehaviorUnit->addESuperTypes(m_ConceptualContainer);
    m_BehaviorUnit->addAllEAllOperations(m_ConceptualContainer->getEOperations());
    m_BehaviorUnit->addAllEAllReferences(m_ConceptualContainer->getEReferences());
    m_BehaviorUnit->addAllEAllAttributes(m_ConceptualContainer->getEAttributes());
    m_BehaviorUnit->addAllEAllStructuralFeatures(m_ConceptualContainer->getEStructuralFeatures());
    m_RuleUnit->addESuperTypes(m_ConceptualContainer);
    m_RuleUnit->addAllEAllOperations(m_ConceptualContainer->getEOperations());
    m_RuleUnit->addAllEAllReferences(m_ConceptualContainer->getEReferences());
    m_RuleUnit->addAllEAllAttributes(m_ConceptualContainer->getEAttributes());
    m_RuleUnit->addAllEAllStructuralFeatures(m_ConceptualContainer->getEStructuralFeatures());
    m_ScenarioUnit->addESuperTypes(m_ConceptualContainer);
    m_ScenarioUnit->addAllEAllOperations(m_ConceptualContainer->getEOperations());
    m_ScenarioUnit->addAllEAllReferences(m_ConceptualContainer->getEReferences());
    m_ScenarioUnit->addAllEAllAttributes(m_ConceptualContainer->getEAttributes());
    m_ScenarioUnit->addAllEAllStructuralFeatures(m_ConceptualContainer->getEStructuralFeatures());
    m_ConceptualFlow->addESuperTypes(m_AbstractConceptualRelationship);
    m_ConceptualFlow->addAllEAllOperations(m_AbstractConceptualRelationship->getEOperations());
    m_ConceptualFlow->addAllEAllReferences(m_AbstractConceptualRelationship->getEReferences());
    m_ConceptualFlow->addAllEAllAttributes(m_AbstractConceptualRelationship->getEAttributes());
    m_ConceptualFlow->addAllEAllStructuralFeatures(m_AbstractConceptualRelationship->getEStructuralFeatures());
    m_ConceptualElement->addESuperTypes(m_AbstractConceptualElement);
    m_ConceptualElement->addAllEAllOperations(m_AbstractConceptualElement->getEOperations());
    m_ConceptualElement->addAllEAllReferences(m_AbstractConceptualElement->getEReferences());
    m_ConceptualElement->addAllEAllAttributes(m_AbstractConceptualElement->getEAttributes());
    m_ConceptualElement->addAllEAllStructuralFeatures(m_AbstractConceptualElement->getEStructuralFeatures());
    m_ConceptualRole->addESuperTypes(m_AbstractConceptualElement);
    m_ConceptualRole->addAllEAllOperations(m_AbstractConceptualElement->getEOperations());
    m_ConceptualRole->addAllEAllReferences(m_AbstractConceptualElement->getEReferences());
    m_ConceptualRole->addAllEAllAttributes(m_AbstractConceptualElement->getEAttributes());
    m_ConceptualRole->addAllEAllStructuralFeatures(m_AbstractConceptualElement->getEStructuralFeatures());


    m_ConceptualModel->addFeatureAccesors(m_ConceptualModel__conceptualElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualModel_ptr >(o)->getConceptualElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractConceptualElement->addFeatureAccesors(m_AbstractConceptualElement__source,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::AbstractConceptualElement_ptr >(o)->getSource()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractConceptualElement->addFeatureAccesors(m_AbstractConceptualElement__implementation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::AbstractConceptualElement_ptr >(o)->getImplementation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractConceptualElement->addFeatureAccesors(m_AbstractConceptualElement__conceptualRelation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::AbstractConceptualElement_ptr >(o)->getConceptualRelation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractConceptualElement->addFeatureAccesors(m_AbstractConceptualElement__abstraction,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::AbstractConceptualElement_ptr >(o)->getAbstraction()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ConceptualContainer->addFeatureAccesors(m_ConceptualContainer__conceptualElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualContainer_ptr >(o)->getConceptualElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ConceptualRelationship->addFeatureAccesors(m_ConceptualRelationship__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualRelationship_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ConceptualRelationship->addFeatureAccesors(m_ConceptualRelationship__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualRelationship_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ConceptualFlow->addFeatureAccesors(m_ConceptualFlow__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualFlow_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ConceptualFlow->addFeatureAccesors(m_ConceptualFlow__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualFlow_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ConceptualRole->addFeatureAccesors(m_ConceptualRole__conceptualElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::conceptual::ConceptualRole_ptr >(o)->getConceptualElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const ConceptualPackage_ptr ConceptualPackage::_instance()
{
    static ConceptualPackage __instance;
    return &__instance;
}

ecore::EClass_ptr ConceptualPackage::getConceptualModel() const
{
    return m_ConceptualModel;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualModel() const
{
    return e4c::tag< ConceptualModel >::get();
}

ecore::EClass_ptr ConceptualPackage::getAbstractConceptualElement() const
{
    return m_AbstractConceptualElement;
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement() const
{
    return e4c::tag< AbstractConceptualElement >::get();
}

ecore::EClass_ptr ConceptualPackage::getTermUnit() const
{
    return m_TermUnit;
}

e4c::tag_t ConceptualPackage::getTag_TermUnit() const
{
    return e4c::tag< TermUnit >::get();
}

ecore::EClass_ptr ConceptualPackage::getConceptualContainer() const
{
    return m_ConceptualContainer;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualContainer() const
{
    return e4c::tag< ConceptualContainer >::get();
}

ecore::EClass_ptr ConceptualPackage::getFactUnit() const
{
    return m_FactUnit;
}

e4c::tag_t ConceptualPackage::getTag_FactUnit() const
{
    return e4c::tag< FactUnit >::get();
}

ecore::EClass_ptr ConceptualPackage::getAbstractConceptualRelationship() const
{
    return m_AbstractConceptualRelationship;
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualRelationship() const
{
    return e4c::tag< AbstractConceptualRelationship >::get();
}

ecore::EClass_ptr ConceptualPackage::getConceptualRelationship() const
{
    return m_ConceptualRelationship;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship() const
{
    return e4c::tag< ConceptualRelationship >::get();
}

ecore::EClass_ptr ConceptualPackage::getBehaviorUnit() const
{
    return m_BehaviorUnit;
}

e4c::tag_t ConceptualPackage::getTag_BehaviorUnit() const
{
    return e4c::tag< BehaviorUnit >::get();
}

ecore::EClass_ptr ConceptualPackage::getRuleUnit() const
{
    return m_RuleUnit;
}

e4c::tag_t ConceptualPackage::getTag_RuleUnit() const
{
    return e4c::tag< RuleUnit >::get();
}

ecore::EClass_ptr ConceptualPackage::getScenarioUnit() const
{
    return m_ScenarioUnit;
}

e4c::tag_t ConceptualPackage::getTag_ScenarioUnit() const
{
    return e4c::tag< ScenarioUnit >::get();
}

ecore::EClass_ptr ConceptualPackage::getConceptualFlow() const
{
    return m_ConceptualFlow;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow() const
{
    return e4c::tag< ConceptualFlow >::get();
}

ecore::EClass_ptr ConceptualPackage::getConceptualElement() const
{
    return m_ConceptualElement;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualElement() const
{
    return e4c::tag< ConceptualElement >::get();
}

ecore::EClass_ptr ConceptualPackage::getConceptualRole() const
{
    return m_ConceptualRole;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRole() const
{
    return e4c::tag< ConceptualRole >::get();
}

e4c::tag_t ConceptualPackage::getTag_ConceptualModel__conceptualElement() const
{
    return e4c::tag< ConceptualModel__conceptualElement_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualModel__conceptualElement() const
{
    return m_ConceptualModel__conceptualElement;
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__source() const
{
    return e4c::tag< AbstractConceptualElement__source_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__source() const
{
    return m_AbstractConceptualElement__source;
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__implementation() const
{
    return e4c::tag< AbstractConceptualElement__implementation_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__implementation() const
{
    return m_AbstractConceptualElement__implementation;
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__conceptualRelation() const
{
    return e4c::tag< AbstractConceptualElement__conceptualRelation_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__conceptualRelation() const
{
    return m_AbstractConceptualElement__conceptualRelation;
}

e4c::tag_t ConceptualPackage::getTag_AbstractConceptualElement__abstraction() const
{
    return e4c::tag< AbstractConceptualElement__abstraction_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getAbstractConceptualElement__abstraction() const
{
    return m_AbstractConceptualElement__abstraction;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualContainer__conceptualElement() const
{
    return e4c::tag< ConceptualContainer__conceptualElement_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualContainer__conceptualElement() const
{
    return m_ConceptualContainer__conceptualElement;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship__to() const
{
    return e4c::tag< ConceptualRelationship__to_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualRelationship__to() const
{
    return m_ConceptualRelationship__to;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRelationship__from() const
{
    return e4c::tag< ConceptualRelationship__from_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualRelationship__from() const
{
    return m_ConceptualRelationship__from;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow__to() const
{
    return e4c::tag< ConceptualFlow__to_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualFlow__to() const
{
    return m_ConceptualFlow__to;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualFlow__from() const
{
    return e4c::tag< ConceptualFlow__from_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualFlow__from() const
{
    return m_ConceptualFlow__from;
}

e4c::tag_t ConceptualPackage::getTag_ConceptualRole__conceptualElement() const
{
    return e4c::tag< ConceptualRole__conceptualElement_tag >::get();
}

ecore::EReference_ptr ConceptualPackage::getConceptualRole__conceptualElement() const
{
    return m_ConceptualRole__conceptualElement;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_conceptual()
{
    return ::kdm::conceptual::ConceptualPackage::_instance();
}
