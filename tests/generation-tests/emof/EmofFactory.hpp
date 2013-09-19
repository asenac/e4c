#ifndef EMF_CPP_EMOF_FACTORY_HPP
#define EMF_CPP_EMOF_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <emof/fwd.hpp>

namespace emof
{


class EmofFactory : public ::ecore::EFactory
{
public:

    static const EmofFactory_ptr _instance();

    Class_ptr createClass() const;
    Comment_ptr createComment() const;
    DataType_ptr createDataType() const;
    Enumeration_ptr createEnumeration() const;
    EnumerationLiteral_ptr createEnumerationLiteral() const;
    Extent_ptr createExtent() const;
    Object_ptr createObject() const;
    Operation_ptr createOperation() const;
    Package_ptr createPackage() const;
    Parameter_ptr createParameter() const;
    PrimitiveType_ptr createPrimitiveType() const;
    Property_ptr createProperty() const;
    Tag_ptr createTag() const;
    URIExtent_ptr createURIExtent() const;

protected:

    EmofFactory();
};

} // emof


#endif // EMF_CPP_EMOF_FACTORY_HPP
