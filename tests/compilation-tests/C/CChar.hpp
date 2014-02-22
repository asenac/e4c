
#ifndef EMF_CPP_C_CCHAR__HPP
#define EMF_CPP_C_CCHAR__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CIntegral.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CChar :  public virtual ::C::CIntegral
{
public:

    typedef CChar_ptr ptr_type;

    CChar();
    virtual ~CChar();




    /*PROTECTED REGION ID(C::CChar public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CChar protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CCHAR__HPP
