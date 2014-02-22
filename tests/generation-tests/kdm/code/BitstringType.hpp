
#ifndef EMF_CPP_KDM_CODE_BITSTRINGTYPE__HPP
#define EMF_CPP_KDM_CODE_BITSTRINGTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class BitstringType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef BitstringType_ptr ptr_type;

    BitstringType();
    virtual ~BitstringType();




    /*PROTECTED REGION ID(kdm::code::BitstringType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::BitstringType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_BITSTRINGTYPE__HPP
