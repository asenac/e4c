
#ifndef EMF_CPP_C_DERIVED__HPP
#define EMF_CPP_C_DERIVED__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CClassifier.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class Derived :  public virtual ::C::CClassifier
{
public:

    typedef Derived_ptr ptr_type;

    Derived();
    virtual ~Derived();




    /*PROTECTED REGION ID(C::Derived public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::Derived protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_DERIVED__HPP
