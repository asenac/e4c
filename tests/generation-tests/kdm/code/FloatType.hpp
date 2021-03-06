
#ifndef EMF_CPP_KDM_CODE_FLOATTYPE__HPP
#define EMF_CPP_KDM_CODE_FLOATTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class FloatType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef FloatType_ptr ptr_type;

    FloatType();
    virtual ~FloatType();




    /*PROTECTED REGION ID(kdm::code::FloatType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::FloatType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_FLOATTYPE__HPP
