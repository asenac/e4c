#include "CPackage.hpp"
#include "CFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace C;

CPackage::CPackage()
{
    m_eFactoryInstance = CFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_CDataType = ecoreFactory->createEClass();
    m_CDataType->setName("CDataType");
    addEClassifiers(m_CDataType);
    m_CIntegral = ecoreFactory->createEClass();
    m_CIntegral->setName("CIntegral");
    addEClassifiers(m_CIntegral);
    m_CFloating = ecoreFactory->createEClass();
    m_CFloating->setName("CFloating");
    addEClassifiers(m_CFloating);
    m_CBitField = ecoreFactory->createEClass();
    m_CBitField->setName("CBitField");
    addEClassifiers(m_CBitField);
    m_CVoid = ecoreFactory->createEClass();
    m_CVoid->setName("CVoid");
    addEClassifiers(m_CVoid);
    m_CEnumeration = ecoreFactory->createEClass();
    m_CEnumeration->setName("CEnumeration");
    addEClassifiers(m_CEnumeration);
    m_CInt = ecoreFactory->createEClass();
    m_CInt->setName("CInt");
    addEClassifiers(m_CInt);
    m_CChar = ecoreFactory->createEClass();
    m_CChar->setName("CChar");
    addEClassifiers(m_CChar);
    m_CDouble = ecoreFactory->createEClass();
    m_CDouble->setName("CDouble");
    addEClassifiers(m_CDouble);
    m_CFloat = ecoreFactory->createEClass();
    m_CFloat->setName("CFloat");
    addEClassifiers(m_CFloat);
    m_CLongDouble = ecoreFactory->createEClass();
    m_CLongDouble->setName("CLongDouble");
    addEClassifiers(m_CLongDouble);
    m_CUnsignedInt = ecoreFactory->createEClass();
    m_CUnsignedInt->setName("CUnsignedInt");
    addEClassifiers(m_CUnsignedInt);
    m_CLong = ecoreFactory->createEClass();
    m_CLong->setName("CLong");
    addEClassifiers(m_CLong);
    m_CLongLong = ecoreFactory->createEClass();
    m_CLongLong->setName("CLongLong");
    addEClassifiers(m_CLongLong);
    m_CShort = ecoreFactory->createEClass();
    m_CShort->setName("CShort");
    addEClassifiers(m_CShort);
    m_CSignedChar = ecoreFactory->createEClass();
    m_CSignedChar->setName("CSignedChar");
    addEClassifiers(m_CSignedChar);
    m_CUnsignedChar = ecoreFactory->createEClass();
    m_CUnsignedChar->setName("CUnsignedChar");
    addEClassifiers(m_CUnsignedChar);
    m_CWChar = ecoreFactory->createEClass();
    m_CWChar->setName("CWChar");
    addEClassifiers(m_CWChar);
    m_UnsignedLong = ecoreFactory->createEClass();
    m_UnsignedLong->setName("UnsignedLong");
    addEClassifiers(m_UnsignedLong);
    m_UnsignedLongLong = ecoreFactory->createEClass();
    m_UnsignedLongLong->setName("UnsignedLongLong");
    addEClassifiers(m_UnsignedLongLong);
    m_UnsignedShort = ecoreFactory->createEClass();
    m_UnsignedShort->setName("UnsignedShort");
    addEClassifiers(m_UnsignedShort);
    m_CClassifier = ecoreFactory->createEClass();
    m_CClassifier->setName("CClassifier");
    addEClassifiers(m_CClassifier);
    m_Derived = ecoreFactory->createEClass();
    m_Derived->setName("Derived");
    addEClassifiers(m_Derived);
    m_CStructureContents = ecoreFactory->createEClass();
    m_CStructureContents->setName("CStructureContents");
    addEClassifiers(m_CStructureContents);
    m_CStructured = ecoreFactory->createEClass();
    m_CStructured->setName("CStructured");
    addEClassifiers(m_CStructured);
    m_CStruct = ecoreFactory->createEClass();
    m_CStruct->setName("CStruct");
    addEClassifiers(m_CStruct);
    m_CUnion = ecoreFactory->createEClass();
    m_CUnion->setName("CUnion");
    addEClassifiers(m_CUnion);
    m_CSourceText = ecoreFactory->createEClass();
    m_CSourceText->setName("CSourceText");
    addEClassifiers(m_CSourceText);
    m_CTypedElement = ecoreFactory->createEClass();
    m_CTypedElement->setName("CTypedElement");
    addEClassifiers(m_CTypedElement);
    m_CStructuralFeature = ecoreFactory->createEClass();
    m_CStructuralFeature->setName("CStructuralFeature");
    addEClassifiers(m_CStructuralFeature);
    m_CField = ecoreFactory->createEClass();
    m_CField->setName("CField");
    addEClassifiers(m_CField);
    m_CParameter = ecoreFactory->createEClass();
    m_CParameter->setName("CParameter");
    addEClassifiers(m_CParameter);
    m_BehavioralFeature = ecoreFactory->createEClass();
    m_BehavioralFeature->setName("BehavioralFeature");
    addEClassifiers(m_BehavioralFeature);
    m_CFunction = ecoreFactory->createEClass();
    m_CFunction->setName("CFunction");
    addEClassifiers(m_CFunction);


    {
        m_CStructureContents__sc_container = ecoreFactory->createEReference();
        m_CStructureContents__sc_container->setName("sc_container");
        m_CStructureContents->addEStructuralFeatures(m_CStructureContents__sc_container);
        m_CStructureContents->addEAllStructuralFeatures(m_CStructureContents__sc_container);
        m_CStructureContents->addEReferences(m_CStructureContents__sc_container);
        m_CStructureContents->addEAllReferences(m_CStructureContents__sc_container);
    }
    {
        m_CStructured__contains = ecoreFactory->createEReference();
        m_CStructured__contains->setName("contains");
        m_CStructured->addEStructuralFeatures(m_CStructured__contains);
        m_CStructured->addEAllStructuralFeatures(m_CStructured__contains);
        m_CStructured->addEReferences(m_CStructured__contains);
        m_CStructured->addEAllReferences(m_CStructured__contains);
    }
    {
        m_CSourceText__source = ecoreFactory->createEAttribute();
        m_CSourceText__source->setName("source");
        m_CSourceText->addEStructuralFeatures(m_CSourceText__source);
        m_CSourceText->addEAllStructuralFeatures(m_CSourceText__source);
        m_CSourceText->addEAttributes(m_CSourceText__source);
        m_CSourceText->addEAllAttributes(m_CSourceText__source);
    }
    {
        m_CSourceText__fileName = ecoreFactory->createEAttribute();
        m_CSourceText__fileName->setName("fileName");
        m_CSourceText->addEStructuralFeatures(m_CSourceText__fileName);
        m_CSourceText->addEAllStructuralFeatures(m_CSourceText__fileName);
        m_CSourceText->addEAttributes(m_CSourceText__fileName);
        m_CSourceText->addEAllAttributes(m_CSourceText__fileName);
    }
    {
        m_CTypedElement__type = ecoreFactory->createEReference();
        m_CTypedElement__type->setName("type");
        m_CTypedElement->addEStructuralFeatures(m_CTypedElement__type);
        m_CTypedElement->addEAllStructuralFeatures(m_CTypedElement__type);
        m_CTypedElement->addEReferences(m_CTypedElement__type);
        m_CTypedElement->addEAllReferences(m_CTypedElement__type);
    }
    {
        m_CTypedElement__source = ecoreFactory->createEReference();
        m_CTypedElement__source->setName("source");
        m_CTypedElement->addEStructuralFeatures(m_CTypedElement__source);
        m_CTypedElement->addEAllStructuralFeatures(m_CTypedElement__source);
        m_CTypedElement->addEReferences(m_CTypedElement__source);
        m_CTypedElement->addEAllReferences(m_CTypedElement__source);
    }
    {
        m_CParameter__behavioralFeature = ecoreFactory->createEReference();
        m_CParameter__behavioralFeature->setName("behavioralFeature");
        m_CParameter->addEStructuralFeatures(m_CParameter__behavioralFeature);
        m_CParameter->addEAllStructuralFeatures(m_CParameter__behavioralFeature);
        m_CParameter->addEReferences(m_CParameter__behavioralFeature);
        m_CParameter->addEAllReferences(m_CParameter__behavioralFeature);
    }
    {
        m_BehavioralFeature__parameters = ecoreFactory->createEReference();
        m_BehavioralFeature__parameters->setName("parameters");
        m_BehavioralFeature->addEStructuralFeatures(m_BehavioralFeature__parameters);
        m_BehavioralFeature->addEAllStructuralFeatures(m_BehavioralFeature__parameters);
        m_BehavioralFeature->addEReferences(m_BehavioralFeature__parameters);
        m_BehavioralFeature->addEAllReferences(m_BehavioralFeature__parameters);
    }
    {
        m_CFunction__isVarArg = ecoreFactory->createEAttribute();
        m_CFunction__isVarArg->setName("isVarArg");
        m_CFunction->addEStructuralFeatures(m_CFunction__isVarArg);
        m_CFunction->addEAllStructuralFeatures(m_CFunction__isVarArg);
        m_CFunction->addEAttributes(m_CFunction__isVarArg);
        m_CFunction->addEAllAttributes(m_CFunction__isVarArg);
    }

    m_CDataType->addESuperTypes(m_CClassifier);
    m_CDataType->addAllEAllOperations(m_CClassifier->getEOperations());
    m_CDataType->addAllEAllReferences(m_CClassifier->getEReferences());
    m_CDataType->addAllEAllAttributes(m_CClassifier->getEAttributes());
    m_CDataType->addAllEAllStructuralFeatures(m_CClassifier->getEStructuralFeatures());
    m_CIntegral->addESuperTypes(m_CDataType);
    m_CIntegral->addAllEAllOperations(m_CDataType->getEOperations());
    m_CIntegral->addAllEAllReferences(m_CDataType->getEReferences());
    m_CIntegral->addAllEAllAttributes(m_CDataType->getEAttributes());
    m_CIntegral->addAllEAllStructuralFeatures(m_CDataType->getEStructuralFeatures());
    m_CFloating->addESuperTypes(m_CDataType);
    m_CFloating->addAllEAllOperations(m_CDataType->getEOperations());
    m_CFloating->addAllEAllReferences(m_CDataType->getEReferences());
    m_CFloating->addAllEAllAttributes(m_CDataType->getEAttributes());
    m_CFloating->addAllEAllStructuralFeatures(m_CDataType->getEStructuralFeatures());
    m_CBitField->addESuperTypes(m_CDataType);
    m_CBitField->addAllEAllOperations(m_CDataType->getEOperations());
    m_CBitField->addAllEAllReferences(m_CDataType->getEReferences());
    m_CBitField->addAllEAllAttributes(m_CDataType->getEAttributes());
    m_CBitField->addAllEAllStructuralFeatures(m_CDataType->getEStructuralFeatures());
    m_CVoid->addESuperTypes(m_CDataType);
    m_CVoid->addAllEAllOperations(m_CDataType->getEOperations());
    m_CVoid->addAllEAllReferences(m_CDataType->getEReferences());
    m_CVoid->addAllEAllAttributes(m_CDataType->getEAttributes());
    m_CVoid->addAllEAllStructuralFeatures(m_CDataType->getEStructuralFeatures());
    m_CEnumeration->addESuperTypes(m_CIntegral);
    m_CEnumeration->addAllEAllOperations(m_CIntegral->getEOperations());
    m_CEnumeration->addAllEAllReferences(m_CIntegral->getEReferences());
    m_CEnumeration->addAllEAllAttributes(m_CIntegral->getEAttributes());
    m_CEnumeration->addAllEAllStructuralFeatures(m_CIntegral->getEStructuralFeatures());
    m_CInt->addESuperTypes(m_CIntegral);
    m_CInt->addAllEAllOperations(m_CIntegral->getEOperations());
    m_CInt->addAllEAllReferences(m_CIntegral->getEReferences());
    m_CInt->addAllEAllAttributes(m_CIntegral->getEAttributes());
    m_CInt->addAllEAllStructuralFeatures(m_CIntegral->getEStructuralFeatures());
    m_CChar->addESuperTypes(m_CIntegral);
    m_CChar->addAllEAllOperations(m_CIntegral->getEOperations());
    m_CChar->addAllEAllReferences(m_CIntegral->getEReferences());
    m_CChar->addAllEAllAttributes(m_CIntegral->getEAttributes());
    m_CChar->addAllEAllStructuralFeatures(m_CIntegral->getEStructuralFeatures());
    m_CDouble->addESuperTypes(m_CFloating);
    m_CDouble->addAllEAllOperations(m_CFloating->getEOperations());
    m_CDouble->addAllEAllReferences(m_CFloating->getEReferences());
    m_CDouble->addAllEAllAttributes(m_CFloating->getEAttributes());
    m_CDouble->addAllEAllStructuralFeatures(m_CFloating->getEStructuralFeatures());
    m_CFloat->addESuperTypes(m_CFloating);
    m_CFloat->addAllEAllOperations(m_CFloating->getEOperations());
    m_CFloat->addAllEAllReferences(m_CFloating->getEReferences());
    m_CFloat->addAllEAllAttributes(m_CFloating->getEAttributes());
    m_CFloat->addAllEAllStructuralFeatures(m_CFloating->getEStructuralFeatures());
    m_CLongDouble->addESuperTypes(m_CFloating);
    m_CLongDouble->addAllEAllOperations(m_CFloating->getEOperations());
    m_CLongDouble->addAllEAllReferences(m_CFloating->getEReferences());
    m_CLongDouble->addAllEAllAttributes(m_CFloating->getEAttributes());
    m_CLongDouble->addAllEAllStructuralFeatures(m_CFloating->getEStructuralFeatures());
    m_CUnsignedInt->addESuperTypes(m_CInt);
    m_CUnsignedInt->addAllEAllOperations(m_CInt->getEOperations());
    m_CUnsignedInt->addAllEAllReferences(m_CInt->getEReferences());
    m_CUnsignedInt->addAllEAllAttributes(m_CInt->getEAttributes());
    m_CUnsignedInt->addAllEAllStructuralFeatures(m_CInt->getEStructuralFeatures());
    m_CLong->addESuperTypes(m_CInt);
    m_CLong->addAllEAllOperations(m_CInt->getEOperations());
    m_CLong->addAllEAllReferences(m_CInt->getEReferences());
    m_CLong->addAllEAllAttributes(m_CInt->getEAttributes());
    m_CLong->addAllEAllStructuralFeatures(m_CInt->getEStructuralFeatures());
    m_CLongLong->addESuperTypes(m_CInt);
    m_CLongLong->addAllEAllOperations(m_CInt->getEOperations());
    m_CLongLong->addAllEAllReferences(m_CInt->getEReferences());
    m_CLongLong->addAllEAllAttributes(m_CInt->getEAttributes());
    m_CLongLong->addAllEAllStructuralFeatures(m_CInt->getEStructuralFeatures());
    m_CShort->addESuperTypes(m_CInt);
    m_CShort->addAllEAllOperations(m_CInt->getEOperations());
    m_CShort->addAllEAllReferences(m_CInt->getEReferences());
    m_CShort->addAllEAllAttributes(m_CInt->getEAttributes());
    m_CShort->addAllEAllStructuralFeatures(m_CInt->getEStructuralFeatures());
    m_CSignedChar->addESuperTypes(m_CChar);
    m_CSignedChar->addAllEAllOperations(m_CChar->getEOperations());
    m_CSignedChar->addAllEAllReferences(m_CChar->getEReferences());
    m_CSignedChar->addAllEAllAttributes(m_CChar->getEAttributes());
    m_CSignedChar->addAllEAllStructuralFeatures(m_CChar->getEStructuralFeatures());
    m_CUnsignedChar->addESuperTypes(m_CChar);
    m_CUnsignedChar->addAllEAllOperations(m_CChar->getEOperations());
    m_CUnsignedChar->addAllEAllReferences(m_CChar->getEReferences());
    m_CUnsignedChar->addAllEAllAttributes(m_CChar->getEAttributes());
    m_CUnsignedChar->addAllEAllStructuralFeatures(m_CChar->getEStructuralFeatures());
    m_CWChar->addESuperTypes(m_CChar);
    m_CWChar->addAllEAllOperations(m_CChar->getEOperations());
    m_CWChar->addAllEAllReferences(m_CChar->getEReferences());
    m_CWChar->addAllEAllAttributes(m_CChar->getEAttributes());
    m_CWChar->addAllEAllStructuralFeatures(m_CChar->getEStructuralFeatures());
    m_UnsignedLong->addESuperTypes(m_CUnsignedInt);
    m_UnsignedLong->addAllEAllOperations(m_CUnsignedInt->getEOperations());
    m_UnsignedLong->addAllEAllReferences(m_CUnsignedInt->getEReferences());
    m_UnsignedLong->addAllEAllAttributes(m_CUnsignedInt->getEAttributes());
    m_UnsignedLong->addAllEAllStructuralFeatures(m_CUnsignedInt->getEStructuralFeatures());
    m_UnsignedLongLong->addESuperTypes(m_CUnsignedInt);
    m_UnsignedLongLong->addAllEAllOperations(m_CUnsignedInt->getEOperations());
    m_UnsignedLongLong->addAllEAllReferences(m_CUnsignedInt->getEReferences());
    m_UnsignedLongLong->addAllEAllAttributes(m_CUnsignedInt->getEAttributes());
    m_UnsignedLongLong->addAllEAllStructuralFeatures(m_CUnsignedInt->getEStructuralFeatures());
    m_UnsignedShort->addESuperTypes(m_CUnsignedInt);
    m_UnsignedShort->addAllEAllOperations(m_CUnsignedInt->getEOperations());
    m_UnsignedShort->addAllEAllReferences(m_CUnsignedInt->getEReferences());
    m_UnsignedShort->addAllEAllAttributes(m_CUnsignedInt->getEAttributes());
    m_UnsignedShort->addAllEAllStructuralFeatures(m_CUnsignedInt->getEStructuralFeatures());
    m_Derived->addESuperTypes(m_CClassifier);
    m_Derived->addAllEAllOperations(m_CClassifier->getEOperations());
    m_Derived->addAllEAllReferences(m_CClassifier->getEReferences());
    m_Derived->addAllEAllAttributes(m_CClassifier->getEAttributes());
    m_Derived->addAllEAllStructuralFeatures(m_CClassifier->getEStructuralFeatures());
    m_CStructured->addESuperTypes(m_CClassifier);
    m_CStructured->addAllEAllOperations(m_CClassifier->getEOperations());
    m_CStructured->addAllEAllReferences(m_CClassifier->getEReferences());
    m_CStructured->addAllEAllAttributes(m_CClassifier->getEAttributes());
    m_CStructured->addAllEAllStructuralFeatures(m_CClassifier->getEStructuralFeatures());
    m_CStructured->addESuperTypes(m_CStructureContents);
    m_CStructured->addAllEAllOperations(m_CStructureContents->getEOperations());
    m_CStructured->addAllEAllReferences(m_CStructureContents->getEReferences());
    m_CStructured->addAllEAllAttributes(m_CStructureContents->getEAttributes());
    m_CStructured->addAllEAllStructuralFeatures(m_CStructureContents->getEStructuralFeatures());
    m_CStruct->addESuperTypes(m_CStructured);
    m_CStruct->addAllEAllOperations(m_CStructured->getEOperations());
    m_CStruct->addAllEAllReferences(m_CStructured->getEReferences());
    m_CStruct->addAllEAllAttributes(m_CStructured->getEAttributes());
    m_CStruct->addAllEAllStructuralFeatures(m_CStructured->getEStructuralFeatures());
    m_CUnion->addESuperTypes(m_CStructured);
    m_CUnion->addAllEAllOperations(m_CStructured->getEOperations());
    m_CUnion->addAllEAllReferences(m_CStructured->getEReferences());
    m_CUnion->addAllEAllAttributes(m_CStructured->getEAttributes());
    m_CUnion->addAllEAllStructuralFeatures(m_CStructured->getEStructuralFeatures());
    m_CStructuralFeature->addESuperTypes(m_CStructureContents);
    m_CStructuralFeature->addAllEAllOperations(m_CStructureContents->getEOperations());
    m_CStructuralFeature->addAllEAllReferences(m_CStructureContents->getEReferences());
    m_CStructuralFeature->addAllEAllAttributes(m_CStructureContents->getEAttributes());
    m_CStructuralFeature->addAllEAllStructuralFeatures(m_CStructureContents->getEStructuralFeatures());
    m_CStructuralFeature->addESuperTypes(m_CTypedElement);
    m_CStructuralFeature->addAllEAllOperations(m_CTypedElement->getEOperations());
    m_CStructuralFeature->addAllEAllReferences(m_CTypedElement->getEReferences());
    m_CStructuralFeature->addAllEAllAttributes(m_CTypedElement->getEAttributes());
    m_CStructuralFeature->addAllEAllStructuralFeatures(m_CTypedElement->getEStructuralFeatures());
    m_CField->addESuperTypes(m_CStructuralFeature);
    m_CField->addAllEAllOperations(m_CStructuralFeature->getEOperations());
    m_CField->addAllEAllReferences(m_CStructuralFeature->getEReferences());
    m_CField->addAllEAllAttributes(m_CStructuralFeature->getEAttributes());
    m_CField->addAllEAllStructuralFeatures(m_CStructuralFeature->getEStructuralFeatures());
    m_CParameter->addESuperTypes(m_CTypedElement);
    m_CParameter->addAllEAllOperations(m_CTypedElement->getEOperations());
    m_CParameter->addAllEAllReferences(m_CTypedElement->getEReferences());
    m_CParameter->addAllEAllAttributes(m_CTypedElement->getEAttributes());
    m_CParameter->addAllEAllStructuralFeatures(m_CTypedElement->getEStructuralFeatures());
    m_CFunction->addESuperTypes(m_BehavioralFeature);
    m_CFunction->addAllEAllOperations(m_BehavioralFeature->getEOperations());
    m_CFunction->addAllEAllReferences(m_BehavioralFeature->getEReferences());
    m_CFunction->addAllEAllAttributes(m_BehavioralFeature->getEAttributes());
    m_CFunction->addAllEAllStructuralFeatures(m_BehavioralFeature->getEStructuralFeatures());


    m_CStructureContents->addFeatureAccesors(m_CStructureContents__sc_container,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CStructureContents_ptr >(o)->getSc_container()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CStructured->addFeatureAccesors(m_CStructured__contains,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CStructured_ptr >(o)->getContains()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CSourceText->addFeatureAccesors(m_CSourceText__source,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CSourceText_ptr >(o)->getSource()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CSourceText->addFeatureAccesors(m_CSourceText__fileName,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CSourceText_ptr >(o)->getFileName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CTypedElement->addFeatureAccesors(m_CTypedElement__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CTypedElement_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CTypedElement->addFeatureAccesors(m_CTypedElement__source,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CTypedElement_ptr >(o)->getSource()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CParameter->addFeatureAccesors(m_CParameter__behavioralFeature,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CParameter_ptr >(o)->getBehavioralFeature()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_BehavioralFeature->addFeatureAccesors(m_BehavioralFeature__parameters,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::BehavioralFeature_ptr >(o)->getParameters()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_CFunction->addFeatureAccesors(m_CFunction__isVarArg,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< C::CFunction_ptr >(o)->getIsVarArg()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const CPackage_ptr CPackage::_instance()
{
    static CPackage __instance;
    return &__instance;
}

ecore::EClass_ptr CPackage::getCDataType() const
{
    return m_CDataType;
}

e4c::tag_t CPackage::getTag_CDataType() const
{
    return e4c::tag< CDataType >::get();
}

ecore::EClass_ptr CPackage::getCIntegral() const
{
    return m_CIntegral;
}

e4c::tag_t CPackage::getTag_CIntegral() const
{
    return e4c::tag< CIntegral >::get();
}

ecore::EClass_ptr CPackage::getCFloating() const
{
    return m_CFloating;
}

e4c::tag_t CPackage::getTag_CFloating() const
{
    return e4c::tag< CFloating >::get();
}

ecore::EClass_ptr CPackage::getCBitField() const
{
    return m_CBitField;
}

e4c::tag_t CPackage::getTag_CBitField() const
{
    return e4c::tag< CBitField >::get();
}

ecore::EClass_ptr CPackage::getCVoid() const
{
    return m_CVoid;
}

e4c::tag_t CPackage::getTag_CVoid() const
{
    return e4c::tag< CVoid >::get();
}

ecore::EClass_ptr CPackage::getCEnumeration() const
{
    return m_CEnumeration;
}

e4c::tag_t CPackage::getTag_CEnumeration() const
{
    return e4c::tag< CEnumeration >::get();
}

ecore::EClass_ptr CPackage::getCInt() const
{
    return m_CInt;
}

e4c::tag_t CPackage::getTag_CInt() const
{
    return e4c::tag< CInt >::get();
}

ecore::EClass_ptr CPackage::getCChar() const
{
    return m_CChar;
}

e4c::tag_t CPackage::getTag_CChar() const
{
    return e4c::tag< CChar >::get();
}

ecore::EClass_ptr CPackage::getCDouble() const
{
    return m_CDouble;
}

e4c::tag_t CPackage::getTag_CDouble() const
{
    return e4c::tag< CDouble >::get();
}

ecore::EClass_ptr CPackage::getCFloat() const
{
    return m_CFloat;
}

e4c::tag_t CPackage::getTag_CFloat() const
{
    return e4c::tag< CFloat >::get();
}

ecore::EClass_ptr CPackage::getCLongDouble() const
{
    return m_CLongDouble;
}

e4c::tag_t CPackage::getTag_CLongDouble() const
{
    return e4c::tag< CLongDouble >::get();
}

ecore::EClass_ptr CPackage::getCUnsignedInt() const
{
    return m_CUnsignedInt;
}

e4c::tag_t CPackage::getTag_CUnsignedInt() const
{
    return e4c::tag< CUnsignedInt >::get();
}

ecore::EClass_ptr CPackage::getCLong() const
{
    return m_CLong;
}

e4c::tag_t CPackage::getTag_CLong() const
{
    return e4c::tag< CLong >::get();
}

ecore::EClass_ptr CPackage::getCLongLong() const
{
    return m_CLongLong;
}

e4c::tag_t CPackage::getTag_CLongLong() const
{
    return e4c::tag< CLongLong >::get();
}

ecore::EClass_ptr CPackage::getCShort() const
{
    return m_CShort;
}

e4c::tag_t CPackage::getTag_CShort() const
{
    return e4c::tag< CShort >::get();
}

ecore::EClass_ptr CPackage::getCSignedChar() const
{
    return m_CSignedChar;
}

e4c::tag_t CPackage::getTag_CSignedChar() const
{
    return e4c::tag< CSignedChar >::get();
}

ecore::EClass_ptr CPackage::getCUnsignedChar() const
{
    return m_CUnsignedChar;
}

e4c::tag_t CPackage::getTag_CUnsignedChar() const
{
    return e4c::tag< CUnsignedChar >::get();
}

ecore::EClass_ptr CPackage::getCWChar() const
{
    return m_CWChar;
}

e4c::tag_t CPackage::getTag_CWChar() const
{
    return e4c::tag< CWChar >::get();
}

ecore::EClass_ptr CPackage::getUnsignedLong() const
{
    return m_UnsignedLong;
}

e4c::tag_t CPackage::getTag_UnsignedLong() const
{
    return e4c::tag< UnsignedLong >::get();
}

ecore::EClass_ptr CPackage::getUnsignedLongLong() const
{
    return m_UnsignedLongLong;
}

e4c::tag_t CPackage::getTag_UnsignedLongLong() const
{
    return e4c::tag< UnsignedLongLong >::get();
}

ecore::EClass_ptr CPackage::getUnsignedShort() const
{
    return m_UnsignedShort;
}

e4c::tag_t CPackage::getTag_UnsignedShort() const
{
    return e4c::tag< UnsignedShort >::get();
}

ecore::EClass_ptr CPackage::getCClassifier() const
{
    return m_CClassifier;
}

e4c::tag_t CPackage::getTag_CClassifier() const
{
    return e4c::tag< CClassifier >::get();
}

ecore::EClass_ptr CPackage::getDerived() const
{
    return m_Derived;
}

e4c::tag_t CPackage::getTag_Derived() const
{
    return e4c::tag< Derived >::get();
}

ecore::EClass_ptr CPackage::getCStructureContents() const
{
    return m_CStructureContents;
}

e4c::tag_t CPackage::getTag_CStructureContents() const
{
    return e4c::tag< CStructureContents >::get();
}

ecore::EClass_ptr CPackage::getCStructured() const
{
    return m_CStructured;
}

e4c::tag_t CPackage::getTag_CStructured() const
{
    return e4c::tag< CStructured >::get();
}

ecore::EClass_ptr CPackage::getCStruct() const
{
    return m_CStruct;
}

e4c::tag_t CPackage::getTag_CStruct() const
{
    return e4c::tag< CStruct >::get();
}

ecore::EClass_ptr CPackage::getCUnion() const
{
    return m_CUnion;
}

e4c::tag_t CPackage::getTag_CUnion() const
{
    return e4c::tag< CUnion >::get();
}

ecore::EClass_ptr CPackage::getCSourceText() const
{
    return m_CSourceText;
}

e4c::tag_t CPackage::getTag_CSourceText() const
{
    return e4c::tag< CSourceText >::get();
}

ecore::EClass_ptr CPackage::getCTypedElement() const
{
    return m_CTypedElement;
}

e4c::tag_t CPackage::getTag_CTypedElement() const
{
    return e4c::tag< CTypedElement >::get();
}

ecore::EClass_ptr CPackage::getCStructuralFeature() const
{
    return m_CStructuralFeature;
}

e4c::tag_t CPackage::getTag_CStructuralFeature() const
{
    return e4c::tag< CStructuralFeature >::get();
}

ecore::EClass_ptr CPackage::getCField() const
{
    return m_CField;
}

e4c::tag_t CPackage::getTag_CField() const
{
    return e4c::tag< CField >::get();
}

ecore::EClass_ptr CPackage::getCParameter() const
{
    return m_CParameter;
}

e4c::tag_t CPackage::getTag_CParameter() const
{
    return e4c::tag< CParameter >::get();
}

ecore::EClass_ptr CPackage::getBehavioralFeature() const
{
    return m_BehavioralFeature;
}

e4c::tag_t CPackage::getTag_BehavioralFeature() const
{
    return e4c::tag< BehavioralFeature >::get();
}

ecore::EClass_ptr CPackage::getCFunction() const
{
    return m_CFunction;
}

e4c::tag_t CPackage::getTag_CFunction() const
{
    return e4c::tag< CFunction >::get();
}

e4c::tag_t CPackage::getTag_CStructureContents__sc_container() const
{
    return e4c::tag< CStructureContents__sc_container_tag >::get();
}

ecore::EReference_ptr CPackage::getCStructureContents__sc_container() const
{
    return m_CStructureContents__sc_container;
}

e4c::tag_t CPackage::getTag_CStructured__contains() const
{
    return e4c::tag< CStructured__contains_tag >::get();
}

ecore::EReference_ptr CPackage::getCStructured__contains() const
{
    return m_CStructured__contains;
}

e4c::tag_t CPackage::getTag_CSourceText__source() const
{
    return e4c::tag< CSourceText__source_tag >::get();
}

ecore::EAttribute_ptr CPackage::getCSourceText__source() const
{
    return m_CSourceText__source;
}

e4c::tag_t CPackage::getTag_CSourceText__fileName() const
{
    return e4c::tag< CSourceText__fileName_tag >::get();
}

ecore::EAttribute_ptr CPackage::getCSourceText__fileName() const
{
    return m_CSourceText__fileName;
}

e4c::tag_t CPackage::getTag_CTypedElement__type() const
{
    return e4c::tag< CTypedElement__type_tag >::get();
}

ecore::EReference_ptr CPackage::getCTypedElement__type() const
{
    return m_CTypedElement__type;
}

e4c::tag_t CPackage::getTag_CTypedElement__source() const
{
    return e4c::tag< CTypedElement__source_tag >::get();
}

ecore::EReference_ptr CPackage::getCTypedElement__source() const
{
    return m_CTypedElement__source;
}

e4c::tag_t CPackage::getTag_CParameter__behavioralFeature() const
{
    return e4c::tag< CParameter__behavioralFeature_tag >::get();
}

ecore::EReference_ptr CPackage::getCParameter__behavioralFeature() const
{
    return m_CParameter__behavioralFeature;
}

e4c::tag_t CPackage::getTag_BehavioralFeature__parameters() const
{
    return e4c::tag< BehavioralFeature__parameters_tag >::get();
}

ecore::EReference_ptr CPackage::getBehavioralFeature__parameters() const
{
    return m_BehavioralFeature__parameters;
}

e4c::tag_t CPackage::getTag_CFunction__isVarArg() const
{
    return e4c::tag< CFunction__isVarArg_tag >::get();
}

ecore::EAttribute_ptr CPackage::getCFunction__isVarArg() const
{
    return m_CFunction__isVarArg;
}


extern "C" ::ecore::EPackage_ptr e4c_C()
{
    return ::C::CPackage::_instance();
}
