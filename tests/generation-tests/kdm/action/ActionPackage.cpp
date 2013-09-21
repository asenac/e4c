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
	
	::ecore::EClass_ptr ActionElement_ = ecoreFactory->createEClass();
	ActionElement_->setName("ActionElement");
	// m_eClassifiers.push_back(ActionElement_);
	::ecore::EClass_ptr AbstractActionRelationship_ = ecoreFactory->createEClass();
	AbstractActionRelationship_->setName("AbstractActionRelationship");
	// m_eClassifiers.push_back(AbstractActionRelationship_);
	::ecore::EClass_ptr ControlFlow_ = ecoreFactory->createEClass();
	ControlFlow_->setName("ControlFlow");
	// m_eClassifiers.push_back(ControlFlow_);
	::ecore::EClass_ptr Calls_ = ecoreFactory->createEClass();
	Calls_->setName("Calls");
	// m_eClassifiers.push_back(Calls_);
	::ecore::EClass_ptr Creates_ = ecoreFactory->createEClass();
	Creates_->setName("Creates");
	// m_eClassifiers.push_back(Creates_);
	::ecore::EClass_ptr Reads_ = ecoreFactory->createEClass();
	Reads_->setName("Reads");
	// m_eClassifiers.push_back(Reads_);
	::ecore::EClass_ptr Writes_ = ecoreFactory->createEClass();
	Writes_->setName("Writes");
	// m_eClassifiers.push_back(Writes_);
	::ecore::EClass_ptr CompliesTo_ = ecoreFactory->createEClass();
	CompliesTo_->setName("CompliesTo");
	// m_eClassifiers.push_back(CompliesTo_);
	::ecore::EClass_ptr Flow_ = ecoreFactory->createEClass();
	Flow_->setName("Flow");
	// m_eClassifiers.push_back(Flow_);
	::ecore::EClass_ptr TrueFlow_ = ecoreFactory->createEClass();
	TrueFlow_->setName("TrueFlow");
	// m_eClassifiers.push_back(TrueFlow_);
	::ecore::EClass_ptr FalseFlow_ = ecoreFactory->createEClass();
	FalseFlow_->setName("FalseFlow");
	// m_eClassifiers.push_back(FalseFlow_);
	::ecore::EClass_ptr GuardedFlow_ = ecoreFactory->createEClass();
	GuardedFlow_->setName("GuardedFlow");
	// m_eClassifiers.push_back(GuardedFlow_);
	::ecore::EClass_ptr UsesType_ = ecoreFactory->createEClass();
	UsesType_->setName("UsesType");
	// m_eClassifiers.push_back(UsesType_);
	::ecore::EClass_ptr Addresses_ = ecoreFactory->createEClass();
	Addresses_->setName("Addresses");
	// m_eClassifiers.push_back(Addresses_);
	::ecore::EClass_ptr ActionRelationship_ = ecoreFactory->createEClass();
	ActionRelationship_->setName("ActionRelationship");
	// m_eClassifiers.push_back(ActionRelationship_);
	::ecore::EClass_ptr Throws_ = ecoreFactory->createEClass();
	Throws_->setName("Throws");
	// m_eClassifiers.push_back(Throws_);
	::ecore::EClass_ptr Dispatches_ = ecoreFactory->createEClass();
	Dispatches_->setName("Dispatches");
	// m_eClassifiers.push_back(Dispatches_);
	::ecore::EClass_ptr EntryFlow_ = ecoreFactory->createEClass();
	EntryFlow_->setName("EntryFlow");
	// m_eClassifiers.push_back(EntryFlow_);
	::ecore::EClass_ptr BlockUnit_ = ecoreFactory->createEClass();
	BlockUnit_->setName("BlockUnit");
	// m_eClassifiers.push_back(BlockUnit_);
	::ecore::EClass_ptr ExceptionUnit_ = ecoreFactory->createEClass();
	ExceptionUnit_->setName("ExceptionUnit");
	// m_eClassifiers.push_back(ExceptionUnit_);
	::ecore::EClass_ptr TryUnit_ = ecoreFactory->createEClass();
	TryUnit_->setName("TryUnit");
	// m_eClassifiers.push_back(TryUnit_);
	::ecore::EClass_ptr FinallyUnit_ = ecoreFactory->createEClass();
	FinallyUnit_->setName("FinallyUnit");
	// m_eClassifiers.push_back(FinallyUnit_);
	::ecore::EClass_ptr CatchUnit_ = ecoreFactory->createEClass();
	CatchUnit_->setName("CatchUnit");
	// m_eClassifiers.push_back(CatchUnit_);
	::ecore::EClass_ptr ExitFlow_ = ecoreFactory->createEClass();
	ExitFlow_->setName("ExitFlow");
	// m_eClassifiers.push_back(ExitFlow_);
	::ecore::EClass_ptr ExceptionFlow_ = ecoreFactory->createEClass();
	ExceptionFlow_->setName("ExceptionFlow");
	// m_eClassifiers.push_back(ExceptionFlow_);
	
	
	// ActionElement_->addESuperType(AbstractCodeElement_);
	// AbstractActionRelationship_->addESuperType(KDMRelationship_);
	// ControlFlow_->addESuperType(AbstractActionRelationship_);
	// Calls_->addESuperType(AbstractActionRelationship_);
	// Creates_->addESuperType(AbstractActionRelationship_);
	// Reads_->addESuperType(AbstractActionRelationship_);
	// Writes_->addESuperType(AbstractActionRelationship_);
	// CompliesTo_->addESuperType(AbstractActionRelationship_);
	// Flow_->addESuperType(ControlFlow_);
	// TrueFlow_->addESuperType(ControlFlow_);
	// FalseFlow_->addESuperType(ControlFlow_);
	// GuardedFlow_->addESuperType(ControlFlow_);
	// UsesType_->addESuperType(AbstractActionRelationship_);
	// Addresses_->addESuperType(AbstractActionRelationship_);
	// ActionRelationship_->addESuperType(AbstractActionRelationship_);
	// Throws_->addESuperType(AbstractActionRelationship_);
	// Dispatches_->addESuperType(AbstractActionRelationship_);
	// EntryFlow_->addESuperType(AbstractActionRelationship_);
	// BlockUnit_->addESuperType(ActionElement_);
	// ExceptionUnit_->addESuperType(BlockUnit_);
	// TryUnit_->addESuperType(ExceptionUnit_);
	// FinallyUnit_->addESuperType(ExceptionUnit_);
	// CatchUnit_->addESuperType(ExceptionUnit_);
	// ExitFlow_->addESuperType(AbstractActionRelationship_);
	// ExceptionFlow_->addESuperType(AbstractActionRelationship_);
	
	
	
	
}

