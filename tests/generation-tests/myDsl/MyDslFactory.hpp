#ifndef EMF_CPP_MYDSL_FACTORY_HPP
#define EMF_CPP_MYDSL_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <myDsl/fwd.hpp>

namespace myDsl
{


class MyDslFactory : public ::ecore::EFactory
{
public:

    static const MyDslFactory_ptr _instance();

    Model_ptr createModel() const;
    Import_ptr createImport() const;
    Type_ptr createType() const;
    SimpleType_ptr createSimpleType() const;
    Entity_ptr createEntity() const;
    Property_ptr createProperty() const;

protected:

    MyDslFactory();
};

} // myDsl


#endif // EMF_CPP_MYDSL_FACTORY_HPP
