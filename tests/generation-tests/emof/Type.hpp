
#ifndef EMF_CPP_EMOF_TYPE__HPP
#define EMF_CPP_EMOF_TYPE__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Type :  public virtual ::emof::NamedElement
{
public:

    typedef Type_ptr ptr_type;

    virtual ~Type();

    typedef emof::Package_ptr package_t;

    package_t getPackage() const;


    /*PROTECTED REGION ID(emof::Type public) START*/
    /*PROTECTED REGION END*/

protected:
    Type();

    friend class EmofPackage;

    emof::Package_ptr m_package;


    friend class ::emof::Package;
    void setPackage(package_t package_);


    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(emof::Type protected) START*/
    /*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_TYPE__HPP
