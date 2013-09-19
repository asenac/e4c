#ifndef EMF_CPP_ECORE_FACTORY_HPP
#define EMF_CPP_ECORE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <ecore/fwd.hpp>

namespace ecore
{


class EcoreFactory : public ::ecore::EFactory
{
public:

    static const EcoreFactory_ptr _instance();

    EAttribute_ptr createEAttribute() const;
    EAnnotation_ptr createEAnnotation() const;
    EClass_ptr createEClass() const;
    EDataType_ptr createEDataType() const;
    EEnum_ptr createEEnum() const;
    EEnumLiteral_ptr createEEnumLiteral() const;
    EFactory_ptr createEFactory() const;
    EObject_ptr createEObject() const;
    EOperation_ptr createEOperation() const;
    EPackage_ptr createEPackage() const;
    EParameter_ptr createEParameter() const;
    EReference_ptr createEReference() const;
    EStringToStringMapEntry_ptr createEStringToStringMapEntry() const;
    EGenericType_ptr createEGenericType() const;
    ETypeParameter_ptr createETypeParameter() const;

protected:

    EcoreFactory();
};

} // ecore


#endif // EMF_CPP_ECORE_FACTORY_HPP
