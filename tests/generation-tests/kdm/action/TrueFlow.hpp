
#ifndef EMF_CPP_KDM_ACTION_TRUEFLOW__HPP
#define EMF_CPP_KDM_ACTION_TRUEFLOW__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ControlFlow.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class TrueFlow :  public virtual ::kdm::action::ControlFlow
{
public:

    typedef TrueFlow_ptr ptr_type;

    TrueFlow();
    virtual ~TrueFlow();




    /*PROTECTED REGION ID(kdm::action::TrueFlow public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ActionPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::action::TrueFlow protected) START*/
    /*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_TRUEFLOW__HPP
