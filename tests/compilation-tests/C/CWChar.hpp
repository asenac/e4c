
#ifndef EMF_CPP_C_CWCHAR__HPP
#define EMF_CPP_C_CWCHAR__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CChar.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CWChar :  public virtual ::C::CChar
{
public:

    typedef CWChar_ptr ptr_type;

    CWChar();
    virtual ~CWChar();




    /*PROTECTED REGION ID(C::CWChar public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CWChar protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CWCHAR__HPP
