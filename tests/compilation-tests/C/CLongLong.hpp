
#ifndef EMF_CPP_C_CLONGLONG__HPP
#define EMF_CPP_C_CLONGLONG__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CInt.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CLongLong :  public virtual ::C::CInt
{
public:

    typedef CLongLong_ptr ptr_type;

    CLongLong();
    virtual ~CLongLong();




    /*PROTECTED REGION ID(C::CLongLong public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CLongLong protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CLONGLONG__HPP
