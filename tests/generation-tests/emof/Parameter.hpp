
#ifndef EMF_CPP_EMOF_PARAMETER__HPP
#define EMF_CPP_EMOF_PARAMETER__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/TypedElement.hpp>
#include <emof/MultiplicityElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Parameter :  public virtual ::emof::TypedElement,  public virtual ::emof::MultiplicityElement
{
public:

    typedef Parameter_ptr ptr_type;

    Parameter();
    virtual ~Parameter();

    typedef emof::Operation_ptr operation_t;

    operation_t getOperation() const;


    /*PROTECTED REGION ID(emof::Parameter public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class EmofPackage;

    emof::Operation_ptr m_operation;


    friend class ::emof::Operation;
    void setOperation(operation_t operation_);


    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(emof::Parameter protected) START*/
    /*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_PARAMETER__HPP
