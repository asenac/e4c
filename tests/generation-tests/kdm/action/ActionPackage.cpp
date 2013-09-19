#include "ActionPackage.hpp"
#include "ActionFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::action;

ActionPackage::ActionPackage()
{
	m_eFactoryInstance = ActionFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