const ActionPackage_ptr ActionPackage::_instance()
{
	static ActionPackage __instance;
	return &__instance;
}

e4c::tag_t ActionPackage::getTag_ActionElement() const
{
	return e4c::tag< ActionElement >::get();
}
 
e4c::tag_t ActionPackage::getTag_AbstractActionRelationship() const
{
	return e4c::tag< AbstractActionRelationship >::get();
}
 
e4c::tag_t ActionPackage::getTag_ControlFlow() const
{
	return e4c::tag< ControlFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_Calls() const
{
	return e4c::tag< Calls >::get();
}
 
e4c::tag_t ActionPackage::getTag_Creates() const
{
	return e4c::tag< Creates >::get();
}
 
e4c::tag_t ActionPackage::getTag_Reads() const
{
	return e4c::tag< Reads >::get();
}
 
e4c::tag_t ActionPackage::getTag_Writes() const
{
	return e4c::tag< Writes >::get();
}
 
e4c::tag_t ActionPackage::getTag_CompliesTo() const
{
	return e4c::tag< CompliesTo >::get();
}
 
e4c::tag_t ActionPackage::getTag_Flow() const
{
	return e4c::tag< Flow >::get();
}
 
e4c::tag_t ActionPackage::getTag_TrueFlow() const
{
	return e4c::tag< TrueFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_FalseFlow() const
{
	return e4c::tag< FalseFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_GuardedFlow() const
{
	return e4c::tag< GuardedFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_UsesType() const
{
	return e4c::tag< UsesType >::get();
}
 
e4c::tag_t ActionPackage::getTag_Addresses() const
{
	return e4c::tag< Addresses >::get();
}
 
e4c::tag_t ActionPackage::getTag_ActionRelationship() const
{
	return e4c::tag< ActionRelationship >::get();
}
 
e4c::tag_t ActionPackage::getTag_Throws() const
{
	return e4c::tag< Throws >::get();
}
 
e4c::tag_t ActionPackage::getTag_Dispatches() const
{
	return e4c::tag< Dispatches >::get();
}
 
e4c::tag_t ActionPackage::getTag_EntryFlow() const
{
	return e4c::tag< EntryFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_BlockUnit() const
{
	return e4c::tag< BlockUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_ExceptionUnit() const
{
	return e4c::tag< ExceptionUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_TryUnit() const
{
	return e4c::tag< TryUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_FinallyUnit() const
{
	return e4c::tag< FinallyUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_CatchUnit() const
{
	return e4c::tag< CatchUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_ExitFlow() const
{
	return e4c::tag< ExitFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_ExceptionFlow() const
{
	return e4c::tag< ExceptionFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_ActionElement__kind() const
{
	return e4c::tag< ActionElement__kind_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionElement__codeElement() const
{
	return e4c::tag< ActionElement__codeElement_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionElement__actionRelation() const
{
	return e4c::tag< ActionElement__actionRelation_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ControlFlow__to() const
{
	return e4c::tag< ControlFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ControlFlow__from() const
{
	return e4c::tag< ControlFlow__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Calls__to() const
{
	return e4c::tag< Calls__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Calls__from() const
{
	return e4c::tag< Calls__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Creates__to() const
{
	return e4c::tag< Creates__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Creates__from() const
{
	return e4c::tag< Creates__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Reads__to() const
{
	return e4c::tag< Reads__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Reads__from() const
{
	return e4c::tag< Reads__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Writes__to() const
{
	return e4c::tag< Writes__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Writes__from() const
{
	return e4c::tag< Writes__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_CompliesTo__to() const
{
	return e4c::tag< CompliesTo__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_CompliesTo__from() const
{
	return e4c::tag< CompliesTo__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_UsesType__to() const
{
	return e4c::tag< UsesType__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_UsesType__from() const
{
	return e4c::tag< UsesType__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Addresses__to() const
{
	return e4c::tag< Addresses__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Addresses__from() const
{
	return e4c::tag< Addresses__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionRelationship__to() const
{
	return e4c::tag< ActionRelationship__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionRelationship__from() const
{
	return e4c::tag< ActionRelationship__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Throws__to() const
{
	return e4c::tag< Throws__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Throws__from() const
{
	return e4c::tag< Throws__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Dispatches__to() const
{
	return e4c::tag< Dispatches__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Dispatches__from() const
{
	return e4c::tag< Dispatches__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_EntryFlow__to() const
{
	return e4c::tag< EntryFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_EntryFlow__from() const
{
	return e4c::tag< EntryFlow__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExitFlow__to() const
{
	return e4c::tag< ExitFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExitFlow__from() const
{
	return e4c::tag< ExitFlow__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExceptionFlow__to() const
{
	return e4c::tag< ExceptionFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExceptionFlow__from() const
{
	return e4c::tag< ExceptionFlow__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_action()
{
	return ::kdm::action::ActionPackage::_instance();
}
