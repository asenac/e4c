
#ifndef EMF_CPP_KDM_CODE_INTEGERTYPE__HPP
#define EMF_CPP_KDM_CODE_INTEGERTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class IntegerType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef IntegerType_ptr ptr_type;

    IntegerType();
    virtual ~IntegerType();




    /*PROTECTED REGION ID(kdm::code::IntegerType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::IntegerType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INTEGERTYPE__HPP
