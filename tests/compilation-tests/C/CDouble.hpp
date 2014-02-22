
#ifndef EMF_CPP_C_CDOUBLE__HPP
#define EMF_CPP_C_CDOUBLE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CFloating.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CDouble :  public virtual ::C::CFloating
{
public:

    typedef CDouble_ptr ptr_type;

    CDouble();
    virtual ~CDouble();




    /*PROTECTED REGION ID(C::CDouble public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CDouble protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CDOUBLE__HPP
