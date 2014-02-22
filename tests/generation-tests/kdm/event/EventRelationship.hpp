
#ifndef EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP
#define EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class EventRelationship :  public virtual ::kdm::event::AbstractEventRelationship
{
public:

    typedef EventRelationship_ptr ptr_type;

    EventRelationship();
    virtual ~EventRelationship();

    typedef kdm::core::KDMEntity_ptr to_t;
    typedef kdm::event::AbstractEventElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::event::EventRelationship public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EventPackage;

    kdm::core::KDMEntity_ptr m_to;
    kdm::event::AbstractEventElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::event::EventRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRELATIONSHIP__HPP
