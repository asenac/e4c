
#ifndef EMF_CPP_KDM_CODE_DECIMALTYPE__HPP
#define EMF_CPP_KDM_CODE_DECIMALTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class DecimalType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef DecimalType_ptr ptr_type;

    DecimalType();
    virtual ~DecimalType();




    /*PROTECTED REGION ID(kdm::code::DecimalType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::DecimalType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DECIMALTYPE__HPP
