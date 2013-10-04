#include "ActionFactory.hpp"
#include "ActionPackage.hpp"
#include "include.hpp"

using namespace kdm::action;

ActionFactory::ActionFactory()
{
	// m_ePackage = ActionPackage::_instance();
	// std::bind(&ActionFactory::createActionElement, this);
	// m_ePackage->getTag_ActionElement();
	// std::bind(&ActionFactory::createControlFlow, this);
	// m_ePackage->getTag_ControlFlow();
	// std::bind(&ActionFactory::createCalls, this);
	// m_ePackage->getTag_Calls();
	// std::bind(&ActionFactory::createCreates, this);
	// m_ePackage->getTag_Creates();
	// std::bind(&ActionFactory::createReads, this);
	// m_ePackage->getTag_Reads();
	// std::bind(&ActionFactory::createWrites, this);
	// m_ePackage->getTag_Writes();
	// std::bind(&ActionFactory::createCompliesTo, this);
	// m_ePackage->getTag_CompliesTo();
	// std::bind(&ActionFactory::createFlow, this);
	// m_ePackage->getTag_Flow();
	// std::bind(&ActionFactory::createTrueFlow, this);
	// m_ePackage->getTag_TrueFlow();
	// std::bind(&ActionFactory::createFalseFlow, this);
	// m_ePackage->getTag_FalseFlow();
	// std::bind(&ActionFactory::createGuardedFlow, this);
	// m_ePackage->getTag_GuardedFlow();
	// std::bind(&ActionFactory::createUsesType, this);
	// m_ePackage->getTag_UsesType();
	// std::bind(&ActionFactory::createAddresses, this);
	// m_ePackage->getTag_Addresses();
	// std::bind(&ActionFactory::createActionRelationship, this);
	// m_ePackage->getTag_ActionRelationship();
	// std::bind(&ActionFactory::createThrows, this);
	// m_ePackage->getTag_Throws();
	// std::bind(&ActionFactory::createDispatches, this);
	// m_ePackage->getTag_Dispatches();
	// std::bind(&ActionFactory::createEntryFlow, this);
	// m_ePackage->getTag_EntryFlow();
	// std::bind(&ActionFactory::createBlockUnit, this);
	// m_ePackage->getTag_BlockUnit();
	// std::bind(&ActionFactory::createExceptionUnit, this);
	// m_ePackage->getTag_ExceptionUnit();
	// std::bind(&ActionFactory::createTryUnit, this);
	// m_ePackage->getTag_TryUnit();
	// std::bind(&ActionFactory::createFinallyUnit, this);
	// m_ePackage->getTag_FinallyUnit();
	// std::bind(&ActionFactory::createCatchUnit, this);
	// m_ePackage->getTag_CatchUnit();
	// std::bind(&ActionFactory::createExitFlow, this);
	// m_ePackage->getTag_ExitFlow();
	// std::bind(&ActionFactory::createExceptionFlow, this);
	// m_ePackage->getTag_ExceptionFlow();
}

const ActionFactory_ptr ActionFactory::_instance()
{
	static ActionFactory __instance;
	return &__instance;
}

ActionElement_ptr ActionFactory::createActionElement() const
{
	return new ActionElement();
}

ControlFlow_ptr ActionFactory::createControlFlow() const
{
	return new ControlFlow();
}

Calls_ptr ActionFactory::createCalls() const
{
	return new Calls();
}

Creates_ptr ActionFactory::createCreates() const
{
	return new Creates();
}

Reads_ptr ActionFactory::createReads() const
{
	return new Reads();
}

Writes_ptr ActionFactory::createWrites() const
{
	return new Writes();
}

CompliesTo_ptr ActionFactory::createCompliesTo() const
{
	return new CompliesTo();
}

Flow_ptr ActionFactory::createFlow() const
{
	return new Flow();
}

TrueFlow_ptr ActionFactory::createTrueFlow() const
{
	return new TrueFlow();
}

FalseFlow_ptr ActionFactory::createFalseFlow() const
{
	return new FalseFlow();
}

GuardedFlow_ptr ActionFactory::createGuardedFlow() const
{
	return new GuardedFlow();
}

UsesType_ptr ActionFactory::createUsesType() const
{
	return new UsesType();
}

Addresses_ptr ActionFactory::createAddresses() const
{
	return new Addresses();
}

ActionRelationship_ptr ActionFactory::createActionRelationship() const
{
	return new ActionRelationship();
}

Throws_ptr ActionFactory::createThrows() const
{
	return new Throws();
}

Dispatches_ptr ActionFactory::createDispatches() const
{
	return new Dispatches();
}

EntryFlow_ptr ActionFactory::createEntryFlow() const
{
	return new EntryFlow();
}

BlockUnit_ptr ActionFactory::createBlockUnit() const
{
	return new BlockUnit();
}

ExceptionUnit_ptr ActionFactory::createExceptionUnit() const
{
	return new ExceptionUnit();
}

TryUnit_ptr ActionFactory::createTryUnit() const
{
	return new TryUnit();
}

FinallyUnit_ptr ActionFactory::createFinallyUnit() const
{
	return new FinallyUnit();
}

CatchUnit_ptr ActionFactory::createCatchUnit() const
{
	return new CatchUnit();
}

ExitFlow_ptr ActionFactory::createExitFlow() const
{
	return new ExitFlow();
}

ExceptionFlow_ptr ActionFactory::createExceptionFlow() const
{
	return new ExceptionFlow();
}

