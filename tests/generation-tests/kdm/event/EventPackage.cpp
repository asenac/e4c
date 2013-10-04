#include "EventPackage.hpp"
#include "EventFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::event;

EventPackage::EventPackage()
{
	m_eFactoryInstance = EventFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_EventModel = ecoreFactory->createEClass();
	m_EventModel->setName("EventModel");
	addEClassifiers(m_EventModel);
	m_AbstractEventElement = ecoreFactory->createEClass();
	m_AbstractEventElement->setName("AbstractEventElement");
	addEClassifiers(m_AbstractEventElement);
	m_Event = ecoreFactory->createEClass();
	m_Event->setName("Event");
	addEClassifiers(m_Event);
	m_AbstractEventRelationship = ecoreFactory->createEClass();
	m_AbstractEventRelationship->setName("AbstractEventRelationship");
	addEClassifiers(m_AbstractEventRelationship);
	m_EventRelationship = ecoreFactory->createEClass();
	m_EventRelationship->setName("EventRelationship");
	addEClassifiers(m_EventRelationship);
	m_EventResource = ecoreFactory->createEClass();
	m_EventResource->setName("EventResource");
	addEClassifiers(m_EventResource);
	m_State = ecoreFactory->createEClass();
	m_State->setName("State");
	addEClassifiers(m_State);
	m_Transition = ecoreFactory->createEClass();
	m_Transition->setName("Transition");
	addEClassifiers(m_Transition);
	m_OnEntry = ecoreFactory->createEClass();
	m_OnEntry->setName("OnEntry");
	addEClassifiers(m_OnEntry);
	m_OnExit = ecoreFactory->createEClass();
	m_OnExit->setName("OnExit");
	addEClassifiers(m_OnExit);
	m_EventAction = ecoreFactory->createEClass();
	m_EventAction->setName("EventAction");
	addEClassifiers(m_EventAction);
	m_ReadsState = ecoreFactory->createEClass();
	m_ReadsState->setName("ReadsState");
	addEClassifiers(m_ReadsState);
	m_ProducesEvent = ecoreFactory->createEClass();
	m_ProducesEvent->setName("ProducesEvent");
	addEClassifiers(m_ProducesEvent);
	m_ConsumesEvent = ecoreFactory->createEClass();
	m_ConsumesEvent->setName("ConsumesEvent");
	addEClassifiers(m_ConsumesEvent);
	m_NextState = ecoreFactory->createEClass();
	m_NextState->setName("NextState");
	addEClassifiers(m_NextState);
	m_InitialState = ecoreFactory->createEClass();
	m_InitialState->setName("InitialState");
	addEClassifiers(m_InitialState);
	m_EventElement = ecoreFactory->createEClass();
	m_EventElement->setName("EventElement");
	addEClassifiers(m_EventElement);
	m_HasState = ecoreFactory->createEClass();
	m_HasState->setName("HasState");
	addEClassifiers(m_HasState);

	
    {
        m_EventModel__eventElement = ecoreFactory->createEReference();
        m_EventModel__eventElement->setName("eventElement");
        m_EventModel->addEStructuralFeatures(m_EventModel__eventElement);
        m_EventModel->addEAllStructuralFeatures(m_EventModel__eventElement);
        m_EventModel->addEReferences(m_EventModel__eventElement);
        m_EventModel->addEAllReferences(m_EventModel__eventElement);
    }
    {
        m_AbstractEventElement__source = ecoreFactory->createEReference();
        m_AbstractEventElement__source->setName("source");
        m_AbstractEventElement->addEStructuralFeatures(m_AbstractEventElement__source);
        m_AbstractEventElement->addEAllStructuralFeatures(m_AbstractEventElement__source);
        m_AbstractEventElement->addEReferences(m_AbstractEventElement__source);
        m_AbstractEventElement->addEAllReferences(m_AbstractEventElement__source);
    }
    {
        m_AbstractEventElement__eventRelation = ecoreFactory->createEReference();
        m_AbstractEventElement__eventRelation->setName("eventRelation");
        m_AbstractEventElement->addEStructuralFeatures(m_AbstractEventElement__eventRelation);
        m_AbstractEventElement->addEAllStructuralFeatures(m_AbstractEventElement__eventRelation);
        m_AbstractEventElement->addEReferences(m_AbstractEventElement__eventRelation);
        m_AbstractEventElement->addEAllReferences(m_AbstractEventElement__eventRelation);
    }
    {
        m_AbstractEventElement__abstraction = ecoreFactory->createEReference();
        m_AbstractEventElement__abstraction->setName("abstraction");
        m_AbstractEventElement->addEStructuralFeatures(m_AbstractEventElement__abstraction);
        m_AbstractEventElement->addEAllStructuralFeatures(m_AbstractEventElement__abstraction);
        m_AbstractEventElement->addEReferences(m_AbstractEventElement__abstraction);
        m_AbstractEventElement->addEAllReferences(m_AbstractEventElement__abstraction);
    }
    {
        m_AbstractEventElement__implementation = ecoreFactory->createEReference();
        m_AbstractEventElement__implementation->setName("implementation");
        m_AbstractEventElement->addEStructuralFeatures(m_AbstractEventElement__implementation);
        m_AbstractEventElement->addEAllStructuralFeatures(m_AbstractEventElement__implementation);
        m_AbstractEventElement->addEReferences(m_AbstractEventElement__implementation);
        m_AbstractEventElement->addEAllReferences(m_AbstractEventElement__implementation);
    }
    {
        m_Event__kind = ecoreFactory->createEAttribute();
        m_Event__kind->setName("kind");
        m_Event->addEStructuralFeatures(m_Event__kind);
        m_Event->addEAllStructuralFeatures(m_Event__kind);
        m_Event->addEAttributes(m_Event__kind);
        m_Event->addEAllAttributes(m_Event__kind);
    }
    {
        m_EventRelationship__to = ecoreFactory->createEReference();
        m_EventRelationship__to->setName("to");
        m_EventRelationship->addEStructuralFeatures(m_EventRelationship__to);
        m_EventRelationship->addEAllStructuralFeatures(m_EventRelationship__to);
        m_EventRelationship->addEReferences(m_EventRelationship__to);
        m_EventRelationship->addEAllReferences(m_EventRelationship__to);
    }
    {
        m_EventRelationship__from = ecoreFactory->createEReference();
        m_EventRelationship__from->setName("from");
        m_EventRelationship->addEStructuralFeatures(m_EventRelationship__from);
        m_EventRelationship->addEAllStructuralFeatures(m_EventRelationship__from);
        m_EventRelationship->addEReferences(m_EventRelationship__from);
        m_EventRelationship->addEAllReferences(m_EventRelationship__from);
    }
    {
        m_EventResource__eventElement = ecoreFactory->createEReference();
        m_EventResource__eventElement->setName("eventElement");
        m_EventResource->addEStructuralFeatures(m_EventResource__eventElement);
        m_EventResource->addEAllStructuralFeatures(m_EventResource__eventElement);
        m_EventResource->addEReferences(m_EventResource__eventElement);
        m_EventResource->addEAllReferences(m_EventResource__eventElement);
    }
    {
        m_EventAction__kind = ecoreFactory->createEAttribute();
        m_EventAction__kind->setName("kind");
        m_EventAction->addEStructuralFeatures(m_EventAction__kind);
        m_EventAction->addEAllStructuralFeatures(m_EventAction__kind);
        m_EventAction->addEAttributes(m_EventAction__kind);
        m_EventAction->addEAllAttributes(m_EventAction__kind);
    }
    {
        m_EventAction__eventElement = ecoreFactory->createEReference();
        m_EventAction__eventElement->setName("eventElement");
        m_EventAction->addEStructuralFeatures(m_EventAction__eventElement);
        m_EventAction->addEAllStructuralFeatures(m_EventAction__eventElement);
        m_EventAction->addEReferences(m_EventAction__eventElement);
        m_EventAction->addEAllReferences(m_EventAction__eventElement);
    }
    {
        m_ReadsState__to = ecoreFactory->createEReference();
        m_ReadsState__to->setName("to");
        m_ReadsState->addEStructuralFeatures(m_ReadsState__to);
        m_ReadsState->addEAllStructuralFeatures(m_ReadsState__to);
        m_ReadsState->addEReferences(m_ReadsState__to);
        m_ReadsState->addEAllReferences(m_ReadsState__to);
    }
    {
        m_ReadsState__from = ecoreFactory->createEReference();
        m_ReadsState__from->setName("from");
        m_ReadsState->addEStructuralFeatures(m_ReadsState__from);
        m_ReadsState->addEAllStructuralFeatures(m_ReadsState__from);
        m_ReadsState->addEReferences(m_ReadsState__from);
        m_ReadsState->addEAllReferences(m_ReadsState__from);
    }
    {
        m_ProducesEvent__to = ecoreFactory->createEReference();
        m_ProducesEvent__to->setName("to");
        m_ProducesEvent->addEStructuralFeatures(m_ProducesEvent__to);
        m_ProducesEvent->addEAllStructuralFeatures(m_ProducesEvent__to);
        m_ProducesEvent->addEReferences(m_ProducesEvent__to);
        m_ProducesEvent->addEAllReferences(m_ProducesEvent__to);
    }
    {
        m_ProducesEvent__from = ecoreFactory->createEReference();
        m_ProducesEvent__from->setName("from");
        m_ProducesEvent->addEStructuralFeatures(m_ProducesEvent__from);
        m_ProducesEvent->addEAllStructuralFeatures(m_ProducesEvent__from);
        m_ProducesEvent->addEReferences(m_ProducesEvent__from);
        m_ProducesEvent->addEAllReferences(m_ProducesEvent__from);
    }
    {
        m_ConsumesEvent__to = ecoreFactory->createEReference();
        m_ConsumesEvent__to->setName("to");
        m_ConsumesEvent->addEStructuralFeatures(m_ConsumesEvent__to);
        m_ConsumesEvent->addEAllStructuralFeatures(m_ConsumesEvent__to);
        m_ConsumesEvent->addEReferences(m_ConsumesEvent__to);
        m_ConsumesEvent->addEAllReferences(m_ConsumesEvent__to);
    }
    {
        m_ConsumesEvent__from = ecoreFactory->createEReference();
        m_ConsumesEvent__from->setName("from");
        m_ConsumesEvent->addEStructuralFeatures(m_ConsumesEvent__from);
        m_ConsumesEvent->addEAllStructuralFeatures(m_ConsumesEvent__from);
        m_ConsumesEvent->addEReferences(m_ConsumesEvent__from);
        m_ConsumesEvent->addEAllReferences(m_ConsumesEvent__from);
    }
    {
        m_NextState__to = ecoreFactory->createEReference();
        m_NextState__to->setName("to");
        m_NextState->addEStructuralFeatures(m_NextState__to);
        m_NextState->addEAllStructuralFeatures(m_NextState__to);
        m_NextState->addEReferences(m_NextState__to);
        m_NextState->addEAllReferences(m_NextState__to);
    }
    {
        m_NextState__from = ecoreFactory->createEReference();
        m_NextState__from->setName("from");
        m_NextState->addEStructuralFeatures(m_NextState__from);
        m_NextState->addEAllStructuralFeatures(m_NextState__from);
        m_NextState->addEReferences(m_NextState__from);
        m_NextState->addEAllReferences(m_NextState__from);
    }
    {
        m_HasState__to = ecoreFactory->createEReference();
        m_HasState__to->setName("to");
        m_HasState->addEStructuralFeatures(m_HasState__to);
        m_HasState->addEAllStructuralFeatures(m_HasState__to);
        m_HasState->addEReferences(m_HasState__to);
        m_HasState->addEAllReferences(m_HasState__to);
    }
    {
        m_HasState__from = ecoreFactory->createEReference();
        m_HasState__from->setName("from");
        m_HasState->addEStructuralFeatures(m_HasState__from);
        m_HasState->addEAllStructuralFeatures(m_HasState__from);
        m_HasState->addEReferences(m_HasState__from);
        m_HasState->addEAllReferences(m_HasState__from);
    }
	
	m_EventModel->addESuperTypes(m_KDMModel);
	m_EventModel->addAllEAllOperations(m_KDMModel->getEOperations());
	m_EventModel->addAllEAllReferences(m_KDMModel->getEReferences());
	m_EventModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
	m_EventModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
	m_AbstractEventElement->addESuperTypes(m_KDMEntity);
	m_AbstractEventElement->addAllEAllOperations(m_KDMEntity->getEOperations());
	m_AbstractEventElement->addAllEAllReferences(m_KDMEntity->getEReferences());
	m_AbstractEventElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
	m_AbstractEventElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
	m_Event->addESuperTypes(m_AbstractEventElement);
	m_Event->addAllEAllOperations(m_AbstractEventElement->getEOperations());
	m_Event->addAllEAllReferences(m_AbstractEventElement->getEReferences());
	m_Event->addAllEAllAttributes(m_AbstractEventElement->getEAttributes());
	m_Event->addAllEAllStructuralFeatures(m_AbstractEventElement->getEStructuralFeatures());
	m_AbstractEventRelationship->addESuperTypes(m_KDMRelationship);
	m_AbstractEventRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
	m_AbstractEventRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
	m_AbstractEventRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
	m_AbstractEventRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
	m_EventRelationship->addESuperTypes(m_AbstractEventRelationship);
	m_EventRelationship->addAllEAllOperations(m_AbstractEventRelationship->getEOperations());
	m_EventRelationship->addAllEAllReferences(m_AbstractEventRelationship->getEReferences());
	m_EventRelationship->addAllEAllAttributes(m_AbstractEventRelationship->getEAttributes());
	m_EventRelationship->addAllEAllStructuralFeatures(m_AbstractEventRelationship->getEStructuralFeatures());
	m_EventResource->addESuperTypes(m_AbstractEventElement);
	m_EventResource->addAllEAllOperations(m_AbstractEventElement->getEOperations());
	m_EventResource->addAllEAllReferences(m_AbstractEventElement->getEReferences());
	m_EventResource->addAllEAllAttributes(m_AbstractEventElement->getEAttributes());
	m_EventResource->addAllEAllStructuralFeatures(m_AbstractEventElement->getEStructuralFeatures());
	m_State->addESuperTypes(m_EventResource);
	m_State->addAllEAllOperations(m_EventResource->getEOperations());
	m_State->addAllEAllReferences(m_EventResource->getEReferences());
	m_State->addAllEAllAttributes(m_EventResource->getEAttributes());
	m_State->addAllEAllStructuralFeatures(m_EventResource->getEStructuralFeatures());
	m_Transition->addESuperTypes(m_EventResource);
	m_Transition->addAllEAllOperations(m_EventResource->getEOperations());
	m_Transition->addAllEAllReferences(m_EventResource->getEReferences());
	m_Transition->addAllEAllAttributes(m_EventResource->getEAttributes());
	m_Transition->addAllEAllStructuralFeatures(m_EventResource->getEStructuralFeatures());
	m_OnEntry->addESuperTypes(m_Transition);
	m_OnEntry->addAllEAllOperations(m_Transition->getEOperations());
	m_OnEntry->addAllEAllReferences(m_Transition->getEReferences());
	m_OnEntry->addAllEAllAttributes(m_Transition->getEAttributes());
	m_OnEntry->addAllEAllStructuralFeatures(m_Transition->getEStructuralFeatures());
	m_OnExit->addESuperTypes(m_Transition);
	m_OnExit->addAllEAllOperations(m_Transition->getEOperations());
	m_OnExit->addAllEAllReferences(m_Transition->getEReferences());
	m_OnExit->addAllEAllAttributes(m_Transition->getEAttributes());
	m_OnExit->addAllEAllStructuralFeatures(m_Transition->getEStructuralFeatures());
	m_EventAction->addESuperTypes(m_AbstractEventElement);
	m_EventAction->addAllEAllOperations(m_AbstractEventElement->getEOperations());
	m_EventAction->addAllEAllReferences(m_AbstractEventElement->getEReferences());
	m_EventAction->addAllEAllAttributes(m_AbstractEventElement->getEAttributes());
	m_EventAction->addAllEAllStructuralFeatures(m_AbstractEventElement->getEStructuralFeatures());
	m_ReadsState->addESuperTypes(m_AbstractActionRelationship);
	m_ReadsState->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ReadsState->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ReadsState->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ReadsState->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_ProducesEvent->addESuperTypes(m_AbstractActionRelationship);
	m_ProducesEvent->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ProducesEvent->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ProducesEvent->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ProducesEvent->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_ConsumesEvent->addESuperTypes(m_AbstractEventRelationship);
	m_ConsumesEvent->addAllEAllOperations(m_AbstractEventRelationship->getEOperations());
	m_ConsumesEvent->addAllEAllReferences(m_AbstractEventRelationship->getEReferences());
	m_ConsumesEvent->addAllEAllAttributes(m_AbstractEventRelationship->getEAttributes());
	m_ConsumesEvent->addAllEAllStructuralFeatures(m_AbstractEventRelationship->getEStructuralFeatures());
	m_NextState->addESuperTypes(m_AbstractEventRelationship);
	m_NextState->addAllEAllOperations(m_AbstractEventRelationship->getEOperations());
	m_NextState->addAllEAllReferences(m_AbstractEventRelationship->getEReferences());
	m_NextState->addAllEAllAttributes(m_AbstractEventRelationship->getEAttributes());
	m_NextState->addAllEAllStructuralFeatures(m_AbstractEventRelationship->getEStructuralFeatures());
	m_InitialState->addESuperTypes(m_State);
	m_InitialState->addAllEAllOperations(m_State->getEOperations());
	m_InitialState->addAllEAllReferences(m_State->getEReferences());
	m_InitialState->addAllEAllAttributes(m_State->getEAttributes());
	m_InitialState->addAllEAllStructuralFeatures(m_State->getEStructuralFeatures());
	m_EventElement->addESuperTypes(m_AbstractEventElement);
	m_EventElement->addAllEAllOperations(m_AbstractEventElement->getEOperations());
	m_EventElement->addAllEAllReferences(m_AbstractEventElement->getEReferences());
	m_EventElement->addAllEAllAttributes(m_AbstractEventElement->getEAttributes());
	m_EventElement->addAllEAllStructuralFeatures(m_AbstractEventElement->getEStructuralFeatures());
	m_HasState->addESuperTypes(m_AbstractActionRelationship);
	m_HasState->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_HasState->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_HasState->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_HasState->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	
	
	m_EventModel->addFeatureAccesors(m_EventModel__eventElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::EventModel_ptr >(o)->getEventElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractEventElement->addFeatureAccesors(m_AbstractEventElement__source, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::AbstractEventElement_ptr >(o)->getSource()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractEventElement->addFeatureAccesors(m_AbstractEventElement__eventRelation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::AbstractEventElement_ptr >(o)->getEventRelation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractEventElement->addFeatureAccesors(m_AbstractEventElement__abstraction, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::AbstractEventElement_ptr >(o)->getAbstraction()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractEventElement->addFeatureAccesors(m_AbstractEventElement__implementation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::AbstractEventElement_ptr >(o)->getImplementation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Event->addFeatureAccesors(m_Event__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::Event_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EventRelationship->addFeatureAccesors(m_EventRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::EventRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EventRelationship->addFeatureAccesors(m_EventRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::EventRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EventResource->addFeatureAccesors(m_EventResource__eventElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::EventResource_ptr >(o)->getEventElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EventAction->addFeatureAccesors(m_EventAction__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::EventAction_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EventAction->addFeatureAccesors(m_EventAction__eventElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::EventAction_ptr >(o)->getEventElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ReadsState->addFeatureAccesors(m_ReadsState__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::ReadsState_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ReadsState->addFeatureAccesors(m_ReadsState__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::ReadsState_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ProducesEvent->addFeatureAccesors(m_ProducesEvent__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::ProducesEvent_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ProducesEvent->addFeatureAccesors(m_ProducesEvent__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::ProducesEvent_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ConsumesEvent->addFeatureAccesors(m_ConsumesEvent__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::ConsumesEvent_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ConsumesEvent->addFeatureAccesors(m_ConsumesEvent__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::ConsumesEvent_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NextState->addFeatureAccesors(m_NextState__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::NextState_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NextState->addFeatureAccesors(m_NextState__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::NextState_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_HasState->addFeatureAccesors(m_HasState__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::HasState_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_HasState->addFeatureAccesors(m_HasState__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::event::HasState_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const EventPackage_ptr EventPackage::_instance()
{
	static EventPackage __instance;
	return &__instance;
}

ecore::EClass_ptr EventPackage::getEventModel() const
{
	return m_EventModel;
}
  	
e4c::tag_t EventPackage::getTag_EventModel() const
{
	return e4c::tag< EventModel >::get();
}
 
ecore::EClass_ptr EventPackage::getAbstractEventElement() const
{
	return m_AbstractEventElement;
}
  	
e4c::tag_t EventPackage::getTag_AbstractEventElement() const
{
	return e4c::tag< AbstractEventElement >::get();
}
 
ecore::EClass_ptr EventPackage::getEvent() const
{
	return m_Event;
}
  	
e4c::tag_t EventPackage::getTag_Event() const
{
	return e4c::tag< Event >::get();
}
 
ecore::EClass_ptr EventPackage::getAbstractEventRelationship() const
{
	return m_AbstractEventRelationship;
}
  	
e4c::tag_t EventPackage::getTag_AbstractEventRelationship() const
{
	return e4c::tag< AbstractEventRelationship >::get();
}
 
ecore::EClass_ptr EventPackage::getEventRelationship() const
{
	return m_EventRelationship;
}
  	
e4c::tag_t EventPackage::getTag_EventRelationship() const
{
	return e4c::tag< EventRelationship >::get();
}
 
ecore::EClass_ptr EventPackage::getEventResource() const
{
	return m_EventResource;
}
  	
e4c::tag_t EventPackage::getTag_EventResource() const
{
	return e4c::tag< EventResource >::get();
}
 
ecore::EClass_ptr EventPackage::getState() const
{
	return m_State;
}
  	
e4c::tag_t EventPackage::getTag_State() const
{
	return e4c::tag< State >::get();
}
 
ecore::EClass_ptr EventPackage::getTransition() const
{
	return m_Transition;
}
  	
e4c::tag_t EventPackage::getTag_Transition() const
{
	return e4c::tag< Transition >::get();
}
 
ecore::EClass_ptr EventPackage::getOnEntry() const
{
	return m_OnEntry;
}
  	
e4c::tag_t EventPackage::getTag_OnEntry() const
{
	return e4c::tag< OnEntry >::get();
}
 
ecore::EClass_ptr EventPackage::getOnExit() const
{
	return m_OnExit;
}
  	
e4c::tag_t EventPackage::getTag_OnExit() const
{
	return e4c::tag< OnExit >::get();
}
 
ecore::EClass_ptr EventPackage::getEventAction() const
{
	return m_EventAction;
}
  	
e4c::tag_t EventPackage::getTag_EventAction() const
{
	return e4c::tag< EventAction >::get();
}
 
ecore::EClass_ptr EventPackage::getReadsState() const
{
	return m_ReadsState;
}
  	
e4c::tag_t EventPackage::getTag_ReadsState() const
{
	return e4c::tag< ReadsState >::get();
}
 
ecore::EClass_ptr EventPackage::getProducesEvent() const
{
	return m_ProducesEvent;
}
  	
e4c::tag_t EventPackage::getTag_ProducesEvent() const
{
	return e4c::tag< ProducesEvent >::get();
}
 
ecore::EClass_ptr EventPackage::getConsumesEvent() const
{
	return m_ConsumesEvent;
}
  	
e4c::tag_t EventPackage::getTag_ConsumesEvent() const
{
	return e4c::tag< ConsumesEvent >::get();
}
 
ecore::EClass_ptr EventPackage::getNextState() const
{
	return m_NextState;
}
  	
e4c::tag_t EventPackage::getTag_NextState() const
{
	return e4c::tag< NextState >::get();
}
 
ecore::EClass_ptr EventPackage::getInitialState() const
{
	return m_InitialState;
}
  	
e4c::tag_t EventPackage::getTag_InitialState() const
{
	return e4c::tag< InitialState >::get();
}
 
ecore::EClass_ptr EventPackage::getEventElement() const
{
	return m_EventElement;
}
  	
e4c::tag_t EventPackage::getTag_EventElement() const
{
	return e4c::tag< EventElement >::get();
}
 
ecore::EClass_ptr EventPackage::getHasState() const
{
	return m_HasState;
}
  	
e4c::tag_t EventPackage::getTag_HasState() const
{
	return e4c::tag< HasState >::get();
}
 
e4c::tag_t EventPackage::getTag_EventModel__eventElement() const
{
	return e4c::tag< EventModel__eventElement_tag >::get();
}

ecore::EReference_ptr EventPackage::getEventModel__eventElement() const
{
	return m_EventModel__eventElement;
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__source() const
{
	return e4c::tag< AbstractEventElement__source_tag >::get();
}

ecore::EReference_ptr EventPackage::getAbstractEventElement__source() const
{
	return m_AbstractEventElement__source;
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__eventRelation() const
{
	return e4c::tag< AbstractEventElement__eventRelation_tag >::get();
}

ecore::EReference_ptr EventPackage::getAbstractEventElement__eventRelation() const
{
	return m_AbstractEventElement__eventRelation;
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__abstraction() const
{
	return e4c::tag< AbstractEventElement__abstraction_tag >::get();
}

ecore::EReference_ptr EventPackage::getAbstractEventElement__abstraction() const
{
	return m_AbstractEventElement__abstraction;
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__implementation() const
{
	return e4c::tag< AbstractEventElement__implementation_tag >::get();
}

ecore::EReference_ptr EventPackage::getAbstractEventElement__implementation() const
{
	return m_AbstractEventElement__implementation;
}

e4c::tag_t EventPackage::getTag_Event__kind() const
{
	return e4c::tag< Event__kind_tag >::get();
}

ecore::EAttribute_ptr EventPackage::getEvent__kind() const
{
	return m_Event__kind;
}

e4c::tag_t EventPackage::getTag_EventRelationship__to() const
{
	return e4c::tag< EventRelationship__to_tag >::get();
}

ecore::EReference_ptr EventPackage::getEventRelationship__to() const
{
	return m_EventRelationship__to;
}

e4c::tag_t EventPackage::getTag_EventRelationship__from() const
{
	return e4c::tag< EventRelationship__from_tag >::get();
}

ecore::EReference_ptr EventPackage::getEventRelationship__from() const
{
	return m_EventRelationship__from;
}

e4c::tag_t EventPackage::getTag_EventResource__eventElement() const
{
	return e4c::tag< EventResource__eventElement_tag >::get();
}

ecore::EReference_ptr EventPackage::getEventResource__eventElement() const
{
	return m_EventResource__eventElement;
}

e4c::tag_t EventPackage::getTag_EventAction__kind() const
{
	return e4c::tag< EventAction__kind_tag >::get();
}

ecore::EAttribute_ptr EventPackage::getEventAction__kind() const
{
	return m_EventAction__kind;
}

e4c::tag_t EventPackage::getTag_EventAction__eventElement() const
{
	return e4c::tag< EventAction__eventElement_tag >::get();
}

ecore::EReference_ptr EventPackage::getEventAction__eventElement() const
{
	return m_EventAction__eventElement;
}

e4c::tag_t EventPackage::getTag_ReadsState__to() const
{
	return e4c::tag< ReadsState__to_tag >::get();
}

ecore::EReference_ptr EventPackage::getReadsState__to() const
{
	return m_ReadsState__to;
}

e4c::tag_t EventPackage::getTag_ReadsState__from() const
{
	return e4c::tag< ReadsState__from_tag >::get();
}

ecore::EReference_ptr EventPackage::getReadsState__from() const
{
	return m_ReadsState__from;
}

e4c::tag_t EventPackage::getTag_ProducesEvent__to() const
{
	return e4c::tag< ProducesEvent__to_tag >::get();
}

ecore::EReference_ptr EventPackage::getProducesEvent__to() const
{
	return m_ProducesEvent__to;
}

e4c::tag_t EventPackage::getTag_ProducesEvent__from() const
{
	return e4c::tag< ProducesEvent__from_tag >::get();
}

ecore::EReference_ptr EventPackage::getProducesEvent__from() const
{
	return m_ProducesEvent__from;
}

e4c::tag_t EventPackage::getTag_ConsumesEvent__to() const
{
	return e4c::tag< ConsumesEvent__to_tag >::get();
}

ecore::EReference_ptr EventPackage::getConsumesEvent__to() const
{
	return m_ConsumesEvent__to;
}

e4c::tag_t EventPackage::getTag_ConsumesEvent__from() const
{
	return e4c::tag< ConsumesEvent__from_tag >::get();
}

ecore::EReference_ptr EventPackage::getConsumesEvent__from() const
{
	return m_ConsumesEvent__from;
}

e4c::tag_t EventPackage::getTag_NextState__to() const
{
	return e4c::tag< NextState__to_tag >::get();
}

ecore::EReference_ptr EventPackage::getNextState__to() const
{
	return m_NextState__to;
}

e4c::tag_t EventPackage::getTag_NextState__from() const
{
	return e4c::tag< NextState__from_tag >::get();
}

ecore::EReference_ptr EventPackage::getNextState__from() const
{
	return m_NextState__from;
}

e4c::tag_t EventPackage::getTag_HasState__to() const
{
	return e4c::tag< HasState__to_tag >::get();
}

ecore::EReference_ptr EventPackage::getHasState__to() const
{
	return m_HasState__to;
}

e4c::tag_t EventPackage::getTag_HasState__from() const
{
	return e4c::tag< HasState__from_tag >::get();
}

ecore::EReference_ptr EventPackage::getHasState__from() const
{
	return m_HasState__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_event()
{
	return ::kdm::event::EventPackage::_instance();
}
