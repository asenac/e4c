
#ifndef EMF_CPP_EMOF_DATATYPE__HPP
#define EMF_CPP_EMOF_DATATYPE__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Type.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class DataType :  public virtual ::emof::Type
{
public:

    typedef DataType_ptr ptr_type;

    DataType();
    virtual ~DataType();




    /*PROTECTED REGION ID(emof::DataType public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EmofPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(emof::DataType protected) START*/
    /*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_DATATYPE__HPP
