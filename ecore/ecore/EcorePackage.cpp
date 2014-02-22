#include "EcorePackage.hpp"
#include "EcoreFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace ecore;

EcorePackage::EcorePackage()
{
    m_eFactoryInstance = EcoreFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_EAttribute = ecoreFactory->createEClass();
    m_EAttribute->setName("EAttribute");
    addEClassifiers(m_EAttribute);
    m_EAnnotation = ecoreFactory->createEClass();
    m_EAnnotation->setName("EAnnotation");
    addEClassifiers(m_EAnnotation);
    m_EClass = ecoreFactory->createEClass();
    m_EClass->setName("EClass");
    addEClassifiers(m_EClass);
    m_EClassifier = ecoreFactory->createEClass();
    m_EClassifier->setName("EClassifier");
    addEClassifiers(m_EClassifier);
    m_EDataType = ecoreFactory->createEClass();
    m_EDataType->setName("EDataType");
    addEClassifiers(m_EDataType);
    m_EEnum = ecoreFactory->createEClass();
    m_EEnum->setName("EEnum");
    addEClassifiers(m_EEnum);
    m_EEnumLiteral = ecoreFactory->createEClass();
    m_EEnumLiteral->setName("EEnumLiteral");
    addEClassifiers(m_EEnumLiteral);
    m_EFactory = ecoreFactory->createEClass();
    m_EFactory->setName("EFactory");
    addEClassifiers(m_EFactory);
    m_EModelElement = ecoreFactory->createEClass();
    m_EModelElement->setName("EModelElement");
    addEClassifiers(m_EModelElement);
    m_ENamedElement = ecoreFactory->createEClass();
    m_ENamedElement->setName("ENamedElement");
    addEClassifiers(m_ENamedElement);
    m_EObject = ecoreFactory->createEClass();
    m_EObject->setName("EObject");
    addEClassifiers(m_EObject);
    m_EOperation = ecoreFactory->createEClass();
    m_EOperation->setName("EOperation");
    addEClassifiers(m_EOperation);
    m_EPackage = ecoreFactory->createEClass();
    m_EPackage->setName("EPackage");
    addEClassifiers(m_EPackage);
    m_EParameter = ecoreFactory->createEClass();
    m_EParameter->setName("EParameter");
    addEClassifiers(m_EParameter);
    m_EReference = ecoreFactory->createEClass();
    m_EReference->setName("EReference");
    addEClassifiers(m_EReference);
    m_EStructuralFeature = ecoreFactory->createEClass();
    m_EStructuralFeature->setName("EStructuralFeature");
    addEClassifiers(m_EStructuralFeature);
    m_ETypedElement = ecoreFactory->createEClass();
    m_ETypedElement->setName("ETypedElement");
    addEClassifiers(m_ETypedElement);
    m_EBigDecimal = ecoreFactory->createEDataType();
    m_EBigDecimal->setName("EBigDecimal");
    addEClassifiers(m_EBigDecimal);
    m_EBigInteger = ecoreFactory->createEDataType();
    m_EBigInteger->setName("EBigInteger");
    addEClassifiers(m_EBigInteger);
    m_EBoolean = ecoreFactory->createEDataType();
    m_EBoolean->setName("EBoolean");
    addEClassifiers(m_EBoolean);
    m_EBooleanObject = ecoreFactory->createEDataType();
    m_EBooleanObject->setName("EBooleanObject");
    addEClassifiers(m_EBooleanObject);
    m_EByte = ecoreFactory->createEDataType();
    m_EByte->setName("EByte");
    addEClassifiers(m_EByte);
    m_EByteArray = ecoreFactory->createEDataType();
    m_EByteArray->setName("EByteArray");
    addEClassifiers(m_EByteArray);
    m_EByteObject = ecoreFactory->createEDataType();
    m_EByteObject->setName("EByteObject");
    addEClassifiers(m_EByteObject);
    m_EChar = ecoreFactory->createEDataType();
    m_EChar->setName("EChar");
    addEClassifiers(m_EChar);
    m_ECharacterObject = ecoreFactory->createEDataType();
    m_ECharacterObject->setName("ECharacterObject");
    addEClassifiers(m_ECharacterObject);
    m_EDate = ecoreFactory->createEDataType();
    m_EDate->setName("EDate");
    addEClassifiers(m_EDate);
    m_EDiagnosticChain = ecoreFactory->createEDataType();
    m_EDiagnosticChain->setName("EDiagnosticChain");
    addEClassifiers(m_EDiagnosticChain);
    m_EDouble = ecoreFactory->createEDataType();
    m_EDouble->setName("EDouble");
    addEClassifiers(m_EDouble);
    m_EDoubleObject = ecoreFactory->createEDataType();
    m_EDoubleObject->setName("EDoubleObject");
    addEClassifiers(m_EDoubleObject);
    m_EEList = ecoreFactory->createEDataType();
    m_EEList->setName("EEList");
    addEClassifiers(m_EEList);
    m_EEnumerator = ecoreFactory->createEDataType();
    m_EEnumerator->setName("EEnumerator");
    addEClassifiers(m_EEnumerator);
    m_EFeatureMap = ecoreFactory->createEDataType();
    m_EFeatureMap->setName("EFeatureMap");
    addEClassifiers(m_EFeatureMap);
    m_EFeatureMapEntry = ecoreFactory->createEDataType();
    m_EFeatureMapEntry->setName("EFeatureMapEntry");
    addEClassifiers(m_EFeatureMapEntry);
    m_EFloat = ecoreFactory->createEDataType();
    m_EFloat->setName("EFloat");
    addEClassifiers(m_EFloat);
    m_EFloatObject = ecoreFactory->createEDataType();
    m_EFloatObject->setName("EFloatObject");
    addEClassifiers(m_EFloatObject);
    m_EInt = ecoreFactory->createEDataType();
    m_EInt->setName("EInt");
    addEClassifiers(m_EInt);
    m_EIntegerObject = ecoreFactory->createEDataType();
    m_EIntegerObject->setName("EIntegerObject");
    addEClassifiers(m_EIntegerObject);
    m_EJavaClass = ecoreFactory->createEDataType();
    m_EJavaClass->setName("EJavaClass");
    addEClassifiers(m_EJavaClass);
    m_EJavaObject = ecoreFactory->createEDataType();
    m_EJavaObject->setName("EJavaObject");
    addEClassifiers(m_EJavaObject);
    m_ELong = ecoreFactory->createEDataType();
    m_ELong->setName("ELong");
    addEClassifiers(m_ELong);
    m_ELongObject = ecoreFactory->createEDataType();
    m_ELongObject->setName("ELongObject");
    addEClassifiers(m_ELongObject);
    m_EMap = ecoreFactory->createEDataType();
    m_EMap->setName("EMap");
    addEClassifiers(m_EMap);
    m_EResource = ecoreFactory->createEDataType();
    m_EResource->setName("EResource");
    addEClassifiers(m_EResource);
    m_EResourceSet = ecoreFactory->createEDataType();
    m_EResourceSet->setName("EResourceSet");
    addEClassifiers(m_EResourceSet);
    m_EShort = ecoreFactory->createEDataType();
    m_EShort->setName("EShort");
    addEClassifiers(m_EShort);
    m_EShortObject = ecoreFactory->createEDataType();
    m_EShortObject->setName("EShortObject");
    addEClassifiers(m_EShortObject);
    m_EString = ecoreFactory->createEDataType();
    m_EString->setName("EString");
    addEClassifiers(m_EString);
    m_EStringToStringMapEntry = ecoreFactory->createEClass();
    m_EStringToStringMapEntry->setName("EStringToStringMapEntry");
    addEClassifiers(m_EStringToStringMapEntry);
    m_ETreeIterator = ecoreFactory->createEDataType();
    m_ETreeIterator->setName("ETreeIterator");
    addEClassifiers(m_ETreeIterator);
    m_EGenericType = ecoreFactory->createEClass();
    m_EGenericType->setName("EGenericType");
    addEClassifiers(m_EGenericType);
    m_ETypeParameter = ecoreFactory->createEClass();
    m_ETypeParameter->setName("ETypeParameter");
    addEClassifiers(m_ETypeParameter);
    m_EInvocationTargetException = ecoreFactory->createEDataType();
    m_EInvocationTargetException->setName("EInvocationTargetException");
    addEClassifiers(m_EInvocationTargetException);

    m_EBigDecimal->setSerializable(true);
    m_EBigInteger->setSerializable(true);
    m_EBoolean->setSerializable(true);
    m_EBooleanObject->setSerializable(true);
    m_EByte->setSerializable(true);
    m_EByteArray->setSerializable(true);
    m_EByteObject->setSerializable(true);
    m_EChar->setSerializable(true);
    m_ECharacterObject->setSerializable(true);
    m_EDate->setSerializable(true);
    m_EDiagnosticChain->setSerializable(false);
    m_EDouble->setSerializable(true);
    m_EDoubleObject->setSerializable(true);
    m_EEList->setSerializable(false);
    m_EEnumerator->setSerializable(false);
    m_EFeatureMap->setSerializable(false);
    m_EFeatureMapEntry->setSerializable(false);
    m_EFloat->setSerializable(true);
    m_EFloatObject->setSerializable(true);
    m_EInt->setSerializable(true);
    m_EIntegerObject->setSerializable(true);
    m_EJavaClass->setSerializable(true);
    m_EJavaObject->setSerializable(true);
    m_ELong->setSerializable(true);
    m_ELongObject->setSerializable(true);
    m_EMap->setSerializable(false);
    m_EResource->setSerializable(false);
    m_EResourceSet->setSerializable(false);
    m_EShort->setSerializable(true);
    m_EShortObject->setSerializable(true);
    m_EString->setSerializable(true);
    m_ETreeIterator->setSerializable(false);
    m_EInvocationTargetException->setSerializable(false);

    {
        m_EAttribute__iD = ecoreFactory->createEAttribute();
        m_EAttribute__iD->setName("iD");
        m_EAttribute->addEStructuralFeatures(m_EAttribute__iD);
        m_EAttribute->addEAllStructuralFeatures(m_EAttribute__iD);
        m_EAttribute->addEAttributes(m_EAttribute__iD);
        m_EAttribute->addEAllAttributes(m_EAttribute__iD);
    }
    {
        m_EAttribute__eAttributeType = ecoreFactory->createEReference();
        m_EAttribute__eAttributeType->setName("eAttributeType");
        m_EAttribute->addEStructuralFeatures(m_EAttribute__eAttributeType);
        m_EAttribute->addEAllStructuralFeatures(m_EAttribute__eAttributeType);
        m_EAttribute->addEReferences(m_EAttribute__eAttributeType);
        m_EAttribute->addEAllReferences(m_EAttribute__eAttributeType);
    }
    {
        m_EAnnotation__source = ecoreFactory->createEAttribute();
        m_EAnnotation__source->setName("source");
        m_EAnnotation->addEStructuralFeatures(m_EAnnotation__source);
        m_EAnnotation->addEAllStructuralFeatures(m_EAnnotation__source);
        m_EAnnotation->addEAttributes(m_EAnnotation__source);
        m_EAnnotation->addEAllAttributes(m_EAnnotation__source);
    }
    {
        m_EAnnotation__details = ecoreFactory->createEReference();
        m_EAnnotation__details->setName("details");
        m_EAnnotation->addEStructuralFeatures(m_EAnnotation__details);
        m_EAnnotation->addEAllStructuralFeatures(m_EAnnotation__details);
        m_EAnnotation->addEReferences(m_EAnnotation__details);
        m_EAnnotation->addEAllReferences(m_EAnnotation__details);
    }
    {
        m_EAnnotation__eModelElement = ecoreFactory->createEReference();
        m_EAnnotation__eModelElement->setName("eModelElement");
        m_EAnnotation->addEStructuralFeatures(m_EAnnotation__eModelElement);
        m_EAnnotation->addEAllStructuralFeatures(m_EAnnotation__eModelElement);
        m_EAnnotation->addEReferences(m_EAnnotation__eModelElement);
        m_EAnnotation->addEAllReferences(m_EAnnotation__eModelElement);
    }
    {
        m_EAnnotation__contents = ecoreFactory->createEReference();
        m_EAnnotation__contents->setName("contents");
        m_EAnnotation->addEStructuralFeatures(m_EAnnotation__contents);
        m_EAnnotation->addEAllStructuralFeatures(m_EAnnotation__contents);
        m_EAnnotation->addEReferences(m_EAnnotation__contents);
        m_EAnnotation->addEAllReferences(m_EAnnotation__contents);
    }
    {
        m_EAnnotation__references = ecoreFactory->createEReference();
        m_EAnnotation__references->setName("references");
        m_EAnnotation->addEStructuralFeatures(m_EAnnotation__references);
        m_EAnnotation->addEAllStructuralFeatures(m_EAnnotation__references);
        m_EAnnotation->addEReferences(m_EAnnotation__references);
        m_EAnnotation->addEAllReferences(m_EAnnotation__references);
    }
    {
        m_EClass__abstract = ecoreFactory->createEAttribute();
        m_EClass__abstract->setName("abstract");
        m_EClass->addEStructuralFeatures(m_EClass__abstract);
        m_EClass->addEAllStructuralFeatures(m_EClass__abstract);
        m_EClass->addEAttributes(m_EClass__abstract);
        m_EClass->addEAllAttributes(m_EClass__abstract);
    }
    {
        m_EClass__interface = ecoreFactory->createEAttribute();
        m_EClass__interface->setName("interface");
        m_EClass->addEStructuralFeatures(m_EClass__interface);
        m_EClass->addEAllStructuralFeatures(m_EClass__interface);
        m_EClass->addEAttributes(m_EClass__interface);
        m_EClass->addEAllAttributes(m_EClass__interface);
    }
    {
        m_EClass__eSuperTypes = ecoreFactory->createEReference();
        m_EClass__eSuperTypes->setName("eSuperTypes");
        m_EClass->addEStructuralFeatures(m_EClass__eSuperTypes);
        m_EClass->addEAllStructuralFeatures(m_EClass__eSuperTypes);
        m_EClass->addEReferences(m_EClass__eSuperTypes);
        m_EClass->addEAllReferences(m_EClass__eSuperTypes);
    }
    {
        m_EClass__eOperations = ecoreFactory->createEReference();
        m_EClass__eOperations->setName("eOperations");
        m_EClass->addEStructuralFeatures(m_EClass__eOperations);
        m_EClass->addEAllStructuralFeatures(m_EClass__eOperations);
        m_EClass->addEReferences(m_EClass__eOperations);
        m_EClass->addEAllReferences(m_EClass__eOperations);
    }
    {
        m_EClass__eAllAttributes = ecoreFactory->createEReference();
        m_EClass__eAllAttributes->setName("eAllAttributes");
        m_EClass->addEStructuralFeatures(m_EClass__eAllAttributes);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllAttributes);
        m_EClass->addEReferences(m_EClass__eAllAttributes);
        m_EClass->addEAllReferences(m_EClass__eAllAttributes);
    }
    {
        m_EClass__eAllReferences = ecoreFactory->createEReference();
        m_EClass__eAllReferences->setName("eAllReferences");
        m_EClass->addEStructuralFeatures(m_EClass__eAllReferences);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllReferences);
        m_EClass->addEReferences(m_EClass__eAllReferences);
        m_EClass->addEAllReferences(m_EClass__eAllReferences);
    }
    {
        m_EClass__eReferences = ecoreFactory->createEReference();
        m_EClass__eReferences->setName("eReferences");
        m_EClass->addEStructuralFeatures(m_EClass__eReferences);
        m_EClass->addEAllStructuralFeatures(m_EClass__eReferences);
        m_EClass->addEReferences(m_EClass__eReferences);
        m_EClass->addEAllReferences(m_EClass__eReferences);
    }
    {
        m_EClass__eAttributes = ecoreFactory->createEReference();
        m_EClass__eAttributes->setName("eAttributes");
        m_EClass->addEStructuralFeatures(m_EClass__eAttributes);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAttributes);
        m_EClass->addEReferences(m_EClass__eAttributes);
        m_EClass->addEAllReferences(m_EClass__eAttributes);
    }
    {
        m_EClass__eAllContainments = ecoreFactory->createEReference();
        m_EClass__eAllContainments->setName("eAllContainments");
        m_EClass->addEStructuralFeatures(m_EClass__eAllContainments);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllContainments);
        m_EClass->addEReferences(m_EClass__eAllContainments);
        m_EClass->addEAllReferences(m_EClass__eAllContainments);
    }
    {
        m_EClass__eAllOperations = ecoreFactory->createEReference();
        m_EClass__eAllOperations->setName("eAllOperations");
        m_EClass->addEStructuralFeatures(m_EClass__eAllOperations);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllOperations);
        m_EClass->addEReferences(m_EClass__eAllOperations);
        m_EClass->addEAllReferences(m_EClass__eAllOperations);
    }
    {
        m_EClass__eAllStructuralFeatures = ecoreFactory->createEReference();
        m_EClass__eAllStructuralFeatures->setName("eAllStructuralFeatures");
        m_EClass->addEStructuralFeatures(m_EClass__eAllStructuralFeatures);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllStructuralFeatures);
        m_EClass->addEReferences(m_EClass__eAllStructuralFeatures);
        m_EClass->addEAllReferences(m_EClass__eAllStructuralFeatures);
    }
    {
        m_EClass__eAllSuperTypes = ecoreFactory->createEReference();
        m_EClass__eAllSuperTypes->setName("eAllSuperTypes");
        m_EClass->addEStructuralFeatures(m_EClass__eAllSuperTypes);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllSuperTypes);
        m_EClass->addEReferences(m_EClass__eAllSuperTypes);
        m_EClass->addEAllReferences(m_EClass__eAllSuperTypes);
    }
    {
        m_EClass__eIDAttribute = ecoreFactory->createEReference();
        m_EClass__eIDAttribute->setName("eIDAttribute");
        m_EClass->addEStructuralFeatures(m_EClass__eIDAttribute);
        m_EClass->addEAllStructuralFeatures(m_EClass__eIDAttribute);
        m_EClass->addEReferences(m_EClass__eIDAttribute);
        m_EClass->addEAllReferences(m_EClass__eIDAttribute);
    }
    {
        m_EClass__eStructuralFeatures = ecoreFactory->createEReference();
        m_EClass__eStructuralFeatures->setName("eStructuralFeatures");
        m_EClass->addEStructuralFeatures(m_EClass__eStructuralFeatures);
        m_EClass->addEAllStructuralFeatures(m_EClass__eStructuralFeatures);
        m_EClass->addEReferences(m_EClass__eStructuralFeatures);
        m_EClass->addEAllReferences(m_EClass__eStructuralFeatures);
    }
    {
        m_EClass__eGenericSuperTypes = ecoreFactory->createEReference();
        m_EClass__eGenericSuperTypes->setName("eGenericSuperTypes");
        m_EClass->addEStructuralFeatures(m_EClass__eGenericSuperTypes);
        m_EClass->addEAllStructuralFeatures(m_EClass__eGenericSuperTypes);
        m_EClass->addEReferences(m_EClass__eGenericSuperTypes);
        m_EClass->addEAllReferences(m_EClass__eGenericSuperTypes);
    }
    {
        m_EClass__eAllGenericSuperTypes = ecoreFactory->createEReference();
        m_EClass__eAllGenericSuperTypes->setName("eAllGenericSuperTypes");
        m_EClass->addEStructuralFeatures(m_EClass__eAllGenericSuperTypes);
        m_EClass->addEAllStructuralFeatures(m_EClass__eAllGenericSuperTypes);
        m_EClass->addEReferences(m_EClass__eAllGenericSuperTypes);
        m_EClass->addEAllReferences(m_EClass__eAllGenericSuperTypes);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("isSuperTypeOf");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getFeatureCount");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEStructuralFeature");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getFeatureID");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEStructuralFeature");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOperationCount");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEOperation");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOperationID");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOverride");
        m_EClass->addEOperations(op);
        m_EClass->addEAllOperations(op);
    }
    {
        m_EClassifier__instanceClassName = ecoreFactory->createEAttribute();
        m_EClassifier__instanceClassName->setName("instanceClassName");
        m_EClassifier->addEStructuralFeatures(m_EClassifier__instanceClassName);
        m_EClassifier->addEAllStructuralFeatures(m_EClassifier__instanceClassName);
        m_EClassifier->addEAttributes(m_EClassifier__instanceClassName);
        m_EClassifier->addEAllAttributes(m_EClassifier__instanceClassName);
    }
    {
        m_EClassifier__instanceClass = ecoreFactory->createEAttribute();
        m_EClassifier__instanceClass->setName("instanceClass");
        m_EClassifier->addEStructuralFeatures(m_EClassifier__instanceClass);
        m_EClassifier->addEAllStructuralFeatures(m_EClassifier__instanceClass);
        m_EClassifier->addEAttributes(m_EClassifier__instanceClass);
        m_EClassifier->addEAllAttributes(m_EClassifier__instanceClass);
    }
    {
        m_EClassifier__defaultValue = ecoreFactory->createEAttribute();
        m_EClassifier__defaultValue->setName("defaultValue");
        m_EClassifier->addEStructuralFeatures(m_EClassifier__defaultValue);
        m_EClassifier->addEAllStructuralFeatures(m_EClassifier__defaultValue);
        m_EClassifier->addEAttributes(m_EClassifier__defaultValue);
        m_EClassifier->addEAllAttributes(m_EClassifier__defaultValue);
    }
    {
        m_EClassifier__instanceTypeName = ecoreFactory->createEAttribute();
        m_EClassifier__instanceTypeName->setName("instanceTypeName");
        m_EClassifier->addEStructuralFeatures(m_EClassifier__instanceTypeName);
        m_EClassifier->addEAllStructuralFeatures(m_EClassifier__instanceTypeName);
        m_EClassifier->addEAttributes(m_EClassifier__instanceTypeName);
        m_EClassifier->addEAllAttributes(m_EClassifier__instanceTypeName);
    }
    {
        m_EClassifier__ePackage = ecoreFactory->createEReference();
        m_EClassifier__ePackage->setName("ePackage");
        m_EClassifier->addEStructuralFeatures(m_EClassifier__ePackage);
        m_EClassifier->addEAllStructuralFeatures(m_EClassifier__ePackage);
        m_EClassifier->addEReferences(m_EClassifier__ePackage);
        m_EClassifier->addEAllReferences(m_EClassifier__ePackage);
    }
    {
        m_EClassifier__eTypeParameters = ecoreFactory->createEReference();
        m_EClassifier__eTypeParameters->setName("eTypeParameters");
        m_EClassifier->addEStructuralFeatures(m_EClassifier__eTypeParameters);
        m_EClassifier->addEAllStructuralFeatures(m_EClassifier__eTypeParameters);
        m_EClassifier->addEReferences(m_EClassifier__eTypeParameters);
        m_EClassifier->addEAllReferences(m_EClassifier__eTypeParameters);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("isInstance");
        m_EClassifier->addEOperations(op);
        m_EClassifier->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getClassifierID");
        m_EClassifier->addEOperations(op);
        m_EClassifier->addEAllOperations(op);
    }
    {
        m_EDataType__serializable = ecoreFactory->createEAttribute();
        m_EDataType__serializable->setName("serializable");
        m_EDataType->addEStructuralFeatures(m_EDataType__serializable);
        m_EDataType->addEAllStructuralFeatures(m_EDataType__serializable);
        m_EDataType->addEAttributes(m_EDataType__serializable);
        m_EDataType->addEAllAttributes(m_EDataType__serializable);
    }
    {
        m_EEnum__eLiterals = ecoreFactory->createEReference();
        m_EEnum__eLiterals->setName("eLiterals");
        m_EEnum->addEStructuralFeatures(m_EEnum__eLiterals);
        m_EEnum->addEAllStructuralFeatures(m_EEnum__eLiterals);
        m_EEnum->addEReferences(m_EEnum__eLiterals);
        m_EEnum->addEAllReferences(m_EEnum__eLiterals);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEEnumLiteral");
        m_EEnum->addEOperations(op);
        m_EEnum->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEEnumLiteral");
        m_EEnum->addEOperations(op);
        m_EEnum->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEEnumLiteralByLiteral");
        m_EEnum->addEOperations(op);
        m_EEnum->addEAllOperations(op);
    }
    {
        m_EEnumLiteral__value = ecoreFactory->createEAttribute();
        m_EEnumLiteral__value->setName("value");
        m_EEnumLiteral->addEStructuralFeatures(m_EEnumLiteral__value);
        m_EEnumLiteral->addEAllStructuralFeatures(m_EEnumLiteral__value);
        m_EEnumLiteral->addEAttributes(m_EEnumLiteral__value);
        m_EEnumLiteral->addEAllAttributes(m_EEnumLiteral__value);
    }
    {
        m_EEnumLiteral__instance = ecoreFactory->createEAttribute();
        m_EEnumLiteral__instance->setName("instance");
        m_EEnumLiteral->addEStructuralFeatures(m_EEnumLiteral__instance);
        m_EEnumLiteral->addEAllStructuralFeatures(m_EEnumLiteral__instance);
        m_EEnumLiteral->addEAttributes(m_EEnumLiteral__instance);
        m_EEnumLiteral->addEAllAttributes(m_EEnumLiteral__instance);
    }
    {
        m_EEnumLiteral__literal = ecoreFactory->createEAttribute();
        m_EEnumLiteral__literal->setName("literal");
        m_EEnumLiteral->addEStructuralFeatures(m_EEnumLiteral__literal);
        m_EEnumLiteral->addEAllStructuralFeatures(m_EEnumLiteral__literal);
        m_EEnumLiteral->addEAttributes(m_EEnumLiteral__literal);
        m_EEnumLiteral->addEAllAttributes(m_EEnumLiteral__literal);
    }
    {
        m_EEnumLiteral__eEnum = ecoreFactory->createEReference();
        m_EEnumLiteral__eEnum->setName("eEnum");
        m_EEnumLiteral->addEStructuralFeatures(m_EEnumLiteral__eEnum);
        m_EEnumLiteral->addEAllStructuralFeatures(m_EEnumLiteral__eEnum);
        m_EEnumLiteral->addEReferences(m_EEnumLiteral__eEnum);
        m_EEnumLiteral->addEAllReferences(m_EEnumLiteral__eEnum);
    }
    {
        m_EFactory__ePackage = ecoreFactory->createEReference();
        m_EFactory__ePackage->setName("ePackage");
        m_EFactory->addEStructuralFeatures(m_EFactory__ePackage);
        m_EFactory->addEAllStructuralFeatures(m_EFactory__ePackage);
        m_EFactory->addEReferences(m_EFactory__ePackage);
        m_EFactory->addEAllReferences(m_EFactory__ePackage);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("create");
        m_EFactory->addEOperations(op);
        m_EFactory->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("createFromString");
        m_EFactory->addEOperations(op);
        m_EFactory->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("convertToString");
        m_EFactory->addEOperations(op);
        m_EFactory->addEAllOperations(op);
    }
    {
        m_EModelElement__eAnnotations = ecoreFactory->createEReference();
        m_EModelElement__eAnnotations->setName("eAnnotations");
        m_EModelElement->addEStructuralFeatures(m_EModelElement__eAnnotations);
        m_EModelElement->addEAllStructuralFeatures(m_EModelElement__eAnnotations);
        m_EModelElement->addEReferences(m_EModelElement__eAnnotations);
        m_EModelElement->addEAllReferences(m_EModelElement__eAnnotations);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEAnnotation");
        m_EModelElement->addEOperations(op);
        m_EModelElement->addEAllOperations(op);
    }
    {
        m_ENamedElement__name = ecoreFactory->createEAttribute();
        m_ENamedElement__name->setName("name");
        m_ENamedElement->addEStructuralFeatures(m_ENamedElement__name);
        m_ENamedElement->addEAllStructuralFeatures(m_ENamedElement__name);
        m_ENamedElement->addEAttributes(m_ENamedElement__name);
        m_ENamedElement->addEAllAttributes(m_ENamedElement__name);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eClass");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eIsProxy");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eResource");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eContainer");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eContainingFeature");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eContainmentFeature");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eContents");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eAllContents");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eCrossReferences");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eGet");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eGet");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eSet");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eIsSet");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eUnset");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("eInvoke");
        m_EObject->addEOperations(op);
        m_EObject->addEAllOperations(op);
    }
    {
        m_EOperation__eContainingClass = ecoreFactory->createEReference();
        m_EOperation__eContainingClass->setName("eContainingClass");
        m_EOperation->addEStructuralFeatures(m_EOperation__eContainingClass);
        m_EOperation->addEAllStructuralFeatures(m_EOperation__eContainingClass);
        m_EOperation->addEReferences(m_EOperation__eContainingClass);
        m_EOperation->addEAllReferences(m_EOperation__eContainingClass);
    }
    {
        m_EOperation__eTypeParameters = ecoreFactory->createEReference();
        m_EOperation__eTypeParameters->setName("eTypeParameters");
        m_EOperation->addEStructuralFeatures(m_EOperation__eTypeParameters);
        m_EOperation->addEAllStructuralFeatures(m_EOperation__eTypeParameters);
        m_EOperation->addEReferences(m_EOperation__eTypeParameters);
        m_EOperation->addEAllReferences(m_EOperation__eTypeParameters);
    }
    {
        m_EOperation__eParameters = ecoreFactory->createEReference();
        m_EOperation__eParameters->setName("eParameters");
        m_EOperation->addEStructuralFeatures(m_EOperation__eParameters);
        m_EOperation->addEAllStructuralFeatures(m_EOperation__eParameters);
        m_EOperation->addEReferences(m_EOperation__eParameters);
        m_EOperation->addEAllReferences(m_EOperation__eParameters);
    }
    {
        m_EOperation__eExceptions = ecoreFactory->createEReference();
        m_EOperation__eExceptions->setName("eExceptions");
        m_EOperation->addEStructuralFeatures(m_EOperation__eExceptions);
        m_EOperation->addEAllStructuralFeatures(m_EOperation__eExceptions);
        m_EOperation->addEReferences(m_EOperation__eExceptions);
        m_EOperation->addEAllReferences(m_EOperation__eExceptions);
    }
    {
        m_EOperation__eGenericExceptions = ecoreFactory->createEReference();
        m_EOperation__eGenericExceptions->setName("eGenericExceptions");
        m_EOperation->addEStructuralFeatures(m_EOperation__eGenericExceptions);
        m_EOperation->addEAllStructuralFeatures(m_EOperation__eGenericExceptions);
        m_EOperation->addEReferences(m_EOperation__eGenericExceptions);
        m_EOperation->addEAllReferences(m_EOperation__eGenericExceptions);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getOperationID");
        m_EOperation->addEOperations(op);
        m_EOperation->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("isOverrideOf");
        m_EOperation->addEOperations(op);
        m_EOperation->addEAllOperations(op);
    }
    {
        m_EPackage__nsURI = ecoreFactory->createEAttribute();
        m_EPackage__nsURI->setName("nsURI");
        m_EPackage->addEStructuralFeatures(m_EPackage__nsURI);
        m_EPackage->addEAllStructuralFeatures(m_EPackage__nsURI);
        m_EPackage->addEAttributes(m_EPackage__nsURI);
        m_EPackage->addEAllAttributes(m_EPackage__nsURI);
    }
    {
        m_EPackage__nsPrefix = ecoreFactory->createEAttribute();
        m_EPackage__nsPrefix->setName("nsPrefix");
        m_EPackage->addEStructuralFeatures(m_EPackage__nsPrefix);
        m_EPackage->addEAllStructuralFeatures(m_EPackage__nsPrefix);
        m_EPackage->addEAttributes(m_EPackage__nsPrefix);
        m_EPackage->addEAllAttributes(m_EPackage__nsPrefix);
    }
    {
        m_EPackage__eFactoryInstance = ecoreFactory->createEReference();
        m_EPackage__eFactoryInstance->setName("eFactoryInstance");
        m_EPackage->addEStructuralFeatures(m_EPackage__eFactoryInstance);
        m_EPackage->addEAllStructuralFeatures(m_EPackage__eFactoryInstance);
        m_EPackage->addEReferences(m_EPackage__eFactoryInstance);
        m_EPackage->addEAllReferences(m_EPackage__eFactoryInstance);
    }
    {
        m_EPackage__eClassifiers = ecoreFactory->createEReference();
        m_EPackage__eClassifiers->setName("eClassifiers");
        m_EPackage->addEStructuralFeatures(m_EPackage__eClassifiers);
        m_EPackage->addEAllStructuralFeatures(m_EPackage__eClassifiers);
        m_EPackage->addEReferences(m_EPackage__eClassifiers);
        m_EPackage->addEAllReferences(m_EPackage__eClassifiers);
    }
    {
        m_EPackage__eSubpackages = ecoreFactory->createEReference();
        m_EPackage__eSubpackages->setName("eSubpackages");
        m_EPackage->addEStructuralFeatures(m_EPackage__eSubpackages);
        m_EPackage->addEAllStructuralFeatures(m_EPackage__eSubpackages);
        m_EPackage->addEReferences(m_EPackage__eSubpackages);
        m_EPackage->addEAllReferences(m_EPackage__eSubpackages);
    }
    {
        m_EPackage__eSuperPackage = ecoreFactory->createEReference();
        m_EPackage__eSuperPackage->setName("eSuperPackage");
        m_EPackage->addEStructuralFeatures(m_EPackage__eSuperPackage);
        m_EPackage->addEAllStructuralFeatures(m_EPackage__eSuperPackage);
        m_EPackage->addEReferences(m_EPackage__eSuperPackage);
        m_EPackage->addEAllReferences(m_EPackage__eSuperPackage);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEClassifier");
        m_EPackage->addEOperations(op);
        m_EPackage->addEAllOperations(op);
    }
    {
        m_EParameter__eOperation = ecoreFactory->createEReference();
        m_EParameter__eOperation->setName("eOperation");
        m_EParameter->addEStructuralFeatures(m_EParameter__eOperation);
        m_EParameter->addEAllStructuralFeatures(m_EParameter__eOperation);
        m_EParameter->addEReferences(m_EParameter__eOperation);
        m_EParameter->addEAllReferences(m_EParameter__eOperation);
    }
    {
        m_EReference__containment = ecoreFactory->createEAttribute();
        m_EReference__containment->setName("containment");
        m_EReference->addEStructuralFeatures(m_EReference__containment);
        m_EReference->addEAllStructuralFeatures(m_EReference__containment);
        m_EReference->addEAttributes(m_EReference__containment);
        m_EReference->addEAllAttributes(m_EReference__containment);
    }
    {
        m_EReference__container = ecoreFactory->createEAttribute();
        m_EReference__container->setName("container");
        m_EReference->addEStructuralFeatures(m_EReference__container);
        m_EReference->addEAllStructuralFeatures(m_EReference__container);
        m_EReference->addEAttributes(m_EReference__container);
        m_EReference->addEAllAttributes(m_EReference__container);
    }
    {
        m_EReference__resolveProxies = ecoreFactory->createEAttribute();
        m_EReference__resolveProxies->setName("resolveProxies");
        m_EReference->addEStructuralFeatures(m_EReference__resolveProxies);
        m_EReference->addEAllStructuralFeatures(m_EReference__resolveProxies);
        m_EReference->addEAttributes(m_EReference__resolveProxies);
        m_EReference->addEAllAttributes(m_EReference__resolveProxies);
    }
    {
        m_EReference__eOpposite = ecoreFactory->createEReference();
        m_EReference__eOpposite->setName("eOpposite");
        m_EReference->addEStructuralFeatures(m_EReference__eOpposite);
        m_EReference->addEAllStructuralFeatures(m_EReference__eOpposite);
        m_EReference->addEReferences(m_EReference__eOpposite);
        m_EReference->addEAllReferences(m_EReference__eOpposite);
    }
    {
        m_EReference__eReferenceType = ecoreFactory->createEReference();
        m_EReference__eReferenceType->setName("eReferenceType");
        m_EReference->addEStructuralFeatures(m_EReference__eReferenceType);
        m_EReference->addEAllStructuralFeatures(m_EReference__eReferenceType);
        m_EReference->addEReferences(m_EReference__eReferenceType);
        m_EReference->addEAllReferences(m_EReference__eReferenceType);
    }
    {
        m_EReference__eKeys = ecoreFactory->createEReference();
        m_EReference__eKeys->setName("eKeys");
        m_EReference->addEStructuralFeatures(m_EReference__eKeys);
        m_EReference->addEAllStructuralFeatures(m_EReference__eKeys);
        m_EReference->addEReferences(m_EReference__eKeys);
        m_EReference->addEAllReferences(m_EReference__eKeys);
    }
    {
        m_EStructuralFeature__changeable = ecoreFactory->createEAttribute();
        m_EStructuralFeature__changeable->setName("changeable");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__changeable);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__changeable);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__changeable);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__changeable);
    }
    {
        m_EStructuralFeature__volatile = ecoreFactory->createEAttribute();
        m_EStructuralFeature__volatile->setName("volatile");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__volatile);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__volatile);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__volatile);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__volatile);
    }
    {
        m_EStructuralFeature__transient = ecoreFactory->createEAttribute();
        m_EStructuralFeature__transient->setName("transient");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__transient);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__transient);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__transient);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__transient);
    }
    {
        m_EStructuralFeature__defaultValueLiteral = ecoreFactory->createEAttribute();
        m_EStructuralFeature__defaultValueLiteral->setName("defaultValueLiteral");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__defaultValueLiteral);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__defaultValueLiteral);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__defaultValueLiteral);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__defaultValueLiteral);
    }
    {
        m_EStructuralFeature__defaultValue = ecoreFactory->createEAttribute();
        m_EStructuralFeature__defaultValue->setName("defaultValue");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__defaultValue);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__defaultValue);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__defaultValue);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__defaultValue);
    }
    {
        m_EStructuralFeature__unsettable = ecoreFactory->createEAttribute();
        m_EStructuralFeature__unsettable->setName("unsettable");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__unsettable);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__unsettable);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__unsettable);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__unsettable);
    }
    {
        m_EStructuralFeature__derived = ecoreFactory->createEAttribute();
        m_EStructuralFeature__derived->setName("derived");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__derived);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__derived);
        m_EStructuralFeature->addEAttributes(m_EStructuralFeature__derived);
        m_EStructuralFeature->addEAllAttributes(m_EStructuralFeature__derived);
    }
    {
        m_EStructuralFeature__eContainingClass = ecoreFactory->createEReference();
        m_EStructuralFeature__eContainingClass->setName("eContainingClass");
        m_EStructuralFeature->addEStructuralFeatures(m_EStructuralFeature__eContainingClass);
        m_EStructuralFeature->addEAllStructuralFeatures(m_EStructuralFeature__eContainingClass);
        m_EStructuralFeature->addEReferences(m_EStructuralFeature__eContainingClass);
        m_EStructuralFeature->addEAllReferences(m_EStructuralFeature__eContainingClass);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getFeatureID");
        m_EStructuralFeature->addEOperations(op);
        m_EStructuralFeature->addEAllOperations(op);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getContainerClass");
        m_EStructuralFeature->addEOperations(op);
        m_EStructuralFeature->addEAllOperations(op);
    }
    {
        m_ETypedElement__ordered = ecoreFactory->createEAttribute();
        m_ETypedElement__ordered->setName("ordered");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__ordered);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__ordered);
        m_ETypedElement->addEAttributes(m_ETypedElement__ordered);
        m_ETypedElement->addEAllAttributes(m_ETypedElement__ordered);
    }
    {
        m_ETypedElement__unique = ecoreFactory->createEAttribute();
        m_ETypedElement__unique->setName("unique");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__unique);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__unique);
        m_ETypedElement->addEAttributes(m_ETypedElement__unique);
        m_ETypedElement->addEAllAttributes(m_ETypedElement__unique);
    }
    {
        m_ETypedElement__lowerBound = ecoreFactory->createEAttribute();
        m_ETypedElement__lowerBound->setName("lowerBound");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__lowerBound);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__lowerBound);
        m_ETypedElement->addEAttributes(m_ETypedElement__lowerBound);
        m_ETypedElement->addEAllAttributes(m_ETypedElement__lowerBound);
    }
    {
        m_ETypedElement__upperBound = ecoreFactory->createEAttribute();
        m_ETypedElement__upperBound->setName("upperBound");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__upperBound);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__upperBound);
        m_ETypedElement->addEAttributes(m_ETypedElement__upperBound);
        m_ETypedElement->addEAllAttributes(m_ETypedElement__upperBound);
    }
    {
        m_ETypedElement__many = ecoreFactory->createEAttribute();
        m_ETypedElement__many->setName("many");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__many);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__many);
        m_ETypedElement->addEAttributes(m_ETypedElement__many);
        m_ETypedElement->addEAllAttributes(m_ETypedElement__many);
    }
    {
        m_ETypedElement__required = ecoreFactory->createEAttribute();
        m_ETypedElement__required->setName("required");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__required);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__required);
        m_ETypedElement->addEAttributes(m_ETypedElement__required);
        m_ETypedElement->addEAllAttributes(m_ETypedElement__required);
    }
    {
        m_ETypedElement__eType = ecoreFactory->createEReference();
        m_ETypedElement__eType->setName("eType");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__eType);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__eType);
        m_ETypedElement->addEReferences(m_ETypedElement__eType);
        m_ETypedElement->addEAllReferences(m_ETypedElement__eType);
    }
    {
        m_ETypedElement__eGenericType = ecoreFactory->createEReference();
        m_ETypedElement__eGenericType->setName("eGenericType");
        m_ETypedElement->addEStructuralFeatures(m_ETypedElement__eGenericType);
        m_ETypedElement->addEAllStructuralFeatures(m_ETypedElement__eGenericType);
        m_ETypedElement->addEReferences(m_ETypedElement__eGenericType);
        m_ETypedElement->addEAllReferences(m_ETypedElement__eGenericType);
    }
    {
        m_EStringToStringMapEntry__key = ecoreFactory->createEAttribute();
        m_EStringToStringMapEntry__key->setName("key");
        m_EStringToStringMapEntry->addEStructuralFeatures(m_EStringToStringMapEntry__key);
        m_EStringToStringMapEntry->addEAllStructuralFeatures(m_EStringToStringMapEntry__key);
        m_EStringToStringMapEntry->addEAttributes(m_EStringToStringMapEntry__key);
        m_EStringToStringMapEntry->addEAllAttributes(m_EStringToStringMapEntry__key);
    }
    {
        m_EStringToStringMapEntry__value = ecoreFactory->createEAttribute();
        m_EStringToStringMapEntry__value->setName("value");
        m_EStringToStringMapEntry->addEStructuralFeatures(m_EStringToStringMapEntry__value);
        m_EStringToStringMapEntry->addEAllStructuralFeatures(m_EStringToStringMapEntry__value);
        m_EStringToStringMapEntry->addEAttributes(m_EStringToStringMapEntry__value);
        m_EStringToStringMapEntry->addEAllAttributes(m_EStringToStringMapEntry__value);
    }
    {
        m_EGenericType__eUpperBound = ecoreFactory->createEReference();
        m_EGenericType__eUpperBound->setName("eUpperBound");
        m_EGenericType->addEStructuralFeatures(m_EGenericType__eUpperBound);
        m_EGenericType->addEAllStructuralFeatures(m_EGenericType__eUpperBound);
        m_EGenericType->addEReferences(m_EGenericType__eUpperBound);
        m_EGenericType->addEAllReferences(m_EGenericType__eUpperBound);
    }
    {
        m_EGenericType__eTypeArguments = ecoreFactory->createEReference();
        m_EGenericType__eTypeArguments->setName("eTypeArguments");
        m_EGenericType->addEStructuralFeatures(m_EGenericType__eTypeArguments);
        m_EGenericType->addEAllStructuralFeatures(m_EGenericType__eTypeArguments);
        m_EGenericType->addEReferences(m_EGenericType__eTypeArguments);
        m_EGenericType->addEAllReferences(m_EGenericType__eTypeArguments);
    }
    {
        m_EGenericType__eRawType = ecoreFactory->createEReference();
        m_EGenericType__eRawType->setName("eRawType");
        m_EGenericType->addEStructuralFeatures(m_EGenericType__eRawType);
        m_EGenericType->addEAllStructuralFeatures(m_EGenericType__eRawType);
        m_EGenericType->addEReferences(m_EGenericType__eRawType);
        m_EGenericType->addEAllReferences(m_EGenericType__eRawType);
    }
    {
        m_EGenericType__eLowerBound = ecoreFactory->createEReference();
        m_EGenericType__eLowerBound->setName("eLowerBound");
        m_EGenericType->addEStructuralFeatures(m_EGenericType__eLowerBound);
        m_EGenericType->addEAllStructuralFeatures(m_EGenericType__eLowerBound);
        m_EGenericType->addEReferences(m_EGenericType__eLowerBound);
        m_EGenericType->addEAllReferences(m_EGenericType__eLowerBound);
    }
    {
        m_EGenericType__eTypeParameter = ecoreFactory->createEReference();
        m_EGenericType__eTypeParameter->setName("eTypeParameter");
        m_EGenericType->addEStructuralFeatures(m_EGenericType__eTypeParameter);
        m_EGenericType->addEAllStructuralFeatures(m_EGenericType__eTypeParameter);
        m_EGenericType->addEReferences(m_EGenericType__eTypeParameter);
        m_EGenericType->addEAllReferences(m_EGenericType__eTypeParameter);
    }
    {
        m_EGenericType__eClassifier = ecoreFactory->createEReference();
        m_EGenericType__eClassifier->setName("eClassifier");
        m_EGenericType->addEStructuralFeatures(m_EGenericType__eClassifier);
        m_EGenericType->addEAllStructuralFeatures(m_EGenericType__eClassifier);
        m_EGenericType->addEReferences(m_EGenericType__eClassifier);
        m_EGenericType->addEAllReferences(m_EGenericType__eClassifier);
    }
    {
        m_ETypeParameter__eBounds = ecoreFactory->createEReference();
        m_ETypeParameter__eBounds->setName("eBounds");
        m_ETypeParameter->addEStructuralFeatures(m_ETypeParameter__eBounds);
        m_ETypeParameter->addEAllStructuralFeatures(m_ETypeParameter__eBounds);
        m_ETypeParameter->addEReferences(m_ETypeParameter__eBounds);
        m_ETypeParameter->addEAllReferences(m_ETypeParameter__eBounds);
    }

    m_EAttribute->addESuperTypes(m_EStructuralFeature);
    m_EAttribute->addAllEAllOperations(m_EStructuralFeature->getEOperations());
    m_EAttribute->addAllEAllReferences(m_EStructuralFeature->getEReferences());
    m_EAttribute->addAllEAllAttributes(m_EStructuralFeature->getEAttributes());
    m_EAttribute->addAllEAllStructuralFeatures(m_EStructuralFeature->getEStructuralFeatures());
    m_EAnnotation->addESuperTypes(m_EModelElement);
    m_EAnnotation->addAllEAllOperations(m_EModelElement->getEOperations());
    m_EAnnotation->addAllEAllReferences(m_EModelElement->getEReferences());
    m_EAnnotation->addAllEAllAttributes(m_EModelElement->getEAttributes());
    m_EAnnotation->addAllEAllStructuralFeatures(m_EModelElement->getEStructuralFeatures());
    m_EClass->addESuperTypes(m_EClassifier);
    m_EClass->addAllEAllOperations(m_EClassifier->getEOperations());
    m_EClass->addAllEAllReferences(m_EClassifier->getEReferences());
    m_EClass->addAllEAllAttributes(m_EClassifier->getEAttributes());
    m_EClass->addAllEAllStructuralFeatures(m_EClassifier->getEStructuralFeatures());
    m_EClassifier->addESuperTypes(m_ENamedElement);
    m_EClassifier->addAllEAllOperations(m_ENamedElement->getEOperations());
    m_EClassifier->addAllEAllReferences(m_ENamedElement->getEReferences());
    m_EClassifier->addAllEAllAttributes(m_ENamedElement->getEAttributes());
    m_EClassifier->addAllEAllStructuralFeatures(m_ENamedElement->getEStructuralFeatures());
    m_EDataType->addESuperTypes(m_EClassifier);
    m_EDataType->addAllEAllOperations(m_EClassifier->getEOperations());
    m_EDataType->addAllEAllReferences(m_EClassifier->getEReferences());
    m_EDataType->addAllEAllAttributes(m_EClassifier->getEAttributes());
    m_EDataType->addAllEAllStructuralFeatures(m_EClassifier->getEStructuralFeatures());
    m_EEnum->addESuperTypes(m_EDataType);
    m_EEnum->addAllEAllOperations(m_EDataType->getEOperations());
    m_EEnum->addAllEAllReferences(m_EDataType->getEReferences());
    m_EEnum->addAllEAllAttributes(m_EDataType->getEAttributes());
    m_EEnum->addAllEAllStructuralFeatures(m_EDataType->getEStructuralFeatures());
    m_EEnumLiteral->addESuperTypes(m_ENamedElement);
    m_EEnumLiteral->addAllEAllOperations(m_ENamedElement->getEOperations());
    m_EEnumLiteral->addAllEAllReferences(m_ENamedElement->getEReferences());
    m_EEnumLiteral->addAllEAllAttributes(m_ENamedElement->getEAttributes());
    m_EEnumLiteral->addAllEAllStructuralFeatures(m_ENamedElement->getEStructuralFeatures());
    m_EFactory->addESuperTypes(m_EModelElement);
    m_EFactory->addAllEAllOperations(m_EModelElement->getEOperations());
    m_EFactory->addAllEAllReferences(m_EModelElement->getEReferences());
    m_EFactory->addAllEAllAttributes(m_EModelElement->getEAttributes());
    m_EFactory->addAllEAllStructuralFeatures(m_EModelElement->getEStructuralFeatures());
    m_ENamedElement->addESuperTypes(m_EModelElement);
    m_ENamedElement->addAllEAllOperations(m_EModelElement->getEOperations());
    m_ENamedElement->addAllEAllReferences(m_EModelElement->getEReferences());
    m_ENamedElement->addAllEAllAttributes(m_EModelElement->getEAttributes());
    m_ENamedElement->addAllEAllStructuralFeatures(m_EModelElement->getEStructuralFeatures());
    m_EOperation->addESuperTypes(m_ETypedElement);
    m_EOperation->addAllEAllOperations(m_ETypedElement->getEOperations());
    m_EOperation->addAllEAllReferences(m_ETypedElement->getEReferences());
    m_EOperation->addAllEAllAttributes(m_ETypedElement->getEAttributes());
    m_EOperation->addAllEAllStructuralFeatures(m_ETypedElement->getEStructuralFeatures());
    m_EPackage->addESuperTypes(m_ENamedElement);
    m_EPackage->addAllEAllOperations(m_ENamedElement->getEOperations());
    m_EPackage->addAllEAllReferences(m_ENamedElement->getEReferences());
    m_EPackage->addAllEAllAttributes(m_ENamedElement->getEAttributes());
    m_EPackage->addAllEAllStructuralFeatures(m_ENamedElement->getEStructuralFeatures());
    m_EParameter->addESuperTypes(m_ETypedElement);
    m_EParameter->addAllEAllOperations(m_ETypedElement->getEOperations());
    m_EParameter->addAllEAllReferences(m_ETypedElement->getEReferences());
    m_EParameter->addAllEAllAttributes(m_ETypedElement->getEAttributes());
    m_EParameter->addAllEAllStructuralFeatures(m_ETypedElement->getEStructuralFeatures());
    m_EReference->addESuperTypes(m_EStructuralFeature);
    m_EReference->addAllEAllOperations(m_EStructuralFeature->getEOperations());
    m_EReference->addAllEAllReferences(m_EStructuralFeature->getEReferences());
    m_EReference->addAllEAllAttributes(m_EStructuralFeature->getEAttributes());
    m_EReference->addAllEAllStructuralFeatures(m_EStructuralFeature->getEStructuralFeatures());
    m_EStructuralFeature->addESuperTypes(m_ETypedElement);
    m_EStructuralFeature->addAllEAllOperations(m_ETypedElement->getEOperations());
    m_EStructuralFeature->addAllEAllReferences(m_ETypedElement->getEReferences());
    m_EStructuralFeature->addAllEAllAttributes(m_ETypedElement->getEAttributes());
    m_EStructuralFeature->addAllEAllStructuralFeatures(m_ETypedElement->getEStructuralFeatures());
    m_ETypedElement->addESuperTypes(m_ENamedElement);
    m_ETypedElement->addAllEAllOperations(m_ENamedElement->getEOperations());
    m_ETypedElement->addAllEAllReferences(m_ENamedElement->getEReferences());
    m_ETypedElement->addAllEAllAttributes(m_ENamedElement->getEAttributes());
    m_ETypedElement->addAllEAllStructuralFeatures(m_ENamedElement->getEStructuralFeatures());
    m_ETypeParameter->addESuperTypes(m_ENamedElement);
    m_ETypeParameter->addAllEAllOperations(m_ENamedElement->getEOperations());
    m_ETypeParameter->addAllEAllReferences(m_ENamedElement->getEReferences());
    m_ETypeParameter->addAllEAllAttributes(m_ENamedElement->getEAttributes());
    m_ETypeParameter->addAllEAllStructuralFeatures(m_ENamedElement->getEStructuralFeatures());


    m_EAttribute->addFeatureAccesors(m_EAttribute__iD,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAttribute_ptr >(o)->getID());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EAttribute::iD_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EAttribute_ptr >(o)->setID(val);
        });
    m_EAttribute->addFeatureAccesors(m_EAttribute__eAttributeType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAttribute_ptr >(o)->getEAttributeType());
        },
         e4c::set_t());
    m_EAnnotation->addFeatureAccesors(m_EAnnotation__source,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAnnotation_ptr >(o)->getSource());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EAnnotation::source_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EAnnotation_ptr >(o)->setSource(val);
        });
    m_EAnnotation->addFeatureAccesors(m_EAnnotation__details,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAnnotation_ptr >(o)->getDetails());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EAnnotation_ptr eo = dynamic_cast< ecore::EAnnotation_ptr >(o);
            eo->clearDetails();
            eo->addAllDetails(e4c::select< ecore::EStringToStringMapEntry >(val));
        });
    m_EAnnotation->addFeatureAccesors(m_EAnnotation__eModelElement,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAnnotation_ptr >(o)->getEModelElement());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EModelElement_ptr val = dynamic_cast< ecore::EModelElement_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EAnnotation_ptr >(o)->setEModelElement(val);
        });
    m_EAnnotation->addFeatureAccesors(m_EAnnotation__contents,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAnnotation_ptr >(o)->getContents());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EAnnotation_ptr eo = dynamic_cast< ecore::EAnnotation_ptr >(o);
            eo->clearContents();
            eo->addAllContents(e4c::select< ecore::EObject >(val));
        });
    m_EAnnotation->addFeatureAccesors(m_EAnnotation__references,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EAnnotation_ptr >(o)->getReferences());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EAnnotation_ptr eo = dynamic_cast< ecore::EAnnotation_ptr >(o);
            eo->clearReferences();
            eo->addAllReferences(e4c::select< ecore::EObject >(val));
        });
    m_EClass->addFeatureAccesors(m_EClass__abstract,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getAbstract());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EClass::abstract_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EClass_ptr >(o)->setAbstract(val);
        });
    m_EClass->addFeatureAccesors(m_EClass__interface,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getInterface());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EClass::interface_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EClass_ptr >(o)->setInterface(val);
        });
    m_EClass->addFeatureAccesors(m_EClass__eSuperTypes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getESuperTypes());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EClass_ptr eo = dynamic_cast< ecore::EClass_ptr >(o);
            eo->clearESuperTypes();
            eo->addAllESuperTypes(e4c::select< ecore::EClass >(val));
        });
    m_EClass->addFeatureAccesors(m_EClass__eOperations,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEOperations());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EClass_ptr eo = dynamic_cast< ecore::EClass_ptr >(o);
            eo->clearEOperations();
            eo->addAllEOperations(e4c::select< ecore::EOperation >(val));
        });
    m_EClass->addFeatureAccesors(m_EClass__eAllAttributes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllAttributes());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eAllReferences,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllReferences());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eReferences,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEReferences());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eAttributes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAttributes());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eAllContainments,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllContainments());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eAllOperations,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllOperations());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eAllStructuralFeatures,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllStructuralFeatures());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eAllSuperTypes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllSuperTypes());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eIDAttribute,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEIDAttribute());
        },
         e4c::set_t());
    m_EClass->addFeatureAccesors(m_EClass__eStructuralFeatures,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEStructuralFeatures());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EClass_ptr eo = dynamic_cast< ecore::EClass_ptr >(o);
            eo->clearEStructuralFeatures();
            eo->addAllEStructuralFeatures(e4c::select< ecore::EStructuralFeature >(val));
        });
    m_EClass->addFeatureAccesors(m_EClass__eGenericSuperTypes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEGenericSuperTypes());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EClass_ptr eo = dynamic_cast< ecore::EClass_ptr >(o);
            eo->clearEGenericSuperTypes();
            eo->addAllEGenericSuperTypes(e4c::select< ecore::EGenericType >(val));
        });
    m_EClass->addFeatureAccesors(m_EClass__eAllGenericSuperTypes,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClass_ptr >(o)->getEAllGenericSuperTypes());
        },
         e4c::set_t());
    m_EClassifier->addFeatureAccesors(m_EClassifier__instanceClassName,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClassifier_ptr >(o)->getInstanceClassName());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EClassifier::instanceClassName_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EClassifier_ptr >(o)->setInstanceClassName(val);
        });
    m_EClassifier->addFeatureAccesors(m_EClassifier__instanceClass,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClassifier_ptr >(o)->getInstanceClass());
        },
         e4c::set_t());
    m_EClassifier->addFeatureAccesors(m_EClassifier__defaultValue,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClassifier_ptr >(o)->getDefaultValue());
        },
         e4c::set_t());
    m_EClassifier->addFeatureAccesors(m_EClassifier__instanceTypeName,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClassifier_ptr >(o)->getInstanceTypeName());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EClassifier::instanceTypeName_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EClassifier_ptr >(o)->setInstanceTypeName(val);
        });
    m_EClassifier->addFeatureAccesors(m_EClassifier__ePackage,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClassifier_ptr >(o)->getEPackage());
        },
         e4c::set_t());
    m_EClassifier->addFeatureAccesors(m_EClassifier__eTypeParameters,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EClassifier_ptr >(o)->getETypeParameters());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EClassifier_ptr eo = dynamic_cast< ecore::EClassifier_ptr >(o);
            eo->clearETypeParameters();
            eo->addAllETypeParameters(e4c::select< ecore::ETypeParameter >(val));
        });
    m_EDataType->addFeatureAccesors(m_EDataType__serializable,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EDataType_ptr >(o)->getSerializable());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EDataType::serializable_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EDataType_ptr >(o)->setSerializable(val);
        });
    m_EEnum->addFeatureAccesors(m_EEnum__eLiterals,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EEnum_ptr >(o)->getELiterals());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EEnum_ptr eo = dynamic_cast< ecore::EEnum_ptr >(o);
            eo->clearELiterals();
            eo->addAllELiterals(e4c::select< ecore::EEnumLiteral >(val));
        });
    m_EEnumLiteral->addFeatureAccesors(m_EEnumLiteral__value,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EEnumLiteral_ptr >(o)->getValue());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EEnumLiteral::value_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EEnumLiteral_ptr >(o)->setValue(val);
        });
    m_EEnumLiteral->addFeatureAccesors(m_EEnumLiteral__instance,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EEnumLiteral_ptr >(o)->getInstance());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EEnumLiteral::instance_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EEnumLiteral_ptr >(o)->setInstance(val);
        });
    m_EEnumLiteral->addFeatureAccesors(m_EEnumLiteral__literal,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EEnumLiteral_ptr >(o)->getLiteral());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EEnumLiteral::literal_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EEnumLiteral_ptr >(o)->setLiteral(val);
        });
    m_EEnumLiteral->addFeatureAccesors(m_EEnumLiteral__eEnum,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EEnumLiteral_ptr >(o)->getEEnum());
        },
         e4c::set_t());
    m_EFactory->addFeatureAccesors(m_EFactory__ePackage,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EFactory_ptr >(o)->getEPackage());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EPackage_ptr val = dynamic_cast< ecore::EPackage_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EFactory_ptr >(o)->setEPackage(val);
        });
    m_EModelElement->addFeatureAccesors(m_EModelElement__eAnnotations,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EModelElement_ptr >(o)->getEAnnotations());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EModelElement_ptr eo = dynamic_cast< ecore::EModelElement_ptr >(o);
            eo->clearEAnnotations();
            eo->addAllEAnnotations(e4c::select< ecore::EAnnotation >(val));
        });
    m_ENamedElement->addFeatureAccesors(m_ENamedElement__name,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ENamedElement_ptr >(o)->getName());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::ENamedElement::name_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::ENamedElement_ptr >(o)->setName(val);
        });
    m_EOperation->addFeatureAccesors(m_EOperation__eContainingClass,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EOperation_ptr >(o)->getEContainingClass());
        },
         e4c::set_t());
    m_EOperation->addFeatureAccesors(m_EOperation__eTypeParameters,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EOperation_ptr >(o)->getETypeParameters());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EOperation_ptr eo = dynamic_cast< ecore::EOperation_ptr >(o);
            eo->clearETypeParameters();
            eo->addAllETypeParameters(e4c::select< ecore::ETypeParameter >(val));
        });
    m_EOperation->addFeatureAccesors(m_EOperation__eParameters,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EOperation_ptr >(o)->getEParameters());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EOperation_ptr eo = dynamic_cast< ecore::EOperation_ptr >(o);
            eo->clearEParameters();
            eo->addAllEParameters(e4c::select< ecore::EParameter >(val));
        });
    m_EOperation->addFeatureAccesors(m_EOperation__eExceptions,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EOperation_ptr >(o)->getEExceptions());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EOperation_ptr eo = dynamic_cast< ecore::EOperation_ptr >(o);
            eo->clearEExceptions();
            eo->addAllEExceptions(e4c::select< ecore::EClassifier >(val));
        });
    m_EOperation->addFeatureAccesors(m_EOperation__eGenericExceptions,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EOperation_ptr >(o)->getEGenericExceptions());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EOperation_ptr eo = dynamic_cast< ecore::EOperation_ptr >(o);
            eo->clearEGenericExceptions();
            eo->addAllEGenericExceptions(e4c::select< ecore::EGenericType >(val));
        });
    m_EPackage->addFeatureAccesors(m_EPackage__nsURI,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EPackage_ptr >(o)->getNsURI());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EPackage::nsURI_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EPackage_ptr >(o)->setNsURI(val);
        });
    m_EPackage->addFeatureAccesors(m_EPackage__nsPrefix,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EPackage_ptr >(o)->getNsPrefix());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EPackage::nsPrefix_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EPackage_ptr >(o)->setNsPrefix(val);
        });
    m_EPackage->addFeatureAccesors(m_EPackage__eFactoryInstance,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EPackage_ptr >(o)->getEFactoryInstance());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EFactory_ptr val = dynamic_cast< ecore::EFactory_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EPackage_ptr >(o)->setEFactoryInstance(val);
        });
    m_EPackage->addFeatureAccesors(m_EPackage__eClassifiers,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EPackage_ptr >(o)->getEClassifiers());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EPackage_ptr eo = dynamic_cast< ecore::EPackage_ptr >(o);
            eo->clearEClassifiers();
            eo->addAllEClassifiers(e4c::select< ecore::EClassifier >(val));
        });
    m_EPackage->addFeatureAccesors(m_EPackage__eSubpackages,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EPackage_ptr >(o)->getESubpackages());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EPackage_ptr eo = dynamic_cast< ecore::EPackage_ptr >(o);
            eo->clearESubpackages();
            eo->addAllESubpackages(e4c::select< ecore::EPackage >(val));
        });
    m_EPackage->addFeatureAccesors(m_EPackage__eSuperPackage,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EPackage_ptr >(o)->getESuperPackage());
        },
         e4c::set_t());
    m_EParameter->addFeatureAccesors(m_EParameter__eOperation,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EParameter_ptr >(o)->getEOperation());
        },
         e4c::set_t());
    m_EReference->addFeatureAccesors(m_EReference__containment,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EReference_ptr >(o)->getContainment());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EReference::containment_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EReference_ptr >(o)->setContainment(val);
        });
    m_EReference->addFeatureAccesors(m_EReference__container,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EReference_ptr >(o)->getContainer());
        },
         e4c::set_t());
    m_EReference->addFeatureAccesors(m_EReference__resolveProxies,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EReference_ptr >(o)->getResolveProxies());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EReference::resolveProxies_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EReference_ptr >(o)->setResolveProxies(val);
        });
    m_EReference->addFeatureAccesors(m_EReference__eOpposite,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EReference_ptr >(o)->getEOpposite());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EReference_ptr val = dynamic_cast< ecore::EReference_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EReference_ptr >(o)->setEOpposite(val);
        });
    m_EReference->addFeatureAccesors(m_EReference__eReferenceType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EReference_ptr >(o)->getEReferenceType());
        },
         e4c::set_t());
    m_EReference->addFeatureAccesors(m_EReference__eKeys,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EReference_ptr >(o)->getEKeys());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EReference_ptr eo = dynamic_cast< ecore::EReference_ptr >(o);
            eo->clearEKeys();
            eo->addAllEKeys(e4c::select< ecore::EAttribute >(val));
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__changeable,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getChangeable());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStructuralFeature::changeable_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStructuralFeature_ptr >(o)->setChangeable(val);
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__volatile,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getVolatile_());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStructuralFeature::volatile__t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStructuralFeature_ptr >(o)->setVolatile_(val);
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__transient,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getTransient());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStructuralFeature::transient_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStructuralFeature_ptr >(o)->setTransient(val);
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__defaultValueLiteral,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getDefaultValueLiteral());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStructuralFeature::defaultValueLiteral_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStructuralFeature_ptr >(o)->setDefaultValueLiteral(val);
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__defaultValue,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getDefaultValue());
        },
         e4c::set_t());
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__unsettable,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getUnsettable());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStructuralFeature::unsettable_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStructuralFeature_ptr >(o)->setUnsettable(val);
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__derived,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getDerived());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStructuralFeature::derived_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStructuralFeature_ptr >(o)->setDerived(val);
        });
    m_EStructuralFeature->addFeatureAccesors(m_EStructuralFeature__eContainingClass,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStructuralFeature_ptr >(o)->getEContainingClass());
        },
         e4c::set_t());
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__ordered,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getOrdered());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::ETypedElement::ordered_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::ETypedElement_ptr >(o)->setOrdered(val);
        });
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__unique,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getUnique());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::ETypedElement::unique_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::ETypedElement_ptr >(o)->setUnique(val);
        });
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__lowerBound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getLowerBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::ETypedElement::lowerBound_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::ETypedElement_ptr >(o)->setLowerBound(val);
        });
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__upperBound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getUpperBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::ETypedElement::upperBound_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::ETypedElement_ptr >(o)->setUpperBound(val);
        });
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__many,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getMany());
        },
         e4c::set_t());
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__required,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getRequired());
        },
         e4c::set_t());
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__eType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getEType());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EClassifier_ptr val = dynamic_cast< ecore::EClassifier_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::ETypedElement_ptr >(o)->setEType(val);
        });
    m_ETypedElement->addFeatureAccesors(m_ETypedElement__eGenericType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypedElement_ptr >(o)->getEGenericType());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EGenericType_ptr val = dynamic_cast< ecore::EGenericType_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::ETypedElement_ptr >(o)->setEGenericType(val);
        });
    m_EStringToStringMapEntry->addFeatureAccesors(m_EStringToStringMapEntry__key,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStringToStringMapEntry_ptr >(o)->getKey());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStringToStringMapEntry::key_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStringToStringMapEntry_ptr >(o)->setKey(val);
        });
    m_EStringToStringMapEntry->addFeatureAccesors(m_EStringToStringMapEntry__value,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EStringToStringMapEntry_ptr >(o)->getValue());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef ecore::EStringToStringMapEntry::value_t type_t;
            const type_t& val = h.to_value< type_t >();
            dynamic_cast< ecore::EStringToStringMapEntry_ptr >(o)->setValue(val);
        });
    m_EGenericType->addFeatureAccesors(m_EGenericType__eUpperBound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EGenericType_ptr >(o)->getEUpperBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EGenericType_ptr val = dynamic_cast< ecore::EGenericType_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EGenericType_ptr >(o)->setEUpperBound(val);
        });
    m_EGenericType->addFeatureAccesors(m_EGenericType__eTypeArguments,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EGenericType_ptr >(o)->getETypeArguments());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::EGenericType_ptr eo = dynamic_cast< ecore::EGenericType_ptr >(o);
            eo->clearETypeArguments();
            eo->addAllETypeArguments(e4c::select< ecore::EGenericType >(val));
        });
    m_EGenericType->addFeatureAccesors(m_EGenericType__eRawType,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EGenericType_ptr >(o)->getERawType());
        },
         e4c::set_t());
    m_EGenericType->addFeatureAccesors(m_EGenericType__eLowerBound,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EGenericType_ptr >(o)->getELowerBound());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EGenericType_ptr val = dynamic_cast< ecore::EGenericType_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EGenericType_ptr >(o)->setELowerBound(val);
        });
    m_EGenericType->addFeatureAccesors(m_EGenericType__eTypeParameter,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EGenericType_ptr >(o)->getETypeParameter());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::ETypeParameter_ptr val = dynamic_cast< ecore::ETypeParameter_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EGenericType_ptr >(o)->setETypeParameter(val);
        });
    m_EGenericType->addFeatureAccesors(m_EGenericType__eClassifier,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::EGenericType_ptr >(o)->getEClassifier());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            ecore::EClassifier_ptr val = dynamic_cast< ecore::EClassifier_ptr >(h.to_value< ecore::EObject_ptr >());
            dynamic_cast< ecore::EGenericType_ptr >(o)->setEClassifier(val);
        });
    m_ETypeParameter->addFeatureAccesors(m_ETypeParameter__eBounds,
        [](ecore::EObject_ptr o) {
            return e4c::create_holder(dynamic_cast< ecore::ETypeParameter_ptr >(o)->getEBounds());
        },
        [](ecore::EObject_ptr o, e4c::holder h) {
            typedef std::vector< ecore::EObject_ptr > type_t;
            const type_t& val = h.to_value< type_t >();
            ecore::ETypeParameter_ptr eo = dynamic_cast< ecore::ETypeParameter_ptr >(o);
            eo->clearEBounds();
            eo->addAllEBounds(e4c::select< ecore::EGenericType >(val));
        });

}

