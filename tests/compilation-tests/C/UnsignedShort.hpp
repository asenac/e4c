
#ifndef EMF_CPP_C_UNSIGNEDSHORT__HPP
#define EMF_CPP_C_UNSIGNEDSHORT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CUnsignedInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class UnsignedShort :  public virtual ::C::CUnsignedInt
{
public:

    typedef UnsignedShort_ptr ptr_type;

    UnsignedShort();
    virtual ~UnsignedShort();




    /*PROTECTED REGION ID(C::UnsignedShort public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::UnsignedShort protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_UNSIGNEDSHORT__HPP
