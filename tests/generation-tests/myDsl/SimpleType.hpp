
#ifndef EMF_CPP_MYDSL_SIMPLETYPE__HPP
#define EMF_CPP_MYDSL_SIMPLETYPE__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <myDsl/Type.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


class SimpleType :  public virtual ::myDsl::Type
{
public:

    typedef SimpleType_ptr ptr_type;

    SimpleType();
    virtual ~SimpleType();




    /*PROTECTED REGION ID(myDsl::SimpleType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class MyDslPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(myDsl::SimpleType protected) START*/
    /*PROTECTED REGION END*/
};

} // myDsl


#endif // EMF_CPP_MYDSL_SIMPLETYPE__HPP
