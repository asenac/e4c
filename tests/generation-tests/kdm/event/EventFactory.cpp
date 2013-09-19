#include "EventFactory.hpp"
#include "EventPackage.hpp"
#include "include.hpp"

using namespace kdm::event;

EventFactory::EventFactory()
{
	m_ePackage = EventPackage::_instance();
	// std::bind(&EventFactory::createEventModel, this);
	// m_ePackage->getTag_EventModel();
	// std::bind(&EventFactory::createEvent, this);
	// m_ePackage->getTag_Event();
	// std::bind(&EventFactory::createEventRelationship, this);
	// m_ePackage->getTag_EventRelationship();
	// std::bind(&EventFactory::createEventResource, this);
	// m_ePackage->getTag_EventResource();
	// std::bind(&EventFactory::createState, this);
	// m_ePackage->getTag_State();
	// std::bind(&EventFactory::createTransition, this);
	// m_ePackage->getTag_Transition();
	// std::bind(&EventFactory::createOnEntry, this);
	// m_ePackage->getTag_OnEntry();
	// std::bind(&EventFactory::createOnExit, this);
	// m_ePackage->getTag_OnExit();
	// std::bind(&EventFactory::createEventAction, this);
	// m_ePackage->getTag_EventAction();
	// std::bind(&EventFactory::createReadsState, this);
	// m_ePackage->getTag_ReadsState();
	// std::bind(&EventFactory::createProducesEvent, this);
	// m_ePackage->getTag_ProducesEvent();
	// std::bind(&EventFactory::createConsumesEvent, this);
	// m_ePackage->getTag_ConsumesEvent();
	// std::bind(&EventFactory::createNextState, this);
	// m_ePackage->getTag_NextState();
	// std::bind(&EventFactory::createInitialState, this);
	// m_ePackage->getTag_InitialState();
	// std::bind(&EventFactory::createEventElement, this);
	// m_ePackage->getTag_EventElement();
	// std::bind(&EventFactory::createHasState, this);
	// m_ePackage->getTag_HasState();
}

const EventFactory_ptr EventFactory::_instance()
{
	static EventFactory __instance;
	return &__instance;
}

EventModel_ptr EventFactory::createEventModel() const
{
	return new EventModel();
}

Event_ptr EventFactory::createEvent() const
{
	return new Event();
}

EventRelationship_ptr EventFactory::createEventRelationship() const
{
	return new EventRelationship();
}

EventResource_ptr EventFactory::createEventResource() const
{
	return new EventResource();
}

State_ptr EventFactory::createState() const
{
	return new State();
}

Transition_ptr EventFactory::createTransition() const
{
	return new Transition();
}

OnEntry_ptr EventFactory::createOnEntry() const
{
	return new OnEntry();
}

OnExit_ptr EventFactory::createOnExit() const
{
	return new OnExit();
}

EventAction_ptr EventFactory::createEventAction() const
{
	return new EventAction();
}

ReadsState_ptr EventFactory::createReadsState() const
{
	return new ReadsState();
}

ProducesEvent_ptr EventFactory::createProducesEvent() const
{
	return new ProducesEvent();
}

ConsumesEvent_ptr EventFactory::createConsumesEvent() const
{
	return new ConsumesEvent();
}

NextState_ptr EventFactory::createNextState() const
{
	return new NextState();
}

InitialState_ptr EventFactory::createInitialState() const
{
	return new InitialState();
}

EventElement_ptr EventFactory::createEventElement() const
{
	return new EventElement();
}

HasState_ptr EventFactory::createHasState() const
{
	return new HasState();
}

