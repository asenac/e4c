
#ifndef EMF_CPP_C_CUNSIGNEDCHAR__HPP
#define EMF_CPP_C_CUNSIGNEDCHAR__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CChar.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CUnsignedChar :  public virtual ::C::CChar
{
public:

    typedef CUnsignedChar_ptr ptr_type;

    CUnsignedChar();
    virtual ~CUnsignedChar();




    /*PROTECTED REGION ID(C::CUnsignedChar public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CUnsignedChar protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CUNSIGNEDCHAR__HPP
