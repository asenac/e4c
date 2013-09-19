#ifndef EMF_CPP_KDM_EVENT_PACKAGE_HPP
#define EMF_CPP_KDM_EVENT_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/event/fwd.hpp>

namespace kdm
{
namespace event
{


class EventPackage : public ::ecore::EPackage
{
public:
    static const EventPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_EventModel() const;
 	e4c::tag_t getTag_AbstractEventElement() const;
 	e4c::tag_t getTag_Event() const;
 	e4c::tag_t getTag_AbstractEventRelationship() const;
 	e4c::tag_t getTag_EventRelationship() const;
 	e4c::tag_t getTag_EventResource() const;
 	e4c::tag_t getTag_State() const;
 	e4c::tag_t getTag_Transition() const;
 	e4c::tag_t getTag_OnEntry() const;
 	e4c::tag_t getTag_OnExit() const;
 	e4c::tag_t getTag_EventAction() const;
 	e4c::tag_t getTag_ReadsState() const;
 	e4c::tag_t getTag_ProducesEvent() const;
 	e4c::tag_t getTag_ConsumesEvent() const;
 	e4c::tag_t getTag_NextState() const;
 	e4c::tag_t getTag_InitialState() const;
 	e4c::tag_t getTag_EventElement() const;
 	e4c::tag_t getTag_HasState() const;
 
 	// Structural features
 	e4c::tag_t getTag_EventModel__eventElement() const;
 	e4c::tag_t getTag_AbstractEventElement__source() const;
 	e4c::tag_t getTag_AbstractEventElement__eventRelation() const;
 	e4c::tag_t getTag_AbstractEventElement__abstraction() const;
 	e4c::tag_t getTag_AbstractEventElement__implementation() const;
 	e4c::tag_t getTag_Event__kind() const;
 	e4c::tag_t getTag_EventRelationship__to() const;
 	e4c::tag_t getTag_EventRelationship__from() const;
 	e4c::tag_t getTag_EventResource__eventElement() const;
 	e4c::tag_t getTag_EventAction__kind() const;
 	e4c::tag_t getTag_EventAction__eventElement() const;
 	e4c::tag_t getTag_ReadsState__to() const;
 	e4c::tag_t getTag_ReadsState__from() const;
 	e4c::tag_t getTag_ProducesEvent__to() const;
 	e4c::tag_t getTag_ProducesEvent__from() const;
 	e4c::tag_t getTag_ConsumesEvent__to() const;
 	e4c::tag_t getTag_ConsumesEvent__from() const;
 	e4c::tag_t getTag_NextState__to() const;
 	e4c::tag_t getTag_NextState__from() const;
 	e4c::tag_t getTag_HasState__to() const;
 	e4c::tag_t getTag_HasState__from() const;

protected:
    EventPackage();
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_PACKAGE_HPP
