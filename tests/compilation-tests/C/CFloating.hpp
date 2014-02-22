
#ifndef EMF_CPP_C_CFLOATING__HPP
#define EMF_CPP_C_CFLOATING__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CDataType.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CFloating :  public virtual ::C::CDataType
{
public:

    typedef CFloating_ptr ptr_type;

    CFloating();
    virtual ~CFloating();




    /*PROTECTED REGION ID(C::CFloating public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CFloating protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CFLOATING__HPP
