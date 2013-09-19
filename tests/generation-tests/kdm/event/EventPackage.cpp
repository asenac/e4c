#include "EventPackage.hpp"
#include "EventFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::event;

EventPackage::EventPackage()
{
	m_eFactoryInstance = EventFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const EventPackage_ptr EventPackage::_instance()
{
	static EventPackage __instance;
	return &__instance;
}

e4c::tag_t EventPackage::getTag_EventModel() const
{
	return e4c::tag< EventModel >::get();
}
 
e4c::tag_t EventPackage::getTag_AbstractEventElement() const
{
	return e4c::tag< AbstractEventElement >::get();
}
 
e4c::tag_t EventPackage::getTag_Event() const
{
	return e4c::tag< Event >::get();
}
 
e4c::tag_t EventPackage::getTag_AbstractEventRelationship() const
{
	return e4c::tag< AbstractEventRelationship >::get();
}
 
e4c::tag_t EventPackage::getTag_EventRelationship() const
{
	return e4c::tag< EventRelationship >::get();
}
 
e4c::tag_t EventPackage::getTag_EventResource() const
{
	return e4c::tag< EventResource >::get();
}
 
e4c::tag_t EventPackage::getTag_State() const
{
	return e4c::tag< State >::get();
}
 
e4c::tag_t EventPackage::getTag_Transition() const
{
	return e4c::tag< Transition >::get();
}
 
e4c::tag_t EventPackage::getTag_OnEntry() const
{
	return e4c::tag< OnEntry >::get();
}
 
e4c::tag_t EventPackage::getTag_OnExit() const
{
	return e4c::tag< OnExit >::get();
}
 
e4c::tag_t EventPackage::getTag_EventAction() const
{
	return e4c::tag< EventAction >::get();
}
 
e4c::tag_t EventPackage::getTag_ReadsState() const
{
	return e4c::tag< ReadsState >::get();
}
 
e4c::tag_t EventPackage::getTag_ProducesEvent() const
{
	return e4c::tag< ProducesEvent >::get();
}
 
e4c::tag_t EventPackage::getTag_ConsumesEvent() const
{
	return e4c::tag< ConsumesEvent >::get();
}
 
e4c::tag_t EventPackage::getTag_NextState() const
{
	return e4c::tag< NextState >::get();
}
 
e4c::tag_t EventPackage::getTag_InitialState() const
{
	return e4c::tag< InitialState >::get();
}
 
e4c::tag_t EventPackage::getTag_EventElement() const
{
	return e4c::tag< EventElement >::get();
}
 
e4c::tag_t EventPackage::getTag_HasState() const
{
	return e4c::tag< HasState >::get();
}
 
e4c::tag_t EventPackage::getTag_EventModel__eventElement() const
{
	return e4c::tag< EventModel__eventElement_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__source() const
{
	return e4c::tag< AbstractEventElement__source_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__eventRelation() const
{
	return e4c::tag< AbstractEventElement__eventRelation_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__abstraction() const
{
	return e4c::tag< AbstractEventElement__abstraction_tag >::get();
}

e4c::tag_t EventPackage::getTag_AbstractEventElement__implementation() const
{
	return e4c::tag< AbstractEventElement__implementation_tag >::get();
}

e4c::tag_t EventPackage::getTag_Event__kind() const
{
	return e4c::tag< Event__kind_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventRelationship__to() const
{
	return e4c::tag< EventRelationship__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventRelationship__from() const
{
	return e4c::tag< EventRelationship__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventResource__eventElement() const
{
	return e4c::tag< EventResource__eventElement_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventAction__kind() const
{
	return e4c::tag< EventAction__kind_tag >::get();
}

e4c::tag_t EventPackage::getTag_EventAction__eventElement() const
{
	return e4c::tag< EventAction__eventElement_tag >::get();
}

e4c::tag_t EventPackage::getTag_ReadsState__to() const
{
	return e4c::tag< ReadsState__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_ReadsState__from() const
{
	return e4c::tag< ReadsState__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_ProducesEvent__to() const
{
	return e4c::tag< ProducesEvent__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_ProducesEvent__from() const
{
	return e4c::tag< ProducesEvent__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_ConsumesEvent__to() const
{
	return e4c::tag< ConsumesEvent__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_ConsumesEvent__from() const
{
	return e4c::tag< ConsumesEvent__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_NextState__to() const
{
	return e4c::tag< NextState__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_NextState__from() const
{
	return e4c::tag< NextState__from_tag >::get();
}

e4c::tag_t EventPackage::getTag_HasState__to() const
{
	return e4c::tag< HasState__to_tag >::get();
}

e4c::tag_t EventPackage::getTag_HasState__from() const
{
	return e4c::tag< HasState__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_event()
{
	return ::kdm::event::EventPackage::_instance();
}
