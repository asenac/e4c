
#ifndef EMF_CPP_MYDSL_TYPE__HPP
#define EMF_CPP_MYDSL_TYPE__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


class Type : ::ecore::EObject
{
public:

    typedef Type_ptr ptr_type;

    Type();
    virtual ~Type();

    typedef ::ecore::EString name_t;

    void setName(name_t _name);
    name_t getName() const;


    /*PROTECTED REGION ID(myDsl::Type public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class MyDslPackage;

    name_t m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(myDsl::Type protected) START*/
    /*PROTECTED REGION END*/
};

} // myDsl


#endif // EMF_CPP_MYDSL_TYPE__HPP
