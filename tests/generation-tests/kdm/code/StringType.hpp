
#ifndef EMF_CPP_KDM_CODE_STRINGTYPE__HPP
#define EMF_CPP_KDM_CODE_STRINGTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PrimitiveType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


class StringType :  public virtual ::kdm::code::PrimitiveType
{
public:

    typedef StringType_ptr ptr_type;

    StringType();
    virtual ~StringType();




    /*PROTECTED REGION ID(kdm::code::StringType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CodePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::code::StringType protected) START*/
    /*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_STRINGTYPE__HPP
