
#ifndef EMF_CPP_C_CENUMERATION__HPP
#define EMF_CPP_C_CENUMERATION__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CIntegral.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CEnumeration :  public virtual ::C::CIntegral
{
public:

    typedef CEnumeration_ptr ptr_type;

    CEnumeration();
    virtual ~CEnumeration();




    /*PROTECTED REGION ID(C::CEnumeration public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CEnumeration protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CENUMERATION__HPP
