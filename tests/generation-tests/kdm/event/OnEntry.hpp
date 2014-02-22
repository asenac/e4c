
#ifndef EMF_CPP_KDM_EVENT_ONENTRY__HPP
#define EMF_CPP_KDM_EVENT_ONENTRY__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/event/Transition.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class OnEntry :  public virtual ::kdm::event::Transition
{
public:

    typedef OnEntry_ptr ptr_type;

    OnEntry();
    virtual ~OnEntry();




    /*PROTECTED REGION ID(kdm::event::OnEntry public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EventPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::event::OnEntry protected) START*/
    /*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ONENTRY__HPP
