#ifndef EMF_CPP_KDM_EVENT_PACKAGE_HPP
#define EMF_CPP_KDM_EVENT_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/event/fwd.hpp>

namespace kdm
{
namespace event
{


class EventPackage : public ::ecore::EPackage
{
public:
    static EventPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_EventModel();
 	e4c::tag_t getTag_AbstractEventElement();
 	e4c::tag_t getTag_Event();
 	e4c::tag_t getTag_AbstractEventRelationship();
 	e4c::tag_t getTag_EventRelationship();
 	e4c::tag_t getTag_EventResource();
 	e4c::tag_t getTag_State();
 	e4c::tag_t getTag_Transition();
 	e4c::tag_t getTag_OnEntry();
 	e4c::tag_t getTag_OnExit();
 	e4c::tag_t getTag_EventAction();
 	e4c::tag_t getTag_ReadsState();
 	e4c::tag_t getTag_ProducesEvent();
 	e4c::tag_t getTag_ConsumesEvent();
 	e4c::tag_t getTag_NextState();
 	e4c::tag_t getTag_InitialState();
 	e4c::tag_t getTag_EventElement();
 	e4c::tag_t getTag_HasState();
 
 	// Structural features
 	e4c::tag_t getTag_EventModel__eventElement();
 	e4c::tag_t getTag_AbstractEventElement__source();
 	e4c::tag_t getTag_AbstractEventElement__eventRelation();
 	e4c::tag_t getTag_AbstractEventElement__abstraction();
 	e4c::tag_t getTag_AbstractEventElement__implementation();
 	e4c::tag_t getTag_Event__kind();
 	e4c::tag_t getTag_EventRelationship__to();
 	e4c::tag_t getTag_EventRelationship__from();
 	e4c::tag_t getTag_EventResource__eventElement();
 	e4c::tag_t getTag_EventAction__kind();
 	e4c::tag_t getTag_EventAction__eventElement();
 	e4c::tag_t getTag_ReadsState__to();
 	e4c::tag_t getTag_ReadsState__from();
 	e4c::tag_t getTag_ProducesEvent__to();
 	e4c::tag_t getTag_ProducesEvent__from();
 	e4c::tag_t getTag_ConsumesEvent__to();
 	e4c::tag_t getTag_ConsumesEvent__from();
 	e4c::tag_t getTag_NextState__to();
 	e4c::tag_t getTag_NextState__from();
 	e4c::tag_t getTag_HasState__to();
 	e4c::tag_t getTag_HasState__from();

protected:
    EventPackage();
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_PACKAGE_HPP