const EcorePackage_ptr EcorePackage::_instance()
{
    static EcorePackage __instance;
    return &__instance;
}

ecore::EClass_ptr EcorePackage::getEAttribute() const
{
    return m_EAttribute;
}

e4c::tag_t EcorePackage::getTag_EAttribute() const
{
    return e4c::tag< EAttribute >::get();
}

ecore::EClass_ptr EcorePackage::getEAnnotation() const
{
    return m_EAnnotation;
}

e4c::tag_t EcorePackage::getTag_EAnnotation() const
{
    return e4c::tag< EAnnotation >::get();
}

ecore::EClass_ptr EcorePackage::getEClass() const
{
    return m_EClass;
}

e4c::tag_t EcorePackage::getTag_EClass() const
{
    return e4c::tag< EClass >::get();
}

ecore::EClass_ptr EcorePackage::getEClassifier() const
{
    return m_EClassifier;
}

e4c::tag_t EcorePackage::getTag_EClassifier() const
{
    return e4c::tag< EClassifier >::get();
}

ecore::EClass_ptr EcorePackage::getEDataType() const
{
    return m_EDataType;
}

e4c::tag_t EcorePackage::getTag_EDataType() const
{
    return e4c::tag< EDataType >::get();
}

ecore::EClass_ptr EcorePackage::getEEnum() const
{
    return m_EEnum;
}

