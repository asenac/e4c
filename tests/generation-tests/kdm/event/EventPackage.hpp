#ifndef EMF_CPP_KDM_EVENT_PACKAGE_HPP
#define EMF_CPP_KDM_EVENT_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/event/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace event
{


class EventPackage : public ::ecore::EPackage
{
public:
    static const EventPackage_ptr _instance();

     ::ecore::EClass_ptr getEventModel() const;
     ::ecore::EClass_ptr getAbstractEventElement() const;
     ::ecore::EClass_ptr getEvent() const;
     ::ecore::EClass_ptr getAbstractEventRelationship() const;
     ::ecore::EClass_ptr getEventRelationship() const;
     ::ecore::EClass_ptr getEventResource() const;
     ::ecore::EClass_ptr getState() const;
     ::ecore::EClass_ptr getTransition() const;
     ::ecore::EClass_ptr getOnEntry() const;
     ::ecore::EClass_ptr getOnExit() const;
     ::ecore::EClass_ptr getEventAction() const;
     ::ecore::EClass_ptr getReadsState() const;
     ::ecore::EClass_ptr getProducesEvent() const;
     ::ecore::EClass_ptr getConsumesEvent() const;
     ::ecore::EClass_ptr getNextState() const;
     ::ecore::EClass_ptr getInitialState() const;
     ::ecore::EClass_ptr getEventElement() const;
     ::ecore::EClass_ptr getHasState() const;

     ::ecore::EReference_ptr getEventModel__eventElement() const;
     ::ecore::EReference_ptr getAbstractEventElement__source() const;
     ::ecore::EReference_ptr getAbstractEventElement__eventRelation() const;
     ::ecore::EReference_ptr getAbstractEventElement__abstraction() const;
     ::ecore::EReference_ptr getAbstractEventElement__implementation() const;
     ::ecore::EAttribute_ptr getEvent__kind() const;
     ::ecore::EReference_ptr getEventRelationship__to() const;
     ::ecore::EReference_ptr getEventRelationship__from() const;
     ::ecore::EReference_ptr getEventResource__eventElement() const;
     ::ecore::EAttribute_ptr getEventAction__kind() const;
     ::ecore::EReference_ptr getEventAction__eventElement() const;
     ::ecore::EReference_ptr getReadsState__to() const;
     ::ecore::EReference_ptr getReadsState__from() const;
     ::ecore::EReference_ptr getProducesEvent__to() const;
     ::ecore::EReference_ptr getProducesEvent__from() const;
     ::ecore::EReference_ptr getConsumesEvent__to() const;
     ::ecore::EReference_ptr getConsumesEvent__from() const;
     ::ecore::EReference_ptr getNextState__to() const;
     ::ecore::EReference_ptr getNextState__from() const;
     ::ecore::EReference_ptr getHasState__to() const;
     ::ecore::EReference_ptr getHasState__from() const;

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

     ::ecore::EClass_ptr m_EventModel;
     ::ecore::EClass_ptr m_AbstractEventElement;
     ::ecore::EClass_ptr m_Event;
     ::ecore::EClass_ptr m_AbstractEventRelationship;
     ::ecore::EClass_ptr m_EventRelationship;
     ::ecore::EClass_ptr m_EventResource;
     ::ecore::EClass_ptr m_State;
     ::ecore::EClass_ptr m_Transition;
     ::ecore::EClass_ptr m_OnEntry;
     ::ecore::EClass_ptr m_OnExit;
     ::ecore::EClass_ptr m_EventAction;
     ::ecore::EClass_ptr m_ReadsState;
     ::ecore::EClass_ptr m_ProducesEvent;
     ::ecore::EClass_ptr m_ConsumesEvent;
     ::ecore::EClass_ptr m_NextState;
     ::ecore::EClass_ptr m_InitialState;
     ::ecore::EClass_ptr m_EventElement;
     ::ecore::EClass_ptr m_HasState;
     ::ecore::EReference_ptr m_EventModel__eventElement;
     ::ecore::EReference_ptr m_AbstractEventElement__source;
     ::ecore::EReference_ptr m_AbstractEventElement__eventRelation;
     ::ecore::EReference_ptr m_AbstractEventElement__abstraction;
     ::ecore::EReference_ptr m_AbstractEventElement__implementation;
     ::ecore::EAttribute_ptr m_Event__kind;
     ::ecore::EReference_ptr m_EventRelationship__to;
     ::ecore::EReference_ptr m_EventRelationship__from;
     ::ecore::EReference_ptr m_EventResource__eventElement;
     ::ecore::EAttribute_ptr m_EventAction__kind;
     ::ecore::EReference_ptr m_EventAction__eventElement;
     ::ecore::EReference_ptr m_ReadsState__to;
     ::ecore::EReference_ptr m_ReadsState__from;
     ::ecore::EReference_ptr m_ProducesEvent__to;
     ::ecore::EReference_ptr m_ProducesEvent__from;
     ::ecore::EReference_ptr m_ConsumesEvent__to;
     ::ecore::EReference_ptr m_ConsumesEvent__from;
     ::ecore::EReference_ptr m_NextState__to;
     ::ecore::EReference_ptr m_NextState__from;
     ::ecore::EReference_ptr m_HasState__to;
     ::ecore::EReference_ptr m_HasState__from;
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_PACKAGE_HPP
