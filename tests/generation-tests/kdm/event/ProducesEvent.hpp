
#ifndef EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP
#define EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class ProducesEvent :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

    typedef ProducesEvent_ptr ptr_type;

    ProducesEvent();
    virtual ~ProducesEvent();

    typedef kdm::event::Event_ptr to_t;
    typedef kdm::action::ActionElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::event::ProducesEvent public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EventPackage;

    kdm::event::Event_ptr m_to;
    kdm::action::ActionElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::event::ProducesEvent protected) START*/
    /*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_PRODUCESEVENT__HPP