e4c::tag_t EcorePackage::getTag_EEnum() const
{
    return e4c::tag< EEnum >::get();
}

ecore::EClass_ptr EcorePackage::getEEnumLiteral() const
{
    return m_EEnumLiteral;
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral() const
{
    return e4c::tag< EEnumLiteral >::get();
}

ecore::EClass_ptr EcorePackage::getEFactory() const
{
    return m_EFactory;
}

e4c::tag_t EcorePackage::getTag_EFactory() const
{
    return e4c::tag< EFactory >::get();
}

ecore::EClass_ptr EcorePackage::getEModelElement() const
{
    return m_EModelElement;
}

e4c::tag_t EcorePackage::getTag_EModelElement() const
{
    return e4c::tag< EModelElement >::get();
}

ecore::EClass_ptr EcorePackage::getENamedElement() const
{
    return m_ENamedElement;
}

e4c::tag_t EcorePackage::getTag_ENamedElement() const
{
    return e4c::tag< ENamedElement >::get();
}

ecore::EClass_ptr EcorePackage::getEObject() const
{
    return m_EObject;
}

e4c::tag_t EcorePackage::getTag_EObject() const
{
    return e4c::tag< EObject >::get();
}

ecore::EClass_ptr EcorePackage::getEOperation() const
{
    return m_EOperation;
}

e4c::tag_t EcorePackage::getTag_EOperation() const
{
    return e4c::tag< EOperation >::get();
}

ecore::EClass_ptr EcorePackage::getEPackage() const
{
    return m_EPackage;
}

e4c::tag_t EcorePackage::getTag_EPackage() const
{
    return e4c::tag< EPackage >::get();
}

ecore::EClass_ptr EcorePackage::getEParameter() const
{
    return m_EParameter;
}

e4c::tag_t EcorePackage::getTag_EParameter() const
{
    return e4c::tag< EParameter >::get();
}

ecore::EClass_ptr EcorePackage::getEReference() const
{
    return m_EReference;
}

e4c::tag_t EcorePackage::getTag_EReference() const
{
    return e4c::tag< EReference >::get();
}

ecore::EClass_ptr EcorePackage::getEStructuralFeature() const
{
    return m_EStructuralFeature;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature() const
{
    return e4c::tag< EStructuralFeature >::get();
}

ecore::EClass_ptr EcorePackage::getETypedElement() const
{
    return m_ETypedElement;
}

e4c::tag_t EcorePackage::getTag_ETypedElement() const
{
    return e4c::tag< ETypedElement >::get();
}

ecore::EDataType_ptr EcorePackage::getEBigDecimal() const
{
    return m_EBigDecimal;
}

e4c::tag_t EcorePackage::getTag_EBigDecimal() const
{
    return e4c::tag< EBigDecimal >::get();
}

ecore::EDataType_ptr EcorePackage::getEBigInteger() const
{
    return m_EBigInteger;
}

e4c::tag_t EcorePackage::getTag_EBigInteger() const
{
    return e4c::tag< EBigInteger >::get();
}

ecore::EDataType_ptr EcorePackage::getEBoolean() const
{
    return m_EBoolean;
}

e4c::tag_t EcorePackage::getTag_EBoolean() const
{
    return e4c::tag< EBoolean >::get();
}

ecore::EDataType_ptr EcorePackage::getEBooleanObject() const
{
    return m_EBooleanObject;
}

e4c::tag_t EcorePackage::getTag_EBooleanObject() const
{
    return e4c::tag< EBooleanObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEByte() const
{
    return m_EByte;
}

e4c::tag_t EcorePackage::getTag_EByte() const
{
    return e4c::tag< EByte >::get();
}

ecore::EDataType_ptr EcorePackage::getEByteArray() const
{
    return m_EByteArray;
}

e4c::tag_t EcorePackage::getTag_EByteArray() const
{
    return e4c::tag< EByteArray >::get();
}

ecore::EDataType_ptr EcorePackage::getEByteObject() const
{
    return m_EByteObject;
}

e4c::tag_t EcorePackage::getTag_EByteObject() const
{
    return e4c::tag< EByteObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEChar() const
{
    return m_EChar;
}

e4c::tag_t EcorePackage::getTag_EChar() const
{
    return e4c::tag< EChar >::get();
}

ecore::EDataType_ptr EcorePackage::getECharacterObject() const
{
    return m_ECharacterObject;
}

e4c::tag_t EcorePackage::getTag_ECharacterObject() const
{
    return e4c::tag< ECharacterObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEDate() const
{
    return m_EDate;
}

e4c::tag_t EcorePackage::getTag_EDate() const
{
    return e4c::tag< EDate >::get();
}

ecore::EDataType_ptr EcorePackage::getEDiagnosticChain() const
{
    return m_EDiagnosticChain;
}

e4c::tag_t EcorePackage::getTag_EDiagnosticChain() const
{
    return e4c::tag< EDiagnosticChain >::get();
}

ecore::EDataType_ptr EcorePackage::getEDouble() const
{
    return m_EDouble;
}

e4c::tag_t EcorePackage::getTag_EDouble() const
{
    return e4c::tag< EDouble >::get();
}

ecore::EDataType_ptr EcorePackage::getEDoubleObject() const
{
    return m_EDoubleObject;
}

e4c::tag_t EcorePackage::getTag_EDoubleObject() const
{
    return e4c::tag< EDoubleObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEEList() const
{
    return m_EEList;
}

e4c::tag_t EcorePackage::getTag_EEList() const
{
    return e4c::tag< EEList >::get();
}

ecore::EDataType_ptr EcorePackage::getEEnumerator() const
{
    return m_EEnumerator;
}

e4c::tag_t EcorePackage::getTag_EEnumerator() const
{
    return e4c::tag< EEnumerator >::get();
}

ecore::EDataType_ptr EcorePackage::getEFeatureMap() const
{
    return m_EFeatureMap;
}

e4c::tag_t EcorePackage::getTag_EFeatureMap() const
{
    return e4c::tag< EFeatureMap >::get();
}

ecore::EDataType_ptr EcorePackage::getEFeatureMapEntry() const
{
    return m_EFeatureMapEntry;
}

e4c::tag_t EcorePackage::getTag_EFeatureMapEntry() const
{
    return e4c::tag< EFeatureMapEntry >::get();
}

ecore::EDataType_ptr EcorePackage::getEFloat() const
{
    return m_EFloat;
}

e4c::tag_t EcorePackage::getTag_EFloat() const
{
    return e4c::tag< EFloat >::get();
}

ecore::EDataType_ptr EcorePackage::getEFloatObject() const
{
    return m_EFloatObject;
}

e4c::tag_t EcorePackage::getTag_EFloatObject() const
{
    return e4c::tag< EFloatObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEInt() const
{
    return m_EInt;
}

e4c::tag_t EcorePackage::getTag_EInt() const
{
    return e4c::tag< EInt >::get();
}

ecore::EDataType_ptr EcorePackage::getEIntegerObject() const
{
    return m_EIntegerObject;
}

e4c::tag_t EcorePackage::getTag_EIntegerObject() const
{
    return e4c::tag< EIntegerObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEJavaClass() const
{
    return m_EJavaClass;
}

e4c::tag_t EcorePackage::getTag_EJavaClass() const
{
    return e4c::tag< EJavaClass >::get();
}

ecore::EDataType_ptr EcorePackage::getEJavaObject() const
{
    return m_EJavaObject;
}

e4c::tag_t EcorePackage::getTag_EJavaObject() const
{
    return e4c::tag< EJavaObject >::get();
}

ecore::EDataType_ptr EcorePackage::getELong() const
{
    return m_ELong;
}

e4c::tag_t EcorePackage::getTag_ELong() const
{
    return e4c::tag< ELong >::get();
}

ecore::EDataType_ptr EcorePackage::getELongObject() const
{
    return m_ELongObject;
}

e4c::tag_t EcorePackage::getTag_ELongObject() const
{
    return e4c::tag< ELongObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEMap() const
{
    return m_EMap;
}

e4c::tag_t EcorePackage::getTag_EMap() const
{
    return e4c::tag< EMap >::get();
}

ecore::EDataType_ptr EcorePackage::getEResource() const
{
    return m_EResource;
}

e4c::tag_t EcorePackage::getTag_EResource() const
{
    return e4c::tag< EResource >::get();
}

ecore::EDataType_ptr EcorePackage::getEResourceSet() const
{
    return m_EResourceSet;
}

e4c::tag_t EcorePackage::getTag_EResourceSet() const
{
    return e4c::tag< EResourceSet >::get();
}

ecore::EDataType_ptr EcorePackage::getEShort() const
{
    return m_EShort;
}

e4c::tag_t EcorePackage::getTag_EShort() const
{
    return e4c::tag< EShort >::get();
}

ecore::EDataType_ptr EcorePackage::getEShortObject() const
{
    return m_EShortObject;
}

e4c::tag_t EcorePackage::getTag_EShortObject() const
{
    return e4c::tag< EShortObject >::get();
}

ecore::EDataType_ptr EcorePackage::getEString() const
{
    return m_EString;
}

e4c::tag_t EcorePackage::getTag_EString() const
{
    return e4c::tag< EString >::get();
}

ecore::EClass_ptr EcorePackage::getEStringToStringMapEntry() const
{
    return m_EStringToStringMapEntry;
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry() const
{
    return e4c::tag< EStringToStringMapEntry >::get();
}

ecore::EDataType_ptr EcorePackage::getETreeIterator() const
{
    return m_ETreeIterator;
}

e4c::tag_t EcorePackage::getTag_ETreeIterator() const
{
    return e4c::tag< ETreeIterator >::get();
}

ecore::EClass_ptr EcorePackage::getEGenericType() const
{
    return m_EGenericType;
}

e4c::tag_t EcorePackage::getTag_EGenericType() const
{
    return e4c::tag< EGenericType >::get();
}

ecore::EClass_ptr EcorePackage::getETypeParameter() const
{
    return m_ETypeParameter;
}

e4c::tag_t EcorePackage::getTag_ETypeParameter() const
{
    return e4c::tag< ETypeParameter >::get();
}

ecore::EDataType_ptr EcorePackage::getEInvocationTargetException() const
{
    return m_EInvocationTargetException;
}

e4c::tag_t EcorePackage::getTag_EInvocationTargetException() const
{
    return e4c::tag< EInvocationTargetException >::get();
}

e4c::tag_t EcorePackage::getTag_EAttribute__iD() const
{
    return e4c::tag< EAttribute__iD_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEAttribute__iD() const
{
    return m_EAttribute__iD;
}

e4c::tag_t EcorePackage::getTag_EAttribute__eAttributeType() const
{
    return e4c::tag< EAttribute__eAttributeType_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEAttribute__eAttributeType() const
{
    return m_EAttribute__eAttributeType;
}

e4c::tag_t EcorePackage::getTag_EAnnotation__source() const
{
    return e4c::tag< EAnnotation__source_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEAnnotation__source() const
{
    return m_EAnnotation__source;
}

e4c::tag_t EcorePackage::getTag_EAnnotation__details() const
{
    return e4c::tag< EAnnotation__details_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEAnnotation__details() const
{
    return m_EAnnotation__details;
}

e4c::tag_t EcorePackage::getTag_EAnnotation__eModelElement() const
{
    return e4c::tag< EAnnotation__eModelElement_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEAnnotation__eModelElement() const
{
    return m_EAnnotation__eModelElement;
}

e4c::tag_t EcorePackage::getTag_EAnnotation__contents() const
{
    return e4c::tag< EAnnotation__contents_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEAnnotation__contents() const
{
    return m_EAnnotation__contents;
}

e4c::tag_t EcorePackage::getTag_EAnnotation__references() const
{
    return e4c::tag< EAnnotation__references_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEAnnotation__references() const
{
    return m_EAnnotation__references;
}

e4c::tag_t EcorePackage::getTag_EClass__abstract() const
{
    return e4c::tag< EClass__abstract_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEClass__abstract() const
{
    return m_EClass__abstract;
}

e4c::tag_t EcorePackage::getTag_EClass__interface() const
{
    return e4c::tag< EClass__interface_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEClass__interface() const
{
    return m_EClass__interface;
}

e4c::tag_t EcorePackage::getTag_EClass__eSuperTypes() const
{
    return e4c::tag< EClass__eSuperTypes_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eSuperTypes() const
{
    return m_EClass__eSuperTypes;
}

e4c::tag_t EcorePackage::getTag_EClass__eOperations() const
{
    return e4c::tag< EClass__eOperations_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eOperations() const
{
    return m_EClass__eOperations;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllAttributes() const
{
    return e4c::tag< EClass__eAllAttributes_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllAttributes() const
{
    return m_EClass__eAllAttributes;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllReferences() const
{
    return e4c::tag< EClass__eAllReferences_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllReferences() const
{
    return m_EClass__eAllReferences;
}

e4c::tag_t EcorePackage::getTag_EClass__eReferences() const
{
    return e4c::tag< EClass__eReferences_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eReferences() const
{
    return m_EClass__eReferences;
}

e4c::tag_t EcorePackage::getTag_EClass__eAttributes() const
{
    return e4c::tag< EClass__eAttributes_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAttributes() const
{
    return m_EClass__eAttributes;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllContainments() const
{
    return e4c::tag< EClass__eAllContainments_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllContainments() const
{
    return m_EClass__eAllContainments;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllOperations() const
{
    return e4c::tag< EClass__eAllOperations_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllOperations() const
{
    return m_EClass__eAllOperations;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllStructuralFeatures() const
{
    return e4c::tag< EClass__eAllStructuralFeatures_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllStructuralFeatures() const
{
    return m_EClass__eAllStructuralFeatures;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllSuperTypes() const
{
    return e4c::tag< EClass__eAllSuperTypes_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllSuperTypes() const
{
    return m_EClass__eAllSuperTypes;
}

e4c::tag_t EcorePackage::getTag_EClass__eIDAttribute() const
{
    return e4c::tag< EClass__eIDAttribute_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eIDAttribute() const
{
    return m_EClass__eIDAttribute;
}

e4c::tag_t EcorePackage::getTag_EClass__eStructuralFeatures() const
{
    return e4c::tag< EClass__eStructuralFeatures_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eStructuralFeatures() const
{
    return m_EClass__eStructuralFeatures;
}

e4c::tag_t EcorePackage::getTag_EClass__eGenericSuperTypes() const
{
    return e4c::tag< EClass__eGenericSuperTypes_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eGenericSuperTypes() const
{
    return m_EClass__eGenericSuperTypes;
}

e4c::tag_t EcorePackage::getTag_EClass__eAllGenericSuperTypes() const
{
    return e4c::tag< EClass__eAllGenericSuperTypes_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClass__eAllGenericSuperTypes() const
{
    return m_EClass__eAllGenericSuperTypes;
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceClassName() const
{
    return e4c::tag< EClassifier__instanceClassName_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClassName() const
{
    return m_EClassifier__instanceClassName;
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceClass() const
{
    return e4c::tag< EClassifier__instanceClass_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceClass() const
{
    return m_EClassifier__instanceClass;
}

e4c::tag_t EcorePackage::getTag_EClassifier__defaultValue() const
{
    return e4c::tag< EClassifier__defaultValue_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEClassifier__defaultValue() const
{
    return m_EClassifier__defaultValue;
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceTypeName() const
{
    return e4c::tag< EClassifier__instanceTypeName_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEClassifier__instanceTypeName() const
{
    return m_EClassifier__instanceTypeName;
}

e4c::tag_t EcorePackage::getTag_EClassifier__ePackage() const
{
    return e4c::tag< EClassifier__ePackage_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClassifier__ePackage() const
{
    return m_EClassifier__ePackage;
}

e4c::tag_t EcorePackage::getTag_EClassifier__eTypeParameters() const
{
    return e4c::tag< EClassifier__eTypeParameters_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEClassifier__eTypeParameters() const
{
    return m_EClassifier__eTypeParameters;
}

e4c::tag_t EcorePackage::getTag_EDataType__serializable() const
{
    return e4c::tag< EDataType__serializable_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEDataType__serializable() const
{
    return m_EDataType__serializable;
}

e4c::tag_t EcorePackage::getTag_EEnum__eLiterals() const
{
    return e4c::tag< EEnum__eLiterals_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEEnum__eLiterals() const
{
    return m_EEnum__eLiterals;
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__value() const
{
    return e4c::tag< EEnumLiteral__value_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__value() const
{
    return m_EEnumLiteral__value;
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__instance() const
{
    return e4c::tag< EEnumLiteral__instance_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__instance() const
{
    return m_EEnumLiteral__instance;
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__literal() const
{
    return e4c::tag< EEnumLiteral__literal_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEEnumLiteral__literal() const
{
    return m_EEnumLiteral__literal;
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__eEnum() const
{
    return e4c::tag< EEnumLiteral__eEnum_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEEnumLiteral__eEnum() const
{
    return m_EEnumLiteral__eEnum;
}

e4c::tag_t EcorePackage::getTag_EFactory__ePackage() const
{
    return e4c::tag< EFactory__ePackage_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEFactory__ePackage() const
{
    return m_EFactory__ePackage;
}

e4c::tag_t EcorePackage::getTag_EModelElement__eAnnotations() const
{
    return e4c::tag< EModelElement__eAnnotations_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEModelElement__eAnnotations() const
{
    return m_EModelElement__eAnnotations;
}

e4c::tag_t EcorePackage::getTag_ENamedElement__name() const
{
    return e4c::tag< ENamedElement__name_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getENamedElement__name() const
{
    return m_ENamedElement__name;
}

e4c::tag_t EcorePackage::getTag_EOperation__eContainingClass() const
{
    return e4c::tag< EOperation__eContainingClass_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEOperation__eContainingClass() const
{
    return m_EOperation__eContainingClass;
}

e4c::tag_t EcorePackage::getTag_EOperation__eTypeParameters() const
{
    return e4c::tag< EOperation__eTypeParameters_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEOperation__eTypeParameters() const
{
    return m_EOperation__eTypeParameters;
}

e4c::tag_t EcorePackage::getTag_EOperation__eParameters() const
{
    return e4c::tag< EOperation__eParameters_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEOperation__eParameters() const
{
    return m_EOperation__eParameters;
}

e4c::tag_t EcorePackage::getTag_EOperation__eExceptions() const
{
    return e4c::tag< EOperation__eExceptions_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEOperation__eExceptions() const
{
    return m_EOperation__eExceptions;
}

e4c::tag_t EcorePackage::getTag_EOperation__eGenericExceptions() const
{
    return e4c::tag< EOperation__eGenericExceptions_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEOperation__eGenericExceptions() const
{
    return m_EOperation__eGenericExceptions;
}

e4c::tag_t EcorePackage::getTag_EPackage__nsURI() const
{
    return e4c::tag< EPackage__nsURI_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEPackage__nsURI() const
{
    return m_EPackage__nsURI;
}

e4c::tag_t EcorePackage::getTag_EPackage__nsPrefix() const
{
    return e4c::tag< EPackage__nsPrefix_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEPackage__nsPrefix() const
{
    return m_EPackage__nsPrefix;
}

e4c::tag_t EcorePackage::getTag_EPackage__eFactoryInstance() const
{
    return e4c::tag< EPackage__eFactoryInstance_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEPackage__eFactoryInstance() const
{
    return m_EPackage__eFactoryInstance;
}

e4c::tag_t EcorePackage::getTag_EPackage__eClassifiers() const
{
    return e4c::tag< EPackage__eClassifiers_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEPackage__eClassifiers() const
{
    return m_EPackage__eClassifiers;
}

e4c::tag_t EcorePackage::getTag_EPackage__eSubpackages() const
{
    return e4c::tag< EPackage__eSubpackages_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEPackage__eSubpackages() const
{
    return m_EPackage__eSubpackages;
}

e4c::tag_t EcorePackage::getTag_EPackage__eSuperPackage() const
{
    return e4c::tag< EPackage__eSuperPackage_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEPackage__eSuperPackage() const
{
    return m_EPackage__eSuperPackage;
}

e4c::tag_t EcorePackage::getTag_EParameter__eOperation() const
{
    return e4c::tag< EParameter__eOperation_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEParameter__eOperation() const
{
    return m_EParameter__eOperation;
}

e4c::tag_t EcorePackage::getTag_EReference__containment() const
{
    return e4c::tag< EReference__containment_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEReference__containment() const
{
    return m_EReference__containment;
}

e4c::tag_t EcorePackage::getTag_EReference__container() const
{
    return e4c::tag< EReference__container_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEReference__container() const
{
    return m_EReference__container;
}

e4c::tag_t EcorePackage::getTag_EReference__resolveProxies() const
{
    return e4c::tag< EReference__resolveProxies_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEReference__resolveProxies() const
{
    return m_EReference__resolveProxies;
}

e4c::tag_t EcorePackage::getTag_EReference__eOpposite() const
{
    return e4c::tag< EReference__eOpposite_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEReference__eOpposite() const
{
    return m_EReference__eOpposite;
}

e4c::tag_t EcorePackage::getTag_EReference__eReferenceType() const
{
    return e4c::tag< EReference__eReferenceType_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEReference__eReferenceType() const
{
    return m_EReference__eReferenceType;
}

e4c::tag_t EcorePackage::getTag_EReference__eKeys() const
{
    return e4c::tag< EReference__eKeys_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEReference__eKeys() const
{
    return m_EReference__eKeys;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__changeable() const
{
    return e4c::tag< EStructuralFeature__changeable_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__changeable() const
{
    return m_EStructuralFeature__changeable;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__volatile() const
{
    return e4c::tag< EStructuralFeature__volatile_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__volatile() const
{
    return m_EStructuralFeature__volatile;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__transient() const
{
    return e4c::tag< EStructuralFeature__transient_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__transient() const
{
    return m_EStructuralFeature__transient;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__defaultValueLiteral() const
{
    return e4c::tag< EStructuralFeature__defaultValueLiteral_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValueLiteral() const
{
    return m_EStructuralFeature__defaultValueLiteral;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__defaultValue() const
{
    return e4c::tag< EStructuralFeature__defaultValue_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__defaultValue() const
{
    return m_EStructuralFeature__defaultValue;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__unsettable() const
{
    return e4c::tag< EStructuralFeature__unsettable_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__unsettable() const
{
    return m_EStructuralFeature__unsettable;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__derived() const
{
    return e4c::tag< EStructuralFeature__derived_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStructuralFeature__derived() const
{
    return m_EStructuralFeature__derived;
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__eContainingClass() const
{
    return e4c::tag< EStructuralFeature__eContainingClass_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEStructuralFeature__eContainingClass() const
{
    return m_EStructuralFeature__eContainingClass;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__ordered() const
{
    return e4c::tag< ETypedElement__ordered_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getETypedElement__ordered() const
{
    return m_ETypedElement__ordered;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__unique() const
{
    return e4c::tag< ETypedElement__unique_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getETypedElement__unique() const
{
    return m_ETypedElement__unique;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__lowerBound() const
{
    return e4c::tag< ETypedElement__lowerBound_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getETypedElement__lowerBound() const
{
    return m_ETypedElement__lowerBound;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__upperBound() const
{
    return e4c::tag< ETypedElement__upperBound_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getETypedElement__upperBound() const
{
    return m_ETypedElement__upperBound;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__many() const
{
    return e4c::tag< ETypedElement__many_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getETypedElement__many() const
{
    return m_ETypedElement__many;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__required() const
{
    return e4c::tag< ETypedElement__required_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getETypedElement__required() const
{
    return m_ETypedElement__required;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__eType() const
{
    return e4c::tag< ETypedElement__eType_tag >::get();
}

ecore::EReference_ptr EcorePackage::getETypedElement__eType() const
{
    return m_ETypedElement__eType;
}

e4c::tag_t EcorePackage::getTag_ETypedElement__eGenericType() const
{
    return e4c::tag< ETypedElement__eGenericType_tag >::get();
}

ecore::EReference_ptr EcorePackage::getETypedElement__eGenericType() const
{
    return m_ETypedElement__eGenericType;
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry__key() const
{
    return e4c::tag< EStringToStringMapEntry__key_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__key() const
{
    return m_EStringToStringMapEntry__key;
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry__value() const
{
    return e4c::tag< EStringToStringMapEntry__value_tag >::get();
}

ecore::EAttribute_ptr EcorePackage::getEStringToStringMapEntry__value() const
{
    return m_EStringToStringMapEntry__value;
}

e4c::tag_t EcorePackage::getTag_EGenericType__eUpperBound() const
{
    return e4c::tag< EGenericType__eUpperBound_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEGenericType__eUpperBound() const
{
    return m_EGenericType__eUpperBound;
}

e4c::tag_t EcorePackage::getTag_EGenericType__eTypeArguments() const
{
    return e4c::tag< EGenericType__eTypeArguments_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEGenericType__eTypeArguments() const
{
    return m_EGenericType__eTypeArguments;
}

e4c::tag_t EcorePackage::getTag_EGenericType__eRawType() const
{
    return e4c::tag< EGenericType__eRawType_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEGenericType__eRawType() const
{
    return m_EGenericType__eRawType;
}

e4c::tag_t EcorePackage::getTag_EGenericType__eLowerBound() const
{
    return e4c::tag< EGenericType__eLowerBound_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEGenericType__eLowerBound() const
{
    return m_EGenericType__eLowerBound;
}

e4c::tag_t EcorePackage::getTag_EGenericType__eTypeParameter() const
{
    return e4c::tag< EGenericType__eTypeParameter_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEGenericType__eTypeParameter() const
{
    return m_EGenericType__eTypeParameter;
}

e4c::tag_t EcorePackage::getTag_EGenericType__eClassifier() const
{
    return e4c::tag< EGenericType__eClassifier_tag >::get();
}

ecore::EReference_ptr EcorePackage::getEGenericType__eClassifier() const
{
    return m_EGenericType__eClassifier;
}

e4c::tag_t EcorePackage::getTag_ETypeParameter__eBounds() const
{
    return e4c::tag< ETypeParameter__eBounds_tag >::get();
}

ecore::EReference_ptr EcorePackage::getETypeParameter__eBounds() const
{
    return m_ETypeParameter__eBounds;
}


extern "C" ::ecore::EPackage_ptr e4c_ecore()
{
    return ::ecore::EcorePackage::_instance();
}
