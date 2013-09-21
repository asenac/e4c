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
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("iD");
        m_EAttribute->addEStructuralFeatures(ef);
        m_EAttribute->addEAllStructuralFeatures(ef);
        m_EAttribute->addEAttributes(ef);
        m_EAttribute->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAttributeType");
        m_EAttribute->addEStructuralFeatures(ef);
        m_EAttribute->addEAllStructuralFeatures(ef);
        m_EAttribute->addEReferences(ef);
        m_EAttribute->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("source");
        m_EAnnotation->addEStructuralFeatures(ef);
        m_EAnnotation->addEAllStructuralFeatures(ef);
        m_EAnnotation->addEAttributes(ef);
        m_EAnnotation->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("details");
        m_EAnnotation->addEStructuralFeatures(ef);
        m_EAnnotation->addEAllStructuralFeatures(ef);
        m_EAnnotation->addEReferences(ef);
        m_EAnnotation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eModelElement");
        m_EAnnotation->addEStructuralFeatures(ef);
        m_EAnnotation->addEAllStructuralFeatures(ef);
        m_EAnnotation->addEReferences(ef);
        m_EAnnotation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("contents");
        m_EAnnotation->addEStructuralFeatures(ef);
        m_EAnnotation->addEAllStructuralFeatures(ef);
        m_EAnnotation->addEReferences(ef);
        m_EAnnotation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("references");
        m_EAnnotation->addEStructuralFeatures(ef);
        m_EAnnotation->addEAllStructuralFeatures(ef);
        m_EAnnotation->addEReferences(ef);
        m_EAnnotation->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("abstract");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEAttributes(ef);
        m_EClass->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("interface");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEAttributes(ef);
        m_EClass->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eSuperTypes");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eOperations");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllAttributes");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllReferences");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eReferences");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAttributes");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllContainments");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllOperations");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllStructuralFeatures");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllSuperTypes");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eIDAttribute");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eStructuralFeatures");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eGenericSuperTypes");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAllGenericSuperTypes");
        m_EClass->addEStructuralFeatures(ef);
        m_EClass->addEAllStructuralFeatures(ef);
        m_EClass->addEReferences(ef);
        m_EClass->addEAllReferences(ef);
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
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("instanceClassName");
        m_EClassifier->addEStructuralFeatures(ef);
        m_EClassifier->addEAllStructuralFeatures(ef);
        m_EClassifier->addEAttributes(ef);
        m_EClassifier->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("instanceClass");
        m_EClassifier->addEStructuralFeatures(ef);
        m_EClassifier->addEAllStructuralFeatures(ef);
        m_EClassifier->addEAttributes(ef);
        m_EClassifier->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("defaultValue");
        m_EClassifier->addEStructuralFeatures(ef);
        m_EClassifier->addEAllStructuralFeatures(ef);
        m_EClassifier->addEAttributes(ef);
        m_EClassifier->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("instanceTypeName");
        m_EClassifier->addEStructuralFeatures(ef);
        m_EClassifier->addEAllStructuralFeatures(ef);
        m_EClassifier->addEAttributes(ef);
        m_EClassifier->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("ePackage");
        m_EClassifier->addEStructuralFeatures(ef);
        m_EClassifier->addEAllStructuralFeatures(ef);
        m_EClassifier->addEReferences(ef);
        m_EClassifier->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eTypeParameters");
        m_EClassifier->addEStructuralFeatures(ef);
        m_EClassifier->addEAllStructuralFeatures(ef);
        m_EClassifier->addEReferences(ef);
        m_EClassifier->addEAllReferences(ef);
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
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("serializable");
        m_EDataType->addEStructuralFeatures(ef);
        m_EDataType->addEAllStructuralFeatures(ef);
        m_EDataType->addEAttributes(ef);
        m_EDataType->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eLiterals");
        m_EEnum->addEStructuralFeatures(ef);
        m_EEnum->addEAllStructuralFeatures(ef);
        m_EEnum->addEReferences(ef);
        m_EEnum->addEAllReferences(ef);
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
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("value");
        m_EEnumLiteral->addEStructuralFeatures(ef);
        m_EEnumLiteral->addEAllStructuralFeatures(ef);
        m_EEnumLiteral->addEAttributes(ef);
        m_EEnumLiteral->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("instance");
        m_EEnumLiteral->addEStructuralFeatures(ef);
        m_EEnumLiteral->addEAllStructuralFeatures(ef);
        m_EEnumLiteral->addEAttributes(ef);
        m_EEnumLiteral->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("literal");
        m_EEnumLiteral->addEStructuralFeatures(ef);
        m_EEnumLiteral->addEAllStructuralFeatures(ef);
        m_EEnumLiteral->addEAttributes(ef);
        m_EEnumLiteral->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eEnum");
        m_EEnumLiteral->addEStructuralFeatures(ef);
        m_EEnumLiteral->addEAllStructuralFeatures(ef);
        m_EEnumLiteral->addEReferences(ef);
        m_EEnumLiteral->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("ePackage");
        m_EFactory->addEStructuralFeatures(ef);
        m_EFactory->addEAllStructuralFeatures(ef);
        m_EFactory->addEReferences(ef);
        m_EFactory->addEAllReferences(ef);
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
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eAnnotations");
        m_EModelElement->addEStructuralFeatures(ef);
        m_EModelElement->addEAllStructuralFeatures(ef);
        m_EModelElement->addEReferences(ef);
        m_EModelElement->addEAllReferences(ef);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEAnnotation");
        m_EModelElement->addEOperations(op);
        m_EModelElement->addEAllOperations(op);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("name");
        m_ENamedElement->addEStructuralFeatures(ef);
        m_ENamedElement->addEAllStructuralFeatures(ef);
        m_ENamedElement->addEAttributes(ef);
        m_ENamedElement->addEAllAttributes(ef);
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
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eContainingClass");
        m_EOperation->addEStructuralFeatures(ef);
        m_EOperation->addEAllStructuralFeatures(ef);
        m_EOperation->addEReferences(ef);
        m_EOperation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eTypeParameters");
        m_EOperation->addEStructuralFeatures(ef);
        m_EOperation->addEAllStructuralFeatures(ef);
        m_EOperation->addEReferences(ef);
        m_EOperation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eParameters");
        m_EOperation->addEStructuralFeatures(ef);
        m_EOperation->addEAllStructuralFeatures(ef);
        m_EOperation->addEReferences(ef);
        m_EOperation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eExceptions");
        m_EOperation->addEStructuralFeatures(ef);
        m_EOperation->addEAllStructuralFeatures(ef);
        m_EOperation->addEReferences(ef);
        m_EOperation->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eGenericExceptions");
        m_EOperation->addEStructuralFeatures(ef);
        m_EOperation->addEAllStructuralFeatures(ef);
        m_EOperation->addEReferences(ef);
        m_EOperation->addEAllReferences(ef);
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
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("nsURI");
        m_EPackage->addEStructuralFeatures(ef);
        m_EPackage->addEAllStructuralFeatures(ef);
        m_EPackage->addEAttributes(ef);
        m_EPackage->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("nsPrefix");
        m_EPackage->addEStructuralFeatures(ef);
        m_EPackage->addEAllStructuralFeatures(ef);
        m_EPackage->addEAttributes(ef);
        m_EPackage->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eFactoryInstance");
        m_EPackage->addEStructuralFeatures(ef);
        m_EPackage->addEAllStructuralFeatures(ef);
        m_EPackage->addEReferences(ef);
        m_EPackage->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eClassifiers");
        m_EPackage->addEStructuralFeatures(ef);
        m_EPackage->addEAllStructuralFeatures(ef);
        m_EPackage->addEReferences(ef);
        m_EPackage->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eSubpackages");
        m_EPackage->addEStructuralFeatures(ef);
        m_EPackage->addEAllStructuralFeatures(ef);
        m_EPackage->addEReferences(ef);
        m_EPackage->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eSuperPackage");
        m_EPackage->addEStructuralFeatures(ef);
        m_EPackage->addEAllStructuralFeatures(ef);
        m_EPackage->addEReferences(ef);
        m_EPackage->addEAllReferences(ef);
    }
    {
        ::ecore::EOperation_ptr op = ecoreFactory->createEOperation();
        op->setName("getEClassifier");
        m_EPackage->addEOperations(op);
        m_EPackage->addEAllOperations(op);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eOperation");
        m_EParameter->addEStructuralFeatures(ef);
        m_EParameter->addEAllStructuralFeatures(ef);
        m_EParameter->addEReferences(ef);
        m_EParameter->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("containment");
        m_EReference->addEStructuralFeatures(ef);
        m_EReference->addEAllStructuralFeatures(ef);
        m_EReference->addEAttributes(ef);
        m_EReference->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("container");
        m_EReference->addEStructuralFeatures(ef);
        m_EReference->addEAllStructuralFeatures(ef);
        m_EReference->addEAttributes(ef);
        m_EReference->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("resolveProxies");
        m_EReference->addEStructuralFeatures(ef);
        m_EReference->addEAllStructuralFeatures(ef);
        m_EReference->addEAttributes(ef);
        m_EReference->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eOpposite");
        m_EReference->addEStructuralFeatures(ef);
        m_EReference->addEAllStructuralFeatures(ef);
        m_EReference->addEReferences(ef);
        m_EReference->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eReferenceType");
        m_EReference->addEStructuralFeatures(ef);
        m_EReference->addEAllStructuralFeatures(ef);
        m_EReference->addEReferences(ef);
        m_EReference->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eKeys");
        m_EReference->addEStructuralFeatures(ef);
        m_EReference->addEAllStructuralFeatures(ef);
        m_EReference->addEReferences(ef);
        m_EReference->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("changeable");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("volatile");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("transient");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("defaultValueLiteral");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("defaultValue");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("unsettable");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("derived");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEAttributes(ef);
        m_EStructuralFeature->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eContainingClass");
        m_EStructuralFeature->addEStructuralFeatures(ef);
        m_EStructuralFeature->addEAllStructuralFeatures(ef);
        m_EStructuralFeature->addEReferences(ef);
        m_EStructuralFeature->addEAllReferences(ef);
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
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("ordered");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEAttributes(ef);
        m_ETypedElement->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("unique");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEAttributes(ef);
        m_ETypedElement->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("lowerBound");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEAttributes(ef);
        m_ETypedElement->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("upperBound");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEAttributes(ef);
        m_ETypedElement->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("many");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEAttributes(ef);
        m_ETypedElement->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("required");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEAttributes(ef);
        m_ETypedElement->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eType");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEReferences(ef);
        m_ETypedElement->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eGenericType");
        m_ETypedElement->addEStructuralFeatures(ef);
        m_ETypedElement->addEAllStructuralFeatures(ef);
        m_ETypedElement->addEReferences(ef);
        m_ETypedElement->addEAllReferences(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("key");
        m_EStringToStringMapEntry->addEStructuralFeatures(ef);
        m_EStringToStringMapEntry->addEAllStructuralFeatures(ef);
        m_EStringToStringMapEntry->addEAttributes(ef);
        m_EStringToStringMapEntry->addEAllAttributes(ef);
    }
    {
        ::ecore::EAttribute_ptr ef = ecoreFactory->createEAttribute();
        ef->setName("value");
        m_EStringToStringMapEntry->addEStructuralFeatures(ef);
        m_EStringToStringMapEntry->addEAllStructuralFeatures(ef);
        m_EStringToStringMapEntry->addEAttributes(ef);
        m_EStringToStringMapEntry->addEAllAttributes(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eUpperBound");
        m_EGenericType->addEStructuralFeatures(ef);
        m_EGenericType->addEAllStructuralFeatures(ef);
        m_EGenericType->addEReferences(ef);
        m_EGenericType->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eTypeArguments");
        m_EGenericType->addEStructuralFeatures(ef);
        m_EGenericType->addEAllStructuralFeatures(ef);
        m_EGenericType->addEReferences(ef);
        m_EGenericType->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eRawType");
        m_EGenericType->addEStructuralFeatures(ef);
        m_EGenericType->addEAllStructuralFeatures(ef);
        m_EGenericType->addEReferences(ef);
        m_EGenericType->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eLowerBound");
        m_EGenericType->addEStructuralFeatures(ef);
        m_EGenericType->addEAllStructuralFeatures(ef);
        m_EGenericType->addEReferences(ef);
        m_EGenericType->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eTypeParameter");
        m_EGenericType->addEStructuralFeatures(ef);
        m_EGenericType->addEAllStructuralFeatures(ef);
        m_EGenericType->addEReferences(ef);
        m_EGenericType->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eClassifier");
        m_EGenericType->addEStructuralFeatures(ef);
        m_EGenericType->addEAllStructuralFeatures(ef);
        m_EGenericType->addEReferences(ef);
        m_EGenericType->addEAllReferences(ef);
    }
    {
        ::ecore::EReference_ptr ef = ecoreFactory->createEReference();
        ef->setName("eBounds");
        m_ETypeParameter->addEStructuralFeatures(ef);
        m_ETypeParameter->addEAllStructuralFeatures(ef);
        m_ETypeParameter->addEReferences(ef);
        m_ETypeParameter->addEAllReferences(ef);
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

e4c::tag_t EcorePackage::getTag_EAttribute__eAttributeType() const
{
	return e4c::tag< EAttribute__eAttributeType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__source() const
{
	return e4c::tag< EAnnotation__source_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__details() const
{
	return e4c::tag< EAnnotation__details_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__eModelElement() const
{
	return e4c::tag< EAnnotation__eModelElement_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__contents() const
{
	return e4c::tag< EAnnotation__contents_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__references() const
{
	return e4c::tag< EAnnotation__references_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__abstract() const
{
	return e4c::tag< EClass__abstract_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__interface() const
{
	return e4c::tag< EClass__interface_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eSuperTypes() const
{
	return e4c::tag< EClass__eSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eOperations() const
{
	return e4c::tag< EClass__eOperations_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllAttributes() const
{
	return e4c::tag< EClass__eAllAttributes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllReferences() const
{
	return e4c::tag< EClass__eAllReferences_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eReferences() const
{
	return e4c::tag< EClass__eReferences_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAttributes() const
{
	return e4c::tag< EClass__eAttributes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllContainments() const
{
	return e4c::tag< EClass__eAllContainments_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllOperations() const
{
	return e4c::tag< EClass__eAllOperations_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllStructuralFeatures() const
{
	return e4c::tag< EClass__eAllStructuralFeatures_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllSuperTypes() const
{
	return e4c::tag< EClass__eAllSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eIDAttribute() const
{
	return e4c::tag< EClass__eIDAttribute_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eStructuralFeatures() const
{
	return e4c::tag< EClass__eStructuralFeatures_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eGenericSuperTypes() const
{
	return e4c::tag< EClass__eGenericSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllGenericSuperTypes() const
{
	return e4c::tag< EClass__eAllGenericSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceClassName() const
{
	return e4c::tag< EClassifier__instanceClassName_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceClass() const
{
	return e4c::tag< EClassifier__instanceClass_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__defaultValue() const
{
	return e4c::tag< EClassifier__defaultValue_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceTypeName() const
{
	return e4c::tag< EClassifier__instanceTypeName_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__ePackage() const
{
	return e4c::tag< EClassifier__ePackage_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__eTypeParameters() const
{
	return e4c::tag< EClassifier__eTypeParameters_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EDataType__serializable() const
{
	return e4c::tag< EDataType__serializable_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnum__eLiterals() const
{
	return e4c::tag< EEnum__eLiterals_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__value() const
{
	return e4c::tag< EEnumLiteral__value_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__instance() const
{
	return e4c::tag< EEnumLiteral__instance_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__literal() const
{
	return e4c::tag< EEnumLiteral__literal_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__eEnum() const
{
	return e4c::tag< EEnumLiteral__eEnum_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EFactory__ePackage() const
{
	return e4c::tag< EFactory__ePackage_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EModelElement__eAnnotations() const
{
	return e4c::tag< EModelElement__eAnnotations_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ENamedElement__name() const
{
	return e4c::tag< ENamedElement__name_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eContainingClass() const
{
	return e4c::tag< EOperation__eContainingClass_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eTypeParameters() const
{
	return e4c::tag< EOperation__eTypeParameters_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eParameters() const
{
	return e4c::tag< EOperation__eParameters_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eExceptions() const
{
	return e4c::tag< EOperation__eExceptions_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eGenericExceptions() const
{
	return e4c::tag< EOperation__eGenericExceptions_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__nsURI() const
{
	return e4c::tag< EPackage__nsURI_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__nsPrefix() const
{
	return e4c::tag< EPackage__nsPrefix_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eFactoryInstance() const
{
	return e4c::tag< EPackage__eFactoryInstance_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eClassifiers() const
{
	return e4c::tag< EPackage__eClassifiers_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eSubpackages() const
{
	return e4c::tag< EPackage__eSubpackages_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eSuperPackage() const
{
	return e4c::tag< EPackage__eSuperPackage_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EParameter__eOperation() const
{
	return e4c::tag< EParameter__eOperation_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__containment() const
{
	return e4c::tag< EReference__containment_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__container() const
{
	return e4c::tag< EReference__container_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__resolveProxies() const
{
	return e4c::tag< EReference__resolveProxies_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__eOpposite() const
{
	return e4c::tag< EReference__eOpposite_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__eReferenceType() const
{
	return e4c::tag< EReference__eReferenceType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__eKeys() const
{
	return e4c::tag< EReference__eKeys_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__changeable() const
{
	return e4c::tag< EStructuralFeature__changeable_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__volatile() const
{
	return e4c::tag< EStructuralFeature__volatile_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__transient() const
{
	return e4c::tag< EStructuralFeature__transient_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__defaultValueLiteral() const
{
	return e4c::tag< EStructuralFeature__defaultValueLiteral_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__defaultValue() const
{
	return e4c::tag< EStructuralFeature__defaultValue_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__unsettable() const
{
	return e4c::tag< EStructuralFeature__unsettable_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__derived() const
{
	return e4c::tag< EStructuralFeature__derived_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__eContainingClass() const
{
	return e4c::tag< EStructuralFeature__eContainingClass_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__ordered() const
{
	return e4c::tag< ETypedElement__ordered_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__unique() const
{
	return e4c::tag< ETypedElement__unique_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__lowerBound() const
{
	return e4c::tag< ETypedElement__lowerBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__upperBound() const
{
	return e4c::tag< ETypedElement__upperBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__many() const
{
	return e4c::tag< ETypedElement__many_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__required() const
{
	return e4c::tag< ETypedElement__required_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__eType() const
{
	return e4c::tag< ETypedElement__eType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__eGenericType() const
{
	return e4c::tag< ETypedElement__eGenericType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry__key() const
{
	return e4c::tag< EStringToStringMapEntry__key_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry__value() const
{
	return e4c::tag< EStringToStringMapEntry__value_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eUpperBound() const
{
	return e4c::tag< EGenericType__eUpperBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eTypeArguments() const
{
	return e4c::tag< EGenericType__eTypeArguments_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eRawType() const
{
	return e4c::tag< EGenericType__eRawType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eLowerBound() const
{
	return e4c::tag< EGenericType__eLowerBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eTypeParameter() const
{
	return e4c::tag< EGenericType__eTypeParameter_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eClassifier() const
{
	return e4c::tag< EGenericType__eClassifier_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypeParameter__eBounds() const
{
	return e4c::tag< ETypeParameter__eBounds_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_ecore()
{
	return ::ecore::EcorePackage::_instance();
}
