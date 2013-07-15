#include "ActionPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::action;

ActionPackage::ActionPackage()
{
}

ActionPackage_ptr ActionPackage::_instance()
{
	static ActionPackage __instance;
	return &__instance;
}

e4c::tag_t ActionPackage::getTag_ActionElement()
{
	return e4c::tag< ActionElement >::get();
}
 
e4c::tag_t ActionPackage::getTag_AbstractActionRelationship()
{
	return e4c::tag< AbstractActionRelationship >::get();
}
 
e4c::tag_t ActionPackage::getTag_ControlFlow()
{
	return e4c::tag< ControlFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_Calls()
{
	return e4c::tag< Calls >::get();
}
 
e4c::tag_t ActionPackage::getTag_Creates()
{
	return e4c::tag< Creates >::get();
}
 
e4c::tag_t ActionPackage::getTag_Reads()
{
	return e4c::tag< Reads >::get();
}
 
e4c::tag_t ActionPackage::getTag_Writes()
{
	return e4c::tag< Writes >::get();
}
 
e4c::tag_t ActionPackage::getTag_CompliesTo()
{
	return e4c::tag< CompliesTo >::get();
}
 
e4c::tag_t ActionPackage::getTag_Flow()
{
	return e4c::tag< Flow >::get();
}
 
e4c::tag_t ActionPackage::getTag_TrueFlow()
{
	return e4c::tag< TrueFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_FalseFlow()
{
	return e4c::tag< FalseFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_GuardedFlow()
{
	return e4c::tag< GuardedFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_UsesType()
{
	return e4c::tag< UsesType >::get();
}
 
e4c::tag_t ActionPackage::getTag_Addresses()
{
	return e4c::tag< Addresses >::get();
}
 
e4c::tag_t ActionPackage::getTag_ActionRelationship()
{
	return e4c::tag< ActionRelationship >::get();
}
 
e4c::tag_t ActionPackage::getTag_Throws()
{
	return e4c::tag< Throws >::get();
}
 
e4c::tag_t ActionPackage::getTag_Dispatches()
{
	return e4c::tag< Dispatches >::get();
}
 
e4c::tag_t ActionPackage::getTag_EntryFlow()
{
	return e4c::tag< EntryFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_BlockUnit()
{
	return e4c::tag< BlockUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_ExceptionUnit()
{
	return e4c::tag< ExceptionUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_TryUnit()
{
	return e4c::tag< TryUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_FinallyUnit()
{
	return e4c::tag< FinallyUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_CatchUnit()
{
	return e4c::tag< CatchUnit >::get();
}
 
e4c::tag_t ActionPackage::getTag_ExitFlow()
{
	return e4c::tag< ExitFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_ExceptionFlow()
{
	return e4c::tag< ExceptionFlow >::get();
}
 
e4c::tag_t ActionPackage::getTag_ActionElement__kind()
{
	return e4c::tag< ActionElement__kind_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionElement__codeElement()
{
	return e4c::tag< ActionElement__codeElement_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionElement__actionRelation()
{
	return e4c::tag< ActionElement__actionRelation_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ControlFlow__to()
{
	return e4c::tag< ControlFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ControlFlow__from()
{
	return e4c::tag< ControlFlow__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Calls__to()
{
	return e4c::tag< Calls__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Calls__from()
{
	return e4c::tag< Calls__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Creates__to()
{
	return e4c::tag< Creates__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Creates__from()
{
	return e4c::tag< Creates__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Reads__to()
{
	return e4c::tag< Reads__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Reads__from()
{
	return e4c::tag< Reads__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Writes__to()
{
	return e4c::tag< Writes__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Writes__from()
{
	return e4c::tag< Writes__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_CompliesTo__to()
{
	return e4c::tag< CompliesTo__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_CompliesTo__from()
{
	return e4c::tag< CompliesTo__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_UsesType__to()
{
	return e4c::tag< UsesType__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_UsesType__from()
{
	return e4c::tag< UsesType__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Addresses__to()
{
	return e4c::tag< Addresses__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Addresses__from()
{
	return e4c::tag< Addresses__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionRelationship__to()
{
	return e4c::tag< ActionRelationship__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ActionRelationship__from()
{
	return e4c::tag< ActionRelationship__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Throws__to()
{
	return e4c::tag< Throws__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Throws__from()
{
	return e4c::tag< Throws__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Dispatches__to()
{
	return e4c::tag< Dispatches__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_Dispatches__from()
{
	return e4c::tag< Dispatches__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_EntryFlow__to()
{
	return e4c::tag< EntryFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_EntryFlow__from()
{
	return e4c::tag< EntryFlow__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExitFlow__to()
{
	return e4c::tag< ExitFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExitFlow__from()
{
	return e4c::tag< ExitFlow__from_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExceptionFlow__to()
{
	return e4c::tag< ExceptionFlow__to_tag >::get();
}

e4c::tag_t ActionPackage::getTag_ExceptionFlow__from()
{
	return e4c::tag< ExceptionFlow__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_action()
{
	return ::kdm::action::ActionPackage::_instance();
}
