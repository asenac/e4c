
#ifndef EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
#define EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/AbstractEventElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class EventResource :  public virtual ::kdm::event::AbstractEventElement
{
public:

    typedef EventResource_ptr ptr_type;

    EventResource();
    virtual ~EventResource();

    typedef std::set < kdm::event::AbstractEventElement_ptr > eventElement_t;

    eventElement_t getEventElement() const;
    void addEventElement(kdm::event::AbstractEventElement_ptr eventElement_);
    void addAllEventElement(const eventElement_t& eventElement_);


    /*PROTECTED REGION ID(kdm::event::EventResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EventPackage;

    std::set < std::unique_ptr < kdm::event::AbstractEventElement > > m_eventElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::event::EventResource protected) START*/
    /*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTRESOURCE__HPP
