
#ifndef EMF_CPP_KDM_ACTION_BLOCKUNIT__HPP
#define EMF_CPP_KDM_ACTION_BLOCKUNIT__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/ActionElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace action
{


class BlockUnit :  public virtual ::kdm::action::ActionElement
{
public:

    typedef BlockUnit_ptr ptr_type;

    BlockUnit();
    virtual ~BlockUnit();




    /*PROTECTED REGION ID(kdm::action::BlockUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ActionPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::action::BlockUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_BLOCKUNIT__HPP
