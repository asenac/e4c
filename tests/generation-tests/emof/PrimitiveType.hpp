
#ifndef EMF_CPP_EMOF_PRIMITIVETYPE__HPP
#define EMF_CPP_EMOF_PRIMITIVETYPE__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/DataType.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class PrimitiveType :  public virtual ::emof::DataType
{
public:

    typedef PrimitiveType_ptr ptr_type;

    PrimitiveType();
    virtual ~PrimitiveType();




    /*PROTECTED REGION ID(emof::PrimitiveType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EmofPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(emof::PrimitiveType protected) START*/
    /*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_PRIMITIVETYPE__HPP
