#ifndef EMF_CPP_KDM_EVENT_FWD_HPP
#define EMF_CPP_KDM_EVENT_FWD_HPP


#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class EventPackage;
typedef EventPackage * EventPackage_ptr;
class EventFactory;
typedef EventFactory * EventFactory_ptr;

// Data types


// Classes
class EventModel;
typedef EventModel* EventModel_ptr;
class AbstractEventElement;
typedef AbstractEventElement* AbstractEventElement_ptr;
class Event;
typedef Event* Event_ptr;
class AbstractEventRelationship;
typedef AbstractEventRelationship* AbstractEventRelationship_ptr;
class EventRelationship;
typedef EventRelationship* EventRelationship_ptr;
class EventResource;
typedef EventResource* EventResource_ptr;
class State;
typedef State* State_ptr;
class Transition;
typedef Transition* Transition_ptr;
class OnEntry;
typedef OnEntry* OnEntry_ptr;
class OnExit;
typedef OnExit* OnExit_ptr;
class EventAction;
typedef EventAction* EventAction_ptr;
class ReadsState;
typedef ReadsState* ReadsState_ptr;
class ProducesEvent;
typedef ProducesEvent* ProducesEvent_ptr;
class ConsumesEvent;
typedef ConsumesEvent* ConsumesEvent_ptr;
class NextState;
typedef NextState* NextState_ptr;
class InitialState;
typedef InitialState* InitialState_ptr;
class EventElement;
typedef EventElement* EventElement_ptr;
class HasState;
typedef HasState* HasState_ptr;


// Structural features
struct EventModel__eventElement_tag;
struct AbstractEventElement__source_tag;
struct AbstractEventElement__eventRelation_tag;
struct AbstractEventElement__abstraction_tag;
struct AbstractEventElement__implementation_tag;
struct Event__kind_tag;
struct EventRelationship__to_tag;
struct EventRelationship__from_tag;
struct EventResource__eventElement_tag;
struct EventAction__kind_tag;
struct EventAction__eventElement_tag;
struct ReadsState__to_tag;
struct ReadsState__from_tag;
struct ProducesEvent__to_tag;
struct ProducesEvent__from_tag;
struct ConsumesEvent__to_tag;
struct ConsumesEvent__from_tag;
struct NextState__to_tag;
struct NextState__from_tag;
struct HasState__to_tag;
struct HasState__from_tag;


} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_FWD_HPP
