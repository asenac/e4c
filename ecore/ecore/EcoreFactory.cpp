#include "EcoreFactory.hpp"
#include "EcorePackage.hpp"
#include "include.hpp"

using namespace ecore;

EcoreFactory::EcoreFactory()
{
    // m_ePackage = EcorePackage::_instance();
    // std::bind(&EcoreFactory::createEAttribute, this);
    // m_ePackage->getTag_EAttribute();
    // std::bind(&EcoreFactory::createEAnnotation, this);
    // m_ePackage->getTag_EAnnotation();
    // std::bind(&EcoreFactory::createEClass, this);
    // m_ePackage->getTag_EClass();
    // std::bind(&EcoreFactory::createEDataType, this);
    // m_ePackage->getTag_EDataType();
    // std::bind(&EcoreFactory::createEEnum, this);
    // m_ePackage->getTag_EEnum();
    // std::bind(&EcoreFactory::createEEnumLiteral, this);
    // m_ePackage->getTag_EEnumLiteral();
    // std::bind(&EcoreFactory::createEFactory, this);
    // m_ePackage->getTag_EFactory();
    // std::bind(&EcoreFactory::createEObject, this);
    // m_ePackage->getTag_EObject();
    // std::bind(&EcoreFactory::createEOperation, this);
    // m_ePackage->getTag_EOperation();
    // std::bind(&EcoreFactory::createEPackage, this);
    // m_ePackage->getTag_EPackage();
    // std::bind(&EcoreFactory::createEParameter, this);
    // m_ePackage->getTag_EParameter();
    // std::bind(&EcoreFactory::createEReference, this);
    // m_ePackage->getTag_EReference();
    // std::bind(&EcoreFactory::createEStringToStringMapEntry, this);
    // m_ePackage->getTag_EStringToStringMapEntry();
    // std::bind(&EcoreFactory::createEGenericType, this);
    // m_ePackage->getTag_EGenericType();
    // std::bind(&EcoreFactory::createETypeParameter, this);
    // m_ePackage->getTag_ETypeParameter();
}

const EcoreFactory_ptr EcoreFactory::_instance()
{
    static EcoreFactory __instance;
    return &__instance;
}

EAttribute_ptr EcoreFactory::createEAttribute() const
{
    return new EAttribute();
}

EAnnotation_ptr EcoreFactory::createEAnnotation() const
{
    return new EAnnotation();
}

EClass_ptr EcoreFactory::createEClass() const
{
    return new EClass();
}

EDataType_ptr EcoreFactory::createEDataType() const
{
    return new EDataType();
}

EEnum_ptr EcoreFactory::createEEnum() const
{
    return new EEnum();
}

EEnumLiteral_ptr EcoreFactory::createEEnumLiteral() const
{
    return new EEnumLiteral();
}

EFactory_ptr EcoreFactory::createEFactory() const
{
    return new EFactory();
}

EObject_ptr EcoreFactory::createEObject() const
{
    return new EObject();
}

EOperation_ptr EcoreFactory::createEOperation() const
{
    return new EOperation();
}

EPackage_ptr EcoreFactory::createEPackage() const
{
    return new EPackage();
}

EParameter_ptr EcoreFactory::createEParameter() const
{
    return new EParameter();
}

EReference_ptr EcoreFactory::createEReference() const
{
    return new EReference();
}

EStringToStringMapEntry_ptr EcoreFactory::createEStringToStringMapEntry() const
{
    return new EStringToStringMapEntry();
}

EGenericType_ptr EcoreFactory::createEGenericType() const
{
    return new EGenericType();
}

ETypeParameter_ptr EcoreFactory::createETypeParameter() const
{
    return new ETypeParameter();
}

