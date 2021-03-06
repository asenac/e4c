
#ifndef EMF_CPP_KDM_CODE_TIMETYPE__HPP
#define EMF_CPP_KDM_CODE_TIMETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class TimeType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef TimeType_ptr ptr_type;

    TimeType();
    virtual ~TimeType();




    /*PROTECTED REGION ID(kdm::code::TimeType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::TimeType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_TIMETYPE__HPP
