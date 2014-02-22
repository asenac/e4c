
#ifndef EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
#define EMF_CPP_KDM_EVENT_EVENTMODEL__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class EventModel :  public virtual ::kdm::kdm::KDMModel
{
public:

    typedef EventModel_ptr ptr_type;

    EventModel();
    virtual ~EventModel();

    typedef std::set < kdm::event::AbstractEventElement_ptr > eventElement_t;

    eventElement_t getEventElement() const;
    void addEventElement(kdm::event::AbstractEventElement_ptr eventElement_);
    void addAllEventElement(const eventElement_t& eventElement_);


    /*PROTECTED REGION ID(kdm::event::EventModel public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EventPackage;

    std::set < std::unique_ptr < kdm::event::AbstractEventElement > > m_eventElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::event::EventModel protected) START*/
    /*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_EVENTMODEL__HPP
