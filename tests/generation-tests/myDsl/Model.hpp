
#ifndef EMF_CPP_MYDSL_MODEL__HPP
#define EMF_CPP_MYDSL_MODEL__HPP

#include <myDsl/fwd.hpp>
#include <myDsl/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace myDsl
{


class Model : ::ecore::EObject
{
public:

    typedef Model_ptr ptr_type;

    Model();
    virtual ~Model();

    typedef std::vector < myDsl::Import_ptr > imports_t;
    typedef std::vector < myDsl::Type_ptr > elements_t;

    imports_t getImports() const;
    void addImports(myDsl::Import_ptr imports_);
    void addAllImports(const imports_t& imports_);
    elements_t getElements() const;
    void addElements(myDsl::Type_ptr elements_);
    void addAllElements(const elements_t& elements_);


    /*PROTECTED REGION ID(myDsl::Model public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class MyDslPackage;

    std::vector < std::unique_ptr < myDsl::Import > > m_imports;
    std::vector < std::unique_ptr < myDsl::Type > > m_elements;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(myDsl::Model protected) START*/
    /*PROTECTED REGION END*/
};

} // myDsl


#endif // EMF_CPP_MYDSL_MODEL__HPP
