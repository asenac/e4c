
#ifndef EMF_CPP_KDM_CODE_SCALEDTYPE__HPP
#define EMF_CPP_KDM_CODE_SCALEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class ScaledType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef ScaledType_ptr ptr_type;

    ScaledType();
    virtual ~ScaledType();




    /*PROTECTED REGION ID(kdm::code::ScaledType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::ScaledType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SCALEDTYPE__HPP
