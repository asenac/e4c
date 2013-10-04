#include "ActionPackage.hpp"
#include "ActionFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::action;

ActionPackage::ActionPackage()
{
	m_eFactoryInstance = ActionFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_ActionElement = ecoreFactory->createEClass();
	m_ActionElement->setName("ActionElement");
	addEClassifiers(m_ActionElement);
	m_AbstractActionRelationship = ecoreFactory->createEClass();
	m_AbstractActionRelationship->setName("AbstractActionRelationship");
	addEClassifiers(m_AbstractActionRelationship);
	m_ControlFlow = ecoreFactory->createEClass();
	m_ControlFlow->setName("ControlFlow");
	addEClassifiers(m_ControlFlow);
	m_Calls = ecoreFactory->createEClass();
	m_Calls->setName("Calls");
	addEClassifiers(m_Calls);
	m_Creates = ecoreFactory->createEClass();
	m_Creates->setName("Creates");
	addEClassifiers(m_Creates);
	m_Reads = ecoreFactory->createEClass();
	m_Reads->setName("Reads");
	addEClassifiers(m_Reads);
	m_Writes = ecoreFactory->createEClass();
	m_Writes->setName("Writes");
	addEClassifiers(m_Writes);
	m_CompliesTo = ecoreFactory->createEClass();
	m_CompliesTo->setName("CompliesTo");
	addEClassifiers(m_CompliesTo);
	m_Flow = ecoreFactory->createEClass();
	m_Flow->setName("Flow");
	addEClassifiers(m_Flow);
	m_TrueFlow = ecoreFactory->createEClass();
	m_TrueFlow->setName("TrueFlow");
	addEClassifiers(m_TrueFlow);
	m_FalseFlow = ecoreFactory->createEClass();
	m_FalseFlow->setName("FalseFlow");
	addEClassifiers(m_FalseFlow);
	m_GuardedFlow = ecoreFactory->createEClass();
	m_GuardedFlow->setName("GuardedFlow");
	addEClassifiers(m_GuardedFlow);
	m_UsesType = ecoreFactory->createEClass();
	m_UsesType->setName("UsesType");
	addEClassifiers(m_UsesType);
	m_Addresses = ecoreFactory->createEClass();
	m_Addresses->setName("Addresses");
	addEClassifiers(m_Addresses);
	m_ActionRelationship = ecoreFactory->createEClass();
	m_ActionRelationship->setName("ActionRelationship");
	addEClassifiers(m_ActionRelationship);
	m_Throws = ecoreFactory->createEClass();
	m_Throws->setName("Throws");
	addEClassifiers(m_Throws);
	m_Dispatches = ecoreFactory->createEClass();
	m_Dispatches->setName("Dispatches");
	addEClassifiers(m_Dispatches);
	m_EntryFlow = ecoreFactory->createEClass();
	m_EntryFlow->setName("EntryFlow");
	addEClassifiers(m_EntryFlow);
	m_BlockUnit = ecoreFactory->createEClass();
	m_BlockUnit->setName("BlockUnit");
	addEClassifiers(m_BlockUnit);
	m_ExceptionUnit = ecoreFactory->createEClass();
	m_ExceptionUnit->setName("ExceptionUnit");
	addEClassifiers(m_ExceptionUnit);
	m_TryUnit = ecoreFactory->createEClass();
	m_TryUnit->setName("TryUnit");
	addEClassifiers(m_TryUnit);
	m_FinallyUnit = ecoreFactory->createEClass();
	m_FinallyUnit->setName("FinallyUnit");
	addEClassifiers(m_FinallyUnit);
	m_CatchUnit = ecoreFactory->createEClass();
	m_CatchUnit->setName("CatchUnit");
	addEClassifiers(m_CatchUnit);
	m_ExitFlow = ecoreFactory->createEClass();
	m_ExitFlow->setName("ExitFlow");
	addEClassifiers(m_ExitFlow);
	m_ExceptionFlow = ecoreFactory->createEClass();
	m_ExceptionFlow->setName("ExceptionFlow");
	addEClassifiers(m_ExceptionFlow);

	
    {
        m_ActionElement__kind = ecoreFactory->createEAttribute();
        m_ActionElement__kind->setName("kind");
        m_ActionElement->addEStructuralFeatures(m_ActionElement__kind);
        m_ActionElement->addEAllStructuralFeatures(m_ActionElement__kind);
        m_ActionElement->addEAttributes(m_ActionElement__kind);
        m_ActionElement->addEAllAttributes(m_ActionElement__kind);
    }
    {
        m_ActionElement__codeElement = ecoreFactory->createEReference();
        m_ActionElement__codeElement->setName("codeElement");
        m_ActionElement->addEStructuralFeatures(m_ActionElement__codeElement);
        m_ActionElement->addEAllStructuralFeatures(m_ActionElement__codeElement);
        m_ActionElement->addEReferences(m_ActionElement__codeElement);
        m_ActionElement->addEAllReferences(m_ActionElement__codeElement);
    }
    {
        m_ActionElement__actionRelation = ecoreFactory->createEReference();
        m_ActionElement__actionRelation->setName("actionRelation");
        m_ActionElement->addEStructuralFeatures(m_ActionElement__actionRelation);
        m_ActionElement->addEAllStructuralFeatures(m_ActionElement__actionRelation);
        m_ActionElement->addEReferences(m_ActionElement__actionRelation);
        m_ActionElement->addEAllReferences(m_ActionElement__actionRelation);
    }
    {
        m_ControlFlow__to = ecoreFactory->createEReference();
        m_ControlFlow__to->setName("to");
        m_ControlFlow->addEStructuralFeatures(m_ControlFlow__to);
        m_ControlFlow->addEAllStructuralFeatures(m_ControlFlow__to);
        m_ControlFlow->addEReferences(m_ControlFlow__to);
        m_ControlFlow->addEAllReferences(m_ControlFlow__to);
    }
    {
        m_ControlFlow__from = ecoreFactory->createEReference();
        m_ControlFlow__from->setName("from");
        m_ControlFlow->addEStructuralFeatures(m_ControlFlow__from);
        m_ControlFlow->addEAllStructuralFeatures(m_ControlFlow__from);
        m_ControlFlow->addEReferences(m_ControlFlow__from);
        m_ControlFlow->addEAllReferences(m_ControlFlow__from);
    }
    {
        m_Calls__to = ecoreFactory->createEReference();
        m_Calls__to->setName("to");
        m_Calls->addEStructuralFeatures(m_Calls__to);
        m_Calls->addEAllStructuralFeatures(m_Calls__to);
        m_Calls->addEReferences(m_Calls__to);
        m_Calls->addEAllReferences(m_Calls__to);
    }
    {
        m_Calls__from = ecoreFactory->createEReference();
        m_Calls__from->setName("from");
        m_Calls->addEStructuralFeatures(m_Calls__from);
        m_Calls->addEAllStructuralFeatures(m_Calls__from);
        m_Calls->addEReferences(m_Calls__from);
        m_Calls->addEAllReferences(m_Calls__from);
    }
    {
        m_Creates__to = ecoreFactory->createEReference();
        m_Creates__to->setName("to");
        m_Creates->addEStructuralFeatures(m_Creates__to);
        m_Creates->addEAllStructuralFeatures(m_Creates__to);
        m_Creates->addEReferences(m_Creates__to);
        m_Creates->addEAllReferences(m_Creates__to);
    }
    {
        m_Creates__from = ecoreFactory->createEReference();
        m_Creates__from->setName("from");
        m_Creates->addEStructuralFeatures(m_Creates__from);
        m_Creates->addEAllStructuralFeatures(m_Creates__from);
        m_Creates->addEReferences(m_Creates__from);
        m_Creates->addEAllReferences(m_Creates__from);
    }
    {
        m_Reads__to = ecoreFactory->createEReference();
        m_Reads__to->setName("to");
        m_Reads->addEStructuralFeatures(m_Reads__to);
        m_Reads->addEAllStructuralFeatures(m_Reads__to);
        m_Reads->addEReferences(m_Reads__to);
        m_Reads->addEAllReferences(m_Reads__to);
    }
    {
        m_Reads__from = ecoreFactory->createEReference();
        m_Reads__from->setName("from");
        m_Reads->addEStructuralFeatures(m_Reads__from);
        m_Reads->addEAllStructuralFeatures(m_Reads__from);
        m_Reads->addEReferences(m_Reads__from);
        m_Reads->addEAllReferences(m_Reads__from);
    }
    {
        m_Writes__to = ecoreFactory->createEReference();
        m_Writes__to->setName("to");
        m_Writes->addEStructuralFeatures(m_Writes__to);
        m_Writes->addEAllStructuralFeatures(m_Writes__to);
        m_Writes->addEReferences(m_Writes__to);
        m_Writes->addEAllReferences(m_Writes__to);
    }
    {
        m_Writes__from = ecoreFactory->createEReference();
        m_Writes__from->setName("from");
        m_Writes->addEStructuralFeatures(m_Writes__from);
        m_Writes->addEAllStructuralFeatures(m_Writes__from);
        m_Writes->addEReferences(m_Writes__from);
        m_Writes->addEAllReferences(m_Writes__from);
    }
    {
        m_CompliesTo__to = ecoreFactory->createEReference();
        m_CompliesTo__to->setName("to");
        m_CompliesTo->addEStructuralFeatures(m_CompliesTo__to);
        m_CompliesTo->addEAllStructuralFeatures(m_CompliesTo__to);
        m_CompliesTo->addEReferences(m_CompliesTo__to);
        m_CompliesTo->addEAllReferences(m_CompliesTo__to);
    }
    {
        m_CompliesTo__from = ecoreFactory->createEReference();
        m_CompliesTo__from->setName("from");
        m_CompliesTo->addEStructuralFeatures(m_CompliesTo__from);
        m_CompliesTo->addEAllStructuralFeatures(m_CompliesTo__from);
        m_CompliesTo->addEReferences(m_CompliesTo__from);
        m_CompliesTo->addEAllReferences(m_CompliesTo__from);
    }
    {
        m_UsesType__to = ecoreFactory->createEReference();
        m_UsesType__to->setName("to");
        m_UsesType->addEStructuralFeatures(m_UsesType__to);
        m_UsesType->addEAllStructuralFeatures(m_UsesType__to);
        m_UsesType->addEReferences(m_UsesType__to);
        m_UsesType->addEAllReferences(m_UsesType__to);
    }
    {
        m_UsesType__from = ecoreFactory->createEReference();
        m_UsesType__from->setName("from");
        m_UsesType->addEStructuralFeatures(m_UsesType__from);
        m_UsesType->addEAllStructuralFeatures(m_UsesType__from);
        m_UsesType->addEReferences(m_UsesType__from);
        m_UsesType->addEAllReferences(m_UsesType__from);
    }
    {
        m_Addresses__to = ecoreFactory->createEReference();
        m_Addresses__to->setName("to");
        m_Addresses->addEStructuralFeatures(m_Addresses__to);
        m_Addresses->addEAllStructuralFeatures(m_Addresses__to);
        m_Addresses->addEReferences(m_Addresses__to);
        m_Addresses->addEAllReferences(m_Addresses__to);
    }
    {
        m_Addresses__from = ecoreFactory->createEReference();
        m_Addresses__from->setName("from");
        m_Addresses->addEStructuralFeatures(m_Addresses__from);
        m_Addresses->addEAllStructuralFeatures(m_Addresses__from);
        m_Addresses->addEReferences(m_Addresses__from);
        m_Addresses->addEAllReferences(m_Addresses__from);
    }
    {
        m_ActionRelationship__to = ecoreFactory->createEReference();
        m_ActionRelationship__to->setName("to");
        m_ActionRelationship->addEStructuralFeatures(m_ActionRelationship__to);
        m_ActionRelationship->addEAllStructuralFeatures(m_ActionRelationship__to);
        m_ActionRelationship->addEReferences(m_ActionRelationship__to);
        m_ActionRelationship->addEAllReferences(m_ActionRelationship__to);
    }
    {
        m_ActionRelationship__from = ecoreFactory->createEReference();
        m_ActionRelationship__from->setName("from");
        m_ActionRelationship->addEStructuralFeatures(m_ActionRelationship__from);
        m_ActionRelationship->addEAllStructuralFeatures(m_ActionRelationship__from);
        m_ActionRelationship->addEReferences(m_ActionRelationship__from);
        m_ActionRelationship->addEAllReferences(m_ActionRelationship__from);
    }
    {
        m_Throws__to = ecoreFactory->createEReference();
        m_Throws__to->setName("to");
        m_Throws->addEStructuralFeatures(m_Throws__to);
        m_Throws->addEAllStructuralFeatures(m_Throws__to);
        m_Throws->addEReferences(m_Throws__to);
        m_Throws->addEAllReferences(m_Throws__to);
    }
    {
        m_Throws__from = ecoreFactory->createEReference();
        m_Throws__from->setName("from");
        m_Throws->addEStructuralFeatures(m_Throws__from);
        m_Throws->addEAllStructuralFeatures(m_Throws__from);
        m_Throws->addEReferences(m_Throws__from);
        m_Throws->addEAllReferences(m_Throws__from);
    }
    {
        m_Dispatches__to = ecoreFactory->createEReference();
        m_Dispatches__to->setName("to");
        m_Dispatches->addEStructuralFeatures(m_Dispatches__to);
        m_Dispatches->addEAllStructuralFeatures(m_Dispatches__to);
        m_Dispatches->addEReferences(m_Dispatches__to);
        m_Dispatches->addEAllReferences(m_Dispatches__to);
    }
    {
        m_Dispatches__from = ecoreFactory->createEReference();
        m_Dispatches__from->setName("from");
        m_Dispatches->addEStructuralFeatures(m_Dispatches__from);
        m_Dispatches->addEAllStructuralFeatures(m_Dispatches__from);
        m_Dispatches->addEReferences(m_Dispatches__from);
        m_Dispatches->addEAllReferences(m_Dispatches__from);
    }
    {
        m_EntryFlow__to = ecoreFactory->createEReference();
        m_EntryFlow__to->setName("to");
        m_EntryFlow->addEStructuralFeatures(m_EntryFlow__to);
        m_EntryFlow->addEAllStructuralFeatures(m_EntryFlow__to);
        m_EntryFlow->addEReferences(m_EntryFlow__to);
        m_EntryFlow->addEAllReferences(m_EntryFlow__to);
    }
    {
        m_EntryFlow__from = ecoreFactory->createEReference();
        m_EntryFlow__from->setName("from");
        m_EntryFlow->addEStructuralFeatures(m_EntryFlow__from);
        m_EntryFlow->addEAllStructuralFeatures(m_EntryFlow__from);
        m_EntryFlow->addEReferences(m_EntryFlow__from);
        m_EntryFlow->addEAllReferences(m_EntryFlow__from);
    }
    {
        m_ExitFlow__to = ecoreFactory->createEReference();
        m_ExitFlow__to->setName("to");
        m_ExitFlow->addEStructuralFeatures(m_ExitFlow__to);
        m_ExitFlow->addEAllStructuralFeatures(m_ExitFlow__to);
        m_ExitFlow->addEReferences(m_ExitFlow__to);
        m_ExitFlow->addEAllReferences(m_ExitFlow__to);
    }
    {
        m_ExitFlow__from = ecoreFactory->createEReference();
        m_ExitFlow__from->setName("from");
        m_ExitFlow->addEStructuralFeatures(m_ExitFlow__from);
        m_ExitFlow->addEAllStructuralFeatures(m_ExitFlow__from);
        m_ExitFlow->addEReferences(m_ExitFlow__from);
        m_ExitFlow->addEAllReferences(m_ExitFlow__from);
    }
    {
        m_ExceptionFlow__to = ecoreFactory->createEReference();
        m_ExceptionFlow__to->setName("to");
        m_ExceptionFlow->addEStructuralFeatures(m_ExceptionFlow__to);
        m_ExceptionFlow->addEAllStructuralFeatures(m_ExceptionFlow__to);
        m_ExceptionFlow->addEReferences(m_ExceptionFlow__to);
        m_ExceptionFlow->addEAllReferences(m_ExceptionFlow__to);
    }
    {
        m_ExceptionFlow__from = ecoreFactory->createEReference();
        m_ExceptionFlow__from->setName("from");
        m_ExceptionFlow->addEStructuralFeatures(m_ExceptionFlow__from);
        m_ExceptionFlow->addEAllStructuralFeatures(m_ExceptionFlow__from);
        m_ExceptionFlow->addEReferences(m_ExceptionFlow__from);
        m_ExceptionFlow->addEAllReferences(m_ExceptionFlow__from);
    }
	
	m_ActionElement->addESuperTypes(m_AbstractCodeElement);
	m_ActionElement->addAllEAllOperations(m_AbstractCodeElement->getEOperations());
	m_ActionElement->addAllEAllReferences(m_AbstractCodeElement->getEReferences());
	m_ActionElement->addAllEAllAttributes(m_AbstractCodeElement->getEAttributes());
	m_ActionElement->addAllEAllStructuralFeatures(m_AbstractCodeElement->getEStructuralFeatures());
	m_AbstractActionRelationship->addESuperTypes(m_KDMRelationship);
	m_AbstractActionRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
	m_AbstractActionRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
	m_AbstractActionRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
	m_AbstractActionRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
	m_ControlFlow->addESuperTypes(m_AbstractActionRelationship);
	m_ControlFlow->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ControlFlow->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ControlFlow->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ControlFlow->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Calls->addESuperTypes(m_AbstractActionRelationship);
	m_Calls->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Calls->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Calls->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Calls->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Creates->addESuperTypes(m_AbstractActionRelationship);
	m_Creates->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Creates->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Creates->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Creates->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Reads->addESuperTypes(m_AbstractActionRelationship);
	m_Reads->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Reads->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Reads->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Reads->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Writes->addESuperTypes(m_AbstractActionRelationship);
	m_Writes->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Writes->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Writes->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Writes->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_CompliesTo->addESuperTypes(m_AbstractActionRelationship);
	m_CompliesTo->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_CompliesTo->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_CompliesTo->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_CompliesTo->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Flow->addESuperTypes(m_ControlFlow);
	m_Flow->addAllEAllOperations(m_ControlFlow->getEOperations());
	m_Flow->addAllEAllReferences(m_ControlFlow->getEReferences());
	m_Flow->addAllEAllAttributes(m_ControlFlow->getEAttributes());
	m_Flow->addAllEAllStructuralFeatures(m_ControlFlow->getEStructuralFeatures());
	m_TrueFlow->addESuperTypes(m_ControlFlow);
	m_TrueFlow->addAllEAllOperations(m_ControlFlow->getEOperations());
	m_TrueFlow->addAllEAllReferences(m_ControlFlow->getEReferences());
	m_TrueFlow->addAllEAllAttributes(m_ControlFlow->getEAttributes());
	m_TrueFlow->addAllEAllStructuralFeatures(m_ControlFlow->getEStructuralFeatures());
	m_FalseFlow->addESuperTypes(m_ControlFlow);
	m_FalseFlow->addAllEAllOperations(m_ControlFlow->getEOperations());
	m_FalseFlow->addAllEAllReferences(m_ControlFlow->getEReferences());
	m_FalseFlow->addAllEAllAttributes(m_ControlFlow->getEAttributes());
	m_FalseFlow->addAllEAllStructuralFeatures(m_ControlFlow->getEStructuralFeatures());
	m_GuardedFlow->addESuperTypes(m_ControlFlow);
	m_GuardedFlow->addAllEAllOperations(m_ControlFlow->getEOperations());
	m_GuardedFlow->addAllEAllReferences(m_ControlFlow->getEReferences());
	m_GuardedFlow->addAllEAllAttributes(m_ControlFlow->getEAttributes());
	m_GuardedFlow->addAllEAllStructuralFeatures(m_ControlFlow->getEStructuralFeatures());
	m_UsesType->addESuperTypes(m_AbstractActionRelationship);
	m_UsesType->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_UsesType->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_UsesType->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_UsesType->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Addresses->addESuperTypes(m_AbstractActionRelationship);
	m_Addresses->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Addresses->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Addresses->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Addresses->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_ActionRelationship->addESuperTypes(m_AbstractActionRelationship);
	m_ActionRelationship->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ActionRelationship->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ActionRelationship->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ActionRelationship->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Throws->addESuperTypes(m_AbstractActionRelationship);
	m_Throws->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Throws->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Throws->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Throws->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_Dispatches->addESuperTypes(m_AbstractActionRelationship);
	m_Dispatches->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_Dispatches->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_Dispatches->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_Dispatches->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_EntryFlow->addESuperTypes(m_AbstractActionRelationship);
	m_EntryFlow->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_EntryFlow->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_EntryFlow->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_EntryFlow->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_BlockUnit->addESuperTypes(m_ActionElement);
	m_BlockUnit->addAllEAllOperations(m_ActionElement->getEOperations());
	m_BlockUnit->addAllEAllReferences(m_ActionElement->getEReferences());
	m_BlockUnit->addAllEAllAttributes(m_ActionElement->getEAttributes());
	m_BlockUnit->addAllEAllStructuralFeatures(m_ActionElement->getEStructuralFeatures());
	m_ExceptionUnit->addESuperTypes(m_BlockUnit);
	m_ExceptionUnit->addAllEAllOperations(m_BlockUnit->getEOperations());
	m_ExceptionUnit->addAllEAllReferences(m_BlockUnit->getEReferences());
	m_ExceptionUnit->addAllEAllAttributes(m_BlockUnit->getEAttributes());
	m_ExceptionUnit->addAllEAllStructuralFeatures(m_BlockUnit->getEStructuralFeatures());
	m_TryUnit->addESuperTypes(m_ExceptionUnit);
	m_TryUnit->addAllEAllOperations(m_ExceptionUnit->getEOperations());
	m_TryUnit->addAllEAllReferences(m_ExceptionUnit->getEReferences());
	m_TryUnit->addAllEAllAttributes(m_ExceptionUnit->getEAttributes());
	m_TryUnit->addAllEAllStructuralFeatures(m_ExceptionUnit->getEStructuralFeatures());
	m_FinallyUnit->addESuperTypes(m_ExceptionUnit);
	m_FinallyUnit->addAllEAllOperations(m_ExceptionUnit->getEOperations());
	m_FinallyUnit->addAllEAllReferences(m_ExceptionUnit->getEReferences());
	m_FinallyUnit->addAllEAllAttributes(m_ExceptionUnit->getEAttributes());
	m_FinallyUnit->addAllEAllStructuralFeatures(m_ExceptionUnit->getEStructuralFeatures());
	m_CatchUnit->addESuperTypes(m_ExceptionUnit);
	m_CatchUnit->addAllEAllOperations(m_ExceptionUnit->getEOperations());
	m_CatchUnit->addAllEAllReferences(m_ExceptionUnit->getEReferences());
	m_CatchUnit->addAllEAllAttributes(m_ExceptionUnit->getEAttributes());
	m_CatchUnit->addAllEAllStructuralFeatures(m_ExceptionUnit->getEStructuralFeatures());
	m_ExitFlow->addESuperTypes(m_AbstractActionRelationship);
	m_ExitFlow->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ExitFlow->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ExitFlow->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ExitFlow->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_ExceptionFlow->addESuperTypes(m_AbstractActionRelationship);
	m_ExceptionFlow->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ExceptionFlow->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ExceptionFlow->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ExceptionFlow->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	
	
	m_ActionElement->addFeatureAccesors(m_ActionElement__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ActionElement_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ActionElement->addFeatureAccesors(m_ActionElement__codeElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ActionElement_ptr >(o)->getCodeElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ActionElement->addFeatureAccesors(m_ActionElement__actionRelation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ActionElement_ptr >(o)->getActionRelation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ControlFlow->addFeatureAccesors(m_ControlFlow__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ControlFlow_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ControlFlow->addFeatureAccesors(m_ControlFlow__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ControlFlow_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Calls->addFeatureAccesors(m_Calls__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Calls_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Calls->addFeatureAccesors(m_Calls__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Calls_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Creates->addFeatureAccesors(m_Creates__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Creates_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Creates->addFeatureAccesors(m_Creates__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Creates_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Reads->addFeatureAccesors(m_Reads__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Reads_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Reads->addFeatureAccesors(m_Reads__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Reads_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Writes->addFeatureAccesors(m_Writes__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Writes_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Writes->addFeatureAccesors(m_Writes__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Writes_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CompliesTo->addFeatureAccesors(m_CompliesTo__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::CompliesTo_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_CompliesTo->addFeatureAccesors(m_CompliesTo__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::CompliesTo_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UsesType->addFeatureAccesors(m_UsesType__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::UsesType_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UsesType->addFeatureAccesors(m_UsesType__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::UsesType_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Addresses->addFeatureAccesors(m_Addresses__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Addresses_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Addresses->addFeatureAccesors(m_Addresses__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Addresses_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ActionRelationship->addFeatureAccesors(m_ActionRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ActionRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ActionRelationship->addFeatureAccesors(m_ActionRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ActionRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Throws->addFeatureAccesors(m_Throws__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Throws_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Throws->addFeatureAccesors(m_Throws__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Throws_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Dispatches->addFeatureAccesors(m_Dispatches__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Dispatches_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Dispatches->addFeatureAccesors(m_Dispatches__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::Dispatches_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EntryFlow->addFeatureAccesors(m_EntryFlow__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::EntryFlow_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EntryFlow->addFeatureAccesors(m_EntryFlow__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::EntryFlow_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ExitFlow->addFeatureAccesors(m_ExitFlow__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ExitFlow_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ExitFlow->addFeatureAccesors(m_ExitFlow__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ExitFlow_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ExceptionFlow->addFeatureAccesors(m_ExceptionFlow__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ExceptionFlow_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ExceptionFlow->addFeatureAccesors(m_ExceptionFlow__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::action::ExceptionFlow_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const ActionPackage_ptr ActionPackage::_instance()
{
	static ActionPackage __instance;
	return &__instance;
}

ecore::EClass_ptr ActionPackage::getActionElement() const
{
	return m_ActionElement;
}
  	
e4c::tag_t ActionPackage::getTag_ActionElement() const
{
	return e4c::tag< ActionElement >::get();
}
 
ecore::EClass_ptr ActionPackage::getAbstractActionRelationship() const
{
	return m_AbstractActionRelationship;
}
  	
e4c::tag_t ActionPackage::getTag_AbstractActionRelationship() const
{
	return e4c::tag< AbstractActionRelationship >::get();
}
 
ecore::EClass_ptr ActionPackage::getControlFlow() const
{
	return m_ControlFlow;
}
  	
e4c::tag_t ActionPackage::getTag_ControlFlow() const
{
	return e4c::tag< ControlFlow >::get();
}
 
ecore::EClass_ptr ActionPackage::getCalls() const
{
	return m_Calls;
}
  	
e4c::tag_t ActionPackage::getTag_Calls() const
{
	return e4c::tag< Calls >::get();
}
 
ecore::EClass_ptr ActionPackage::getCreates() const
{
	return m_Creates;
}
  	
e4c::tag_t ActionPackage::getTag_Creates() const
{
	return e4c::tag< Creates >::get();
}
 
ecore::EClass_ptr ActionPackage::getReads() const
{
	return m_Reads;
}
  	
e4c::tag_t ActionPackage::getTag_Reads() const
{
	return e4c::tag< Reads >::get();
}
 
ecore::EClass_ptr ActionPackage::getWrites() const
{
	return m_Writes;
}
  	
e4c::tag_t ActionPackage::getTag_Writes() const
{
	return e4c::tag< Writes >::get();
}
 
ecore::EClass_ptr ActionPackage::getCompliesTo() const
{
	return m_CompliesTo;
}
  	
e4c::tag_t ActionPackage::getTag_CompliesTo() const
{
	return e4c::tag< CompliesTo >::get();
}
 
ecore::EClass_ptr ActionPackage::getFlow() const
{
	return m_Flow;
}
  	
e4c::tag_t ActionPackage::getTag_Flow() const
{
	return e4c::tag< Flow >::get();
}
 
ecore::EClass_ptr ActionPackage::getTrueFlow() const
{
	return m_TrueFlow;
}
  	
e4c::tag_t ActionPackage::getTag_TrueFlow() const
{
	return e4c::tag< TrueFlow >::get();
}
 
ecore::EClass_ptr ActionPackage::getFalseFlow() const
{
	return m_FalseFlow;
}
  	
e4c::tag_t ActionPackage::getTag_FalseFlow() const
{
	return e4c::tag< FalseFlow >::get();
}
 
ecore::EClass_ptr ActionPackage::getGuardedFlow() const
{
	return m_GuardedFlow;
}
  	
e4c::tag_t ActionPackage::getTag_GuardedFlow() const
{
	return e4c::tag< GuardedFlow >::get();
}
 
ecore::EClass_ptr ActionPackage::getUsesType() const
{
	return m_UsesType;
}
  	
e4c::tag_t ActionPackage::getTag_UsesType() const
{
	return e4c::tag< UsesType >::get();
}
 
ecore::EClass_ptr ActionPackage::getAddresses() const
{
	return m_Addresses;
}
  	
e4c::tag_t ActionPackage::getTag_Addresses() const
{
	return e4c::tag< Addresses >::get();
}
 
ecore::EClass_ptr ActionPackage::getActionRelationship() const
{
	return m_ActionRelationship;
}
  	
e4c::tag_t ActionPackage::getTag_ActionRelationship() const
{
	return e4c::tag< ActionRelationship >::get();
}
 
ecore::EClass_ptr ActionPackage::getThrows() const
{
	return m_Throws;
}
  	
e4c::tag_t ActionPackage::getTag_Throws() const
{
	return e4c::tag< Throws >::get();
}
 
ecore::EClass_ptr ActionPackage::getDispatches() const
{
	return m_Dispatches;
}
  	
e4c::tag_t ActionPackage::getTag_Dispatches() const
{
	return e4c::tag< Dispatches >::get();
}
 
ecore::EClass_ptr ActionPackage::getEntryFlow() const
{
	return m_EntryFlow;
}
  	
e4c::tag_t ActionPackage::getTag_EntryFlow() const
{
	return e4c::tag< EntryFlow >::get();
}
 
ecore::EClass_ptr ActionPackage::getBlockUnit() const
{
	return m_BlockUnit;
}
  	
e4c::tag_t ActionPackage::getTag_BlockUnit() const
{
	return e4c::tag< BlockUnit >::get();
}
 
ecore::EClass_ptr ActionPackage::getExceptionUnit() const
{
	return m_ExceptionUnit;
}
  	
e4c::tag_t ActionPackage::getTag_ExceptionUnit() const
{
	return e4c::tag< ExceptionUnit >::get();
}
 
ecore::EClass_ptr ActionPackage::getTryUnit() const
{
	return m_TryUnit;
}
  	
e4c::tag_t ActionPackage::getTag_TryUnit() const
{
	return e4c::tag< TryUnit >::get();
}
 
ecore::EClass_ptr ActionPackage::getFinallyUnit() const
{
	return m_FinallyUnit;
}
  	
e4c::tag_t ActionPackage::getTag_FinallyUnit() const
{
	return e4c::tag< FinallyUnit >::get();
}
 
ecore::EClass_ptr ActionPackage::getCatchUnit() const
{
	return m_CatchUnit;
}
  	
e4c::tag_t ActionPackage::getTag_CatchUnit() const
{
	return e4c::tag< CatchUnit >::get();
}
 
ecore::EClass_ptr ActionPackage::getExitFlow() const
{
	return m_ExitFlow;
}
  	
e4c::tag_t ActionPackage::getTag_ExitFlow() const
{
	return e4c::tag< ExitFlow >::get();
}
 
ecore::EClass_ptr ActionPackage::getExceptionFlow() const
{
	return m_ExceptionFlow;
}
  	
e4c::tag_t ActionPackage::getTag_ExceptionFlow() const
{
	return e4c::tag< ExceptionFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_ActionElement__kind() const
{
	return e4c::tag< ActionElement__kind_tag >::get();
}

ecore::EAttribute_ptr ActionPackage::getActionElement__kind() const
{
	return m_ActionElement__kind;
}

e4c::tag_t ActionPackage::getTag_ActionElement__codeElement() const
{
	return e4c::tag< ActionElement__codeElement_tag >::get();
}

ecore::EReference_ptr ActionPackage::getActionElement__codeElement() const
{
	return m_ActionElement__codeElement;
}

e4c::tag_t ActionPackage::getTag_ActionElement__actionRelation() const
{
	return e4c::tag< ActionElement__actionRelation_tag >::get();
}

ecore::EReference_ptr ActionPackage::getActionElement__actionRelation() const
{
	return m_ActionElement__actionRelation;
}

e4c::tag_t ActionPackage::getTag_ControlFlow__to() const
{
	return e4c::tag< ControlFlow__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getControlFlow__to() const
{
	return m_ControlFlow__to;
}

e4c::tag_t ActionPackage::getTag_ControlFlow__from() const
{
	return e4c::tag< ControlFlow__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getControlFlow__from() const
{
	return m_ControlFlow__from;
}

e4c::tag_t ActionPackage::getTag_Calls__to() const
{
	return e4c::tag< Calls__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getCalls__to() const
{
	return m_Calls__to;
}

e4c::tag_t ActionPackage::getTag_Calls__from() const
{
	return e4c::tag< Calls__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getCalls__from() const
{
	return m_Calls__from;
}

e4c::tag_t ActionPackage::getTag_Creates__to() const
{
	return e4c::tag< Creates__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getCreates__to() const
{
	return m_Creates__to;
}

e4c::tag_t ActionPackage::getTag_Creates__from() const
{
	return e4c::tag< Creates__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getCreates__from() const
{
	return m_Creates__from;
}

e4c::tag_t ActionPackage::getTag_Reads__to() const
{
	return e4c::tag< Reads__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getReads__to() const
{
	return m_Reads__to;
}

e4c::tag_t ActionPackage::getTag_Reads__from() const
{
	return e4c::tag< Reads__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getReads__from() const
{
	return m_Reads__from;
}

e4c::tag_t ActionPackage::getTag_Writes__to() const
{
	return e4c::tag< Writes__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getWrites__to() const
{
	return m_Writes__to;
}

e4c::tag_t ActionPackage::getTag_Writes__from() const
{
	return e4c::tag< Writes__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getWrites__from() const
{
	return m_Writes__from;
}

e4c::tag_t ActionPackage::getTag_CompliesTo__to() const
{
	return e4c::tag< CompliesTo__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getCompliesTo__to() const
{
	return m_CompliesTo__to;
}

e4c::tag_t ActionPackage::getTag_CompliesTo__from() const
{
	return e4c::tag< CompliesTo__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getCompliesTo__from() const
{
	return m_CompliesTo__from;
}

e4c::tag_t ActionPackage::getTag_UsesType__to() const
{
	return e4c::tag< UsesType__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getUsesType__to() const
{
	return m_UsesType__to;
}

e4c::tag_t ActionPackage::getTag_UsesType__from() const
{
	return e4c::tag< UsesType__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getUsesType__from() const
{
	return m_UsesType__from;
}

e4c::tag_t ActionPackage::getTag_Addresses__to() const
{
	return e4c::tag< Addresses__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getAddresses__to() const
{
	return m_Addresses__to;
}

e4c::tag_t ActionPackage::getTag_Addresses__from() const
{
	return e4c::tag< Addresses__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getAddresses__from() const
{
	return m_Addresses__from;
}

e4c::tag_t ActionPackage::getTag_ActionRelationship__to() const
{
	return e4c::tag< ActionRelationship__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getActionRelationship__to() const
{
	return m_ActionRelationship__to;
}

e4c::tag_t ActionPackage::getTag_ActionRelationship__from() const
{
	return e4c::tag< ActionRelationship__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getActionRelationship__from() const
{
	return m_ActionRelationship__from;
}

e4c::tag_t ActionPackage::getTag_Throws__to() const
{
	return e4c::tag< Throws__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getThrows__to() const
{
	return m_Throws__to;
}

e4c::tag_t ActionPackage::getTag_Throws__from() const
{
	return e4c::tag< Throws__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getThrows__from() const
{
	return m_Throws__from;
}

e4c::tag_t ActionPackage::getTag_Dispatches__to() const
{
	return e4c::tag< Dispatches__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getDispatches__to() const
{
	return m_Dispatches__to;
}

e4c::tag_t ActionPackage::getTag_Dispatches__from() const
{
	return e4c::tag< Dispatches__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getDispatches__from() const
{
	return m_Dispatches__from;
}

e4c::tag_t ActionPackage::getTag_EntryFlow__to() const
{
	return e4c::tag< EntryFlow__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getEntryFlow__to() const
{
	return m_EntryFlow__to;
}

e4c::tag_t ActionPackage::getTag_EntryFlow__from() const
{
	return e4c::tag< EntryFlow__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getEntryFlow__from() const
{
	return m_EntryFlow__from;
}

e4c::tag_t ActionPackage::getTag_ExitFlow__to() const
{
	return e4c::tag< ExitFlow__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getExitFlow__to() const
{
	return m_ExitFlow__to;
}

e4c::tag_t ActionPackage::getTag_ExitFlow__from() const
{
	return e4c::tag< ExitFlow__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getExitFlow__from() const
{
	return m_ExitFlow__from;
}

e4c::tag_t ActionPackage::getTag_ExceptionFlow__to() const
{
	return e4c::tag< ExceptionFlow__to_tag >::get();
}

ecore::EReference_ptr ActionPackage::getExceptionFlow__to() const
{
	return m_ExceptionFlow__to;
}

e4c::tag_t ActionPackage::getTag_ExceptionFlow__from() const
{
	return e4c::tag< ExceptionFlow__from_tag >::get();
}

ecore::EReference_ptr ActionPackage::getExceptionFlow__from() const
{
	return m_ExceptionFlow__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_action()
{
	return ::kdm::action::ActionPackage::_instance();
}
