
#ifndef EMF_CPP_C_CDATATYPE__HPP
#define EMF_CPP_C_CDATATYPE__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CClassifier.hpp>

#include <e4c/mapping.hpp>

namespace C
{


class CDataType :  public virtual ::C::CClassifier
{
public:

    typedef CDataType_ptr ptr_type;

    CDataType();
    virtual ~CDataType();




    /*PROTECTED REGION ID(C::CDataType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(C::CDataType protected) START*/
    /*PROTECTED REGION END*/
};

} // C


#endif // EMF_CPP_C_CDATATYPE__HPP
