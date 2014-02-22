
#ifndef EMF_CPP_C_CLONGDOUBLE__HPP
#define EMF_CPP_C_CLONGDOUBLE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CFloating.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CLongDouble :  public virtual ::C::CFloating
{
public:

    typedef CLongDouble_ptr ptr_type;

    CLongDouble();
    virtual ~CLongDouble();




    /*PROTECTED REGION ID(C::CLongDouble public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CLongDouble protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CLONGDOUBLE__HPP
