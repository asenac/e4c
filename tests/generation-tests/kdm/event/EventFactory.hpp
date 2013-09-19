#ifndef EMF_CPP_KDM_EVENT_FACTORY_HPP
#define EMF_CPP_KDM_EVENT_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/event/fwd.hpp>

namespace kdm
{
namespace event
{


class EventFactory : public ::ecore::EFactory
{
public:

    static const EventFactory_ptr _instance();

    EventModel_ptr createEventModel() const;
    Event_ptr createEvent() const;
    EventRelationship_ptr createEventRelationship() const;
    EventResource_ptr createEventResource() const;
    State_ptr createState() const;
    Transition_ptr createTransition() const;
    OnEntry_ptr createOnEntry() const;
    OnExit_ptr createOnExit() const;
    EventAction_ptr createEventAction() const;
    ReadsState_ptr createReadsState() const;
    ProducesEvent_ptr createProducesEvent() const;
    ConsumesEvent_ptr createConsumesEvent() const;
    NextState_ptr createNextState() const;
    InitialState_ptr createInitialState() const;
    EventElement_ptr createEventElement() const;
    HasState_ptr createHasState() const;

protected:

    EventFactory();
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_FACTORY_HPP
