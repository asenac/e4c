#include "EventPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::event;

EventPackage::EventPackage()
{
}

EventPackage_ptr EventPackage::_instance()
{
	static EventPackage __instance;
	return &__instance;
}

e4c::tag_t EventPackage::getTag_EventModel()
{
	return e4c::tag< EventModel >::get();
}
 
e4c::tag_t EventPackage::getTag_AbstractEventElement()
{
	return e4c::tag< AbstractEventElement >::get();
}
 
e4c::tag_t EventPackage::getTag_Event()
{
	return e4c::tag< Event >::get();
}
 
e4c::tag_t EventPackage::getTag_AbstractEventRelationship()
{
	return e4c::tag< AbstractEventRelationship >::get();
}
 
e4c::tag_t EventPackage::getTag_EventRelationship()
{
	return e4c::tag< EventRelationship >::get();
}
 
e4c::tag_t EventPackage::getTag_EventResource()
{
	return e4c::tag< EventResource >::get();
}
 
e4c::tag_t EventPackage::getTag_State()
{
	return e4c::tag< State >::get();
}
 
e4c::tag_t EventPackage::getTag_Transition()
{
	return e4c::tag< Transition >::get();
}
 
e4c::tag_t EventPackage::getTag_OnEntry()
{
	return e4c::tag< OnEntry >::get();
}
 
e4c::tag_t EventPackage::getTag_OnExit()
{
	return e4c::tag< OnExit >::get();
}
 
e4c::tag_t EventPackage::getTag_EventAction()
{
	return e4c::tag< EventAction >::get();
}
 
e4c::tag_t EventPackage::getTag_ReadsState()
{
	return e4c::tag< ReadsState >::get();
}
 
e4c::tag_t EventPackage::getTag_ProducesEvent()
{
	return e4c::tag< ProducesEvent >::get();
}
 
e4c::tag_t EventPackage::getTag_ConsumesEvent()
{
	return e4c::tag< ConsumesEvent >::get();
}
 
e4c::tag_t EventPackage::getTag_NextState()
{
	return e4c::tag< NextState >::get();
}
 
e4c::tag_t EventPackage::getTag_InitialState()
{
	return e4c::tag< InitialState >::get();
}
 
e4c::tag_t EventPackage::getTag_EventElement()
{
	return e4c::tag< EventElement >::get();
}
 
e4c::tag_t EventPackage::getTag_HasState()
{
	return e4c::tag< HasState >::get();
}
 
e4c::tag_t EventPackage::getTag_EventModel__eventElement()
{
	return e4c::tag< EventModel__eventElement_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__source()
{
	return e4c::tag< AbstractEventElement__source_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__eventRelation()
{
	return e4c::tag< AbstractEventElement__eventRelation_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__abstraction()
{
	return e4c::tag< AbstractEventElement__abstraction_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__implementation()
{
	return e4c::tag< AbstractEventElement__implementation_tag >::get();
}

e4c::tag_t EventPackage::getTag_Event__kind()
{
	return e4c::tag< Event__kind_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventRelationship__to()
{
	return e4c::tag< EventRelationship__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventRelationship__from()
{
	return e4c::tag< EventRelationship__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventResource__eventElement()
{
	return e4c::tag< EventResource__eventElement_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventAction__kind()
{
	return e4c::tag< EventAction__kind_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventAction__eventElement()
{
	return e4c::tag< EventAction__eventElement_tag >::get();
}

e4c::tag_t EventPackage::getTag_ReadsState__to()
{
	return e4c::tag< ReadsState__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_ReadsState__from()
{
	return e4c::tag< ReadsState__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_ProducesEvent__to()
{
	return e4c::tag< ProducesEvent__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_ProducesEvent__from()
{
	return e4c::tag< ProducesEvent__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_ConsumesEvent__to()
{
	return e4c::tag< ConsumesEvent__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_ConsumesEvent__from()
{
	return e4c::tag< ConsumesEvent__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_NextState__to()
{
	return e4c::tag< NextState__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_NextState__from()
{
	return e4c::tag< NextState__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_HasState__to()
{
	return e4c::tag< HasState__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_HasState__from()
{
	return e4c::tag< HasState__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_event()
{
	return ::kdm::event::EventPackage::_instance();
}
