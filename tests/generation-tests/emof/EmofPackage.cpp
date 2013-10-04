#include "EmofPackage.hpp"
#include "EmofFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace emof;

EmofPackage::EmofPackage()
{
	m_eFactoryInstance = EmofFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_Boolean = ecoreFactory->createEDataType();
	m_Boolean->setName("Boolean");
	addEClassifiers(m_Boolean);
	m_Class = ecoreFactory->createEClass();
	m_Class->setName("Class");
	addEClassifiers(m_Class);
	m_Comment = ecoreFactory->createEClass();
	m_Comment->setName("Comment");
	addEClassifiers(m_Comment);
	m_DataType = ecoreFactory->createEClass();
	m_DataType->setName("DataType");
	addEClassifiers(m_DataType);
	m_Element = ecoreFactory->createEClass();
	m_Element->setName("Element");
	addEClassifiers(m_Element);
	m_Enumeration = ecoreFactory->createEClass();
	m_Enumeration->setName("Enumeration");
	addEClassifiers(m_Enumeration);
	m_EnumerationLiteral = ecoreFactory->createEClass();
	m_EnumerationLiteral->setName("EnumerationLiteral");
	addEClassifiers(m_EnumerationLiteral);
	m_Extent = ecoreFactory->createEClass();
	m_Extent->setName("Extent");
	addEClassifiers(m_Extent);
	m_Integer = ecoreFactory->createEDataType();
	m_Integer->setName("Integer");
	addEClassifiers(m_Integer);
	m_MultiplicityElement = ecoreFactory->createEClass();
	m_MultiplicityElement->setName("MultiplicityElement");
	addEClassifiers(m_MultiplicityElement);
	m_NamedElement = ecoreFactory->createEClass();
	m_NamedElement->setName("NamedElement");
	addEClassifiers(m_NamedElement);
	m_Object = ecoreFactory->createEClass();
	m_Object->setName("Object");
	addEClassifiers(m_Object);
	m_Operation = ecoreFactory->createEClass();
	m_Operation->setName("Operation");
	addEClassifiers(m_Operation);
	m_Package = ecoreFactory->createEClass();
	m_Package->setName("Package");
	addEClassifiers(m_Package);
	m_Parameter = ecoreFactory->createEClass();
	m_Parameter->setName("Parameter");
	addEClassifiers(m_Parameter);
	m_PrimitiveType = ecoreFactory->createEClass();
	m_PrimitiveType->setName("PrimitiveType");
	addEClassifiers(m_PrimitiveType);
	m_Property = ecoreFactory->createEClass();
	m_Property->setName("Property");
	addEClassifiers(m_Property);
	m_Real = ecoreFactory->createEDataType();
	m_Real->setName("Real");
	addEClassifiers(m_Real);
	m_String = ecoreFactory->createEDataType();
	m_String->setName("String");
	addEClassifiers(m_String);
	m_Tag = ecoreFactory->createEClass();
	m_Tag->setName("Tag");
	addEClassifiers(m_Tag);
	m_Type = ecoreFactory->createEClass();
	m_Type->setName("Type");
	addEClassifiers(m_Type);
	m_TypedElement = ecoreFactory->createEClass();
	m_TypedElement->setName("TypedElement");
	addEClassifiers(m_TypedElement);
	m_URIExtent = ecoreFactory->createEClass();
	m_URIExtent->setName("URIExtent");
	addEClassifiers(m_URIExtent);
	m_UnlimitedNatural = ecoreFactory->createEDataType();
	m_UnlimitedNatural->setName("UnlimitedNatural");
	addEClassifiers(m_UnlimitedNatural);

    m_Boolean->setSerializable(true);
    m_Integer->setSerializable(true);
    m_Real->setSerializable(true);
    m_String->setSerializable(true);
    m_UnlimitedNatural->setSerializable(true);
	
    {
        m_Class__isAbstract = ecoreFactory->createEAttribute();
        m_Class__isAbstract->setName("isAbstract");
        m_Class->addEStructuralFeatures(m_Class__isAbstract);
        m_Class->addEAllStructuralFeatures(m_Class__isAbstract);
        m_Class->addEAttributes(m_Class__isAbstract);
        m_Class->addEAllAttributes(m_Class__isAbstract);
    }
    {
        m_Class__ownedAttribute = ecoreFactory->createEReference();
        m_Class__ownedAttribute->setName("ownedAttribute");
        m_Class->addEStructuralFeatures(m_Class__ownedAttribute);
        m_Class->addEAllStructuralFeatures(m_Class__ownedAttribute);
        m_Class->addEReferences(m_Class__ownedAttribute);
        m_Class->addEAllReferences(m_Class__ownedAttribute);
    }
    {
        m_Class__ownedOperation = ecoreFactory->createEReference();
        m_Class__ownedOperation->setName("ownedOperation");
        m_Class->addEStructuralFeatures(m_Class__ownedOperation);
        m_Class->addEAllStructuralFeatures(m_Class__ownedOperation);
        m_Class->addEReferences(m_Class__ownedOperation);
        m_Class->addEAllReferences(m_Class__ownedOperation);
    }
    {
        m_Class__superClass = ecoreFactory->createEReference();
        m_Class__superClass->setName("superClass");
        m_Class->addEStructuralFeatures(m_Class__superClass);
        m_Class->addEAllStructuralFeatures(m_Class__superClass);
        m_Class->addEReferences(m_Class__superClass);
        m_Class->addEAllReferences(m_Class__superClass);
    }
    {
        m_Comment__annotatedElement = ecoreFactory->createEReference();
        m_Comment__annotatedElement->setName("annotatedElement");
        m_Comment->addEStructuralFeatures(m_Comment__annotatedElement);
        m_Comment->addEAllStructuralFeatures(m_Comment__annotatedElement);
        m_Comment->addEReferences(m_Comment__annotatedElement);
        m_Comment->addEAllReferences(m_Comment__annotatedElement);
    }
    {
        m_Element__ownedComment = ecoreFactory->createEReference();
        m_Element__ownedComment->setName("ownedComment");
        m_Element->addEStructuralFeatures(m_Element__ownedComment);
        m_Element->addEAllStructuralFeatures(m_Element__ownedComment);
        m_Element->addEReferences(m_Element__ownedComment);
        m_Element->addEAllReferences(m_Element__ownedComment);
    }
    {
        m_Element__tag = ecoreFactory->createEReference();
        m_Element__tag->setName("tag");
        m_Element->addEStructuralFeatures(m_Element__tag);
        m_Element->addEAllStructuralFeatures(m_Element__tag);
        m_Element->addEReferences(m_Element__tag);
        m_Element->addEAllReferences(m_Element__tag);
    }
    {
        m_Enumeration__ownedLiteral = ecoreFactory->createEReference();
        m_Enumeration__ownedLiteral->setName("ownedLiteral");
        m_Enumeration->addEStructuralFeatures(m_Enumeration__ownedLiteral);
        m_Enumeration->addEAllStructuralFeatures(m_Enumeration__ownedLiteral);
        m_Enumeration->addEReferences(m_Enumeration__ownedLiteral);
        m_Enumeration->addEAllReferences(m_Enumeration__ownedLiteral);
    }
    {
        m_EnumerationLiteral__enumeration = ecoreFactory->createEReference();
        m_EnumerationLiteral__enumeration->setName("enumeration");
        m_EnumerationLiteral->addEStructuralFeatures(m_EnumerationLiteral__enumeration);
        m_EnumerationLiteral->addEAllStructuralFeatures(m_EnumerationLiteral__enumeration);
        m_EnumerationLiteral->addEReferences(m_EnumerationLiteral__enumeration);
        m_EnumerationLiteral->addEAllReferences(m_EnumerationLiteral__enumeration);
    }
    {
        m_MultiplicityElement__isOrdered = ecoreFactory->createEAttribute();
        m_MultiplicityElement__isOrdered->setName("isOrdered");
        m_MultiplicityElement->addEStructuralFeatures(m_MultiplicityElement__isOrdered);
        m_MultiplicityElement->addEAllStructuralFeatures(m_MultiplicityElement__isOrdered);
        m_MultiplicityElement->addEAttributes(m_MultiplicityElement__isOrdered);
        m_MultiplicityElement->addEAllAttributes(m_MultiplicityElement__isOrdered);
    }
    {
        m_MultiplicityElement__isUnique = ecoreFactory->createEAttribute();
        m_MultiplicityElement__isUnique->setName("isUnique");
        m_MultiplicityElement->addEStructuralFeatures(m_MultiplicityElement__isUnique);
        m_MultiplicityElement->addEAllStructuralFeatures(m_MultiplicityElement__isUnique);
        m_MultiplicityElement->addEAttributes(m_MultiplicityElement__isUnique);
        m_MultiplicityElement->addEAllAttributes(m_MultiplicityElement__isUnique);
    }
    {
        m_MultiplicityElement__lower = ecoreFactory->createEAttribute();
        m_MultiplicityElement__lower->setName("lower");
        m_MultiplicityElement->addEStructuralFeatures(m_MultiplicityElement__lower);
        m_MultiplicityElement->addEAllStructuralFeatures(m_MultiplicityElement__lower);
        m_MultiplicityElement->addEAttributes(m_MultiplicityElement__lower);
        m_MultiplicityElement->addEAllAttributes(m_MultiplicityElement__lower);
    }
    {
        m_MultiplicityElement__upper = ecoreFactory->createEAttribute();
        m_MultiplicityElement__upper->setName("upper");
        m_MultiplicityElement->addEStructuralFeatures(m_MultiplicityElement__upper);
        m_MultiplicityElement->addEAllStructuralFeatures(m_MultiplicityElement__upper);
        m_MultiplicityElement->addEAttributes(m_MultiplicityElement__upper);
        m_MultiplicityElement->addEAllAttributes(m_MultiplicityElement__upper);
    }
    {
        m_NamedElement__name = ecoreFactory->createEAttribute();
        m_NamedElement__name->setName("name");
        m_NamedElement->addEStructuralFeatures(m_NamedElement__name);
        m_NamedElement->addEAllStructuralFeatures(m_NamedElement__name);
        m_NamedElement->addEAttributes(m_NamedElement__name);
        m_NamedElement->addEAllAttributes(m_NamedElement__name);
    }
    {
        m_Operation__class = ecoreFactory->createEReference();
        m_Operation__class->setName("class");
        m_Operation->addEStructuralFeatures(m_Operation__class);
        m_Operation->addEAllStructuralFeatures(m_Operation__class);
        m_Operation->addEReferences(m_Operation__class);
        m_Operation->addEAllReferences(m_Operation__class);
    }
    {
        m_Operation__ownedParameter = ecoreFactory->createEReference();
        m_Operation__ownedParameter->setName("ownedParameter");
        m_Operation->addEStructuralFeatures(m_Operation__ownedParameter);
        m_Operation->addEAllStructuralFeatures(m_Operation__ownedParameter);
        m_Operation->addEReferences(m_Operation__ownedParameter);
        m_Operation->addEAllReferences(m_Operation__ownedParameter);
    }
    {
        m_Operation__raisedException = ecoreFactory->createEReference();
        m_Operation__raisedException->setName("raisedException");
        m_Operation->addEStructuralFeatures(m_Operation__raisedException);
        m_Operation->addEAllStructuralFeatures(m_Operation__raisedException);
        m_Operation->addEReferences(m_Operation__raisedException);
        m_Operation->addEAllReferences(m_Operation__raisedException);
    }
    {
        m_Package__nestedPackage = ecoreFactory->createEReference();
        m_Package__nestedPackage->setName("nestedPackage");
        m_Package->addEStructuralFeatures(m_Package__nestedPackage);
        m_Package->addEAllStructuralFeatures(m_Package__nestedPackage);
        m_Package->addEReferences(m_Package__nestedPackage);
        m_Package->addEAllReferences(m_Package__nestedPackage);
    }
    {
        m_Package__ownedType = ecoreFactory->createEReference();
        m_Package__ownedType->setName("ownedType");
        m_Package->addEStructuralFeatures(m_Package__ownedType);
        m_Package->addEAllStructuralFeatures(m_Package__ownedType);
        m_Package->addEReferences(m_Package__ownedType);
        m_Package->addEAllReferences(m_Package__ownedType);
    }
    {
        m_Package__uri = ecoreFactory->createEAttribute();
        m_Package__uri->setName("uri");
        m_Package->addEStructuralFeatures(m_Package__uri);
        m_Package->addEAllStructuralFeatures(m_Package__uri);
        m_Package->addEAttributes(m_Package__uri);
        m_Package->addEAllAttributes(m_Package__uri);
    }
    {
        m_Parameter__operation = ecoreFactory->createEReference();
        m_Parameter__operation->setName("operation");
        m_Parameter->addEStructuralFeatures(m_Parameter__operation);
        m_Parameter->addEAllStructuralFeatures(m_Parameter__operation);
        m_Parameter->addEReferences(m_Parameter__operation);
        m_Parameter->addEAllReferences(m_Parameter__operation);
    }
    {
        m_Property__class = ecoreFactory->createEReference();
        m_Property__class->setName("class");
        m_Property->addEStructuralFeatures(m_Property__class);
        m_Property->addEAllStructuralFeatures(m_Property__class);
        m_Property->addEReferences(m_Property__class);
        m_Property->addEAllReferences(m_Property__class);
    }
    {
        m_Property__default = ecoreFactory->createEAttribute();
        m_Property__default->setName("default");
        m_Property->addEStructuralFeatures(m_Property__default);
        m_Property->addEAllStructuralFeatures(m_Property__default);
        m_Property->addEAttributes(m_Property__default);
        m_Property->addEAllAttributes(m_Property__default);
    }
    {
        m_Property__isComposite = ecoreFactory->createEAttribute();
        m_Property__isComposite->setName("isComposite");
        m_Property->addEStructuralFeatures(m_Property__isComposite);
        m_Property->addEAllStructuralFeatures(m_Property__isComposite);
        m_Property->addEAttributes(m_Property__isComposite);
        m_Property->addEAllAttributes(m_Property__isComposite);
    }
    {
        m_Property__isDerived = ecoreFactory->createEAttribute();
        m_Property__isDerived->setName("isDerived");
        m_Property->addEStructuralFeatures(m_Property__isDerived);
        m_Property->addEAllStructuralFeatures(m_Property__isDerived);
        m_Property->addEAttributes(m_Property__isDerived);
        m_Property->addEAllAttributes(m_Property__isDerived);
    }
    {
        m_Property__isId = ecoreFactory->createEAttribute();
        m_Property__isId->setName("isId");
        m_Property->addEStructuralFeatures(m_Property__isId);
        m_Property->addEAllStructuralFeatures(m_Property__isId);
        m_Property->addEAttributes(m_Property__isId);
        m_Property->addEAllAttributes(m_Property__isId);
    }
    {
        m_Property__isReadOnly = ecoreFactory->createEAttribute();
        m_Property__isReadOnly->setName("isReadOnly");
        m_Property->addEStructuralFeatures(m_Property__isReadOnly);
        m_Property->addEAllStructuralFeatures(m_Property__isReadOnly);
        m_Property->addEAttributes(m_Property__isReadOnly);
        m_Property->addEAllAttributes(m_Property__isReadOnly);
    }
    {
        m_Property__opposite = ecoreFactory->createEReference();
        m_Property__opposite->setName("opposite");
        m_Property->addEStructuralFeatures(m_Property__opposite);
        m_Property->addEAllStructuralFeatures(m_Property__opposite);
        m_Property->addEReferences(m_Property__opposite);
        m_Property->addEAllReferences(m_Property__opposite);
    }
    {
        m_Tag__element = ecoreFactory->createEReference();
        m_Tag__element->setName("element");
        m_Tag->addEStructuralFeatures(m_Tag__element);
        m_Tag->addEAllStructuralFeatures(m_Tag__element);
        m_Tag->addEReferences(m_Tag__element);
        m_Tag->addEAllReferences(m_Tag__element);
    }
    {
        m_Tag__name = ecoreFactory->createEAttribute();
        m_Tag__name->setName("name");
        m_Tag->addEStructuralFeatures(m_Tag__name);
        m_Tag->addEAllStructuralFeatures(m_Tag__name);
        m_Tag->addEAttributes(m_Tag__name);
        m_Tag->addEAllAttributes(m_Tag__name);
    }
    {
        m_Tag__value = ecoreFactory->createEAttribute();
        m_Tag__value->setName("value");
        m_Tag->addEStructuralFeatures(m_Tag__value);
        m_Tag->addEAllStructuralFeatures(m_Tag__value);
        m_Tag->addEAttributes(m_Tag__value);
        m_Tag->addEAllAttributes(m_Tag__value);
    }
    {
        m_Type__package = ecoreFactory->createEReference();
        m_Type__package->setName("package");
        m_Type->addEStructuralFeatures(m_Type__package);
        m_Type->addEAllStructuralFeatures(m_Type__package);
        m_Type->addEReferences(m_Type__package);
        m_Type->addEAllReferences(m_Type__package);
    }
    {
        m_TypedElement__type = ecoreFactory->createEReference();
        m_TypedElement__type->setName("type");
        m_TypedElement->addEStructuralFeatures(m_TypedElement__type);
        m_TypedElement->addEAllStructuralFeatures(m_TypedElement__type);
        m_TypedElement->addEReferences(m_TypedElement__type);
        m_TypedElement->addEAllReferences(m_TypedElement__type);
    }
	
	m_Class->addESuperTypes(m_Type);
	m_Class->addAllEAllOperations(m_Type->getEOperations());
	m_Class->addAllEAllReferences(m_Type->getEReferences());
	m_Class->addAllEAllAttributes(m_Type->getEAttributes());
	m_Class->addAllEAllStructuralFeatures(m_Type->getEStructuralFeatures());
	m_Comment->addESuperTypes(m_Element);
	m_Comment->addAllEAllOperations(m_Element->getEOperations());
	m_Comment->addAllEAllReferences(m_Element->getEReferences());
	m_Comment->addAllEAllAttributes(m_Element->getEAttributes());
	m_Comment->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_DataType->addESuperTypes(m_Type);
	m_DataType->addAllEAllOperations(m_Type->getEOperations());
	m_DataType->addAllEAllReferences(m_Type->getEReferences());
	m_DataType->addAllEAllAttributes(m_Type->getEAttributes());
	m_DataType->addAllEAllStructuralFeatures(m_Type->getEStructuralFeatures());
	m_Element->addESuperTypes(m_Object);
	m_Element->addAllEAllOperations(m_Object->getEOperations());
	m_Element->addAllEAllReferences(m_Object->getEReferences());
	m_Element->addAllEAllAttributes(m_Object->getEAttributes());
	m_Element->addAllEAllStructuralFeatures(m_Object->getEStructuralFeatures());
	m_Enumeration->addESuperTypes(m_DataType);
	m_Enumeration->addAllEAllOperations(m_DataType->getEOperations());
	m_Enumeration->addAllEAllReferences(m_DataType->getEReferences());
	m_Enumeration->addAllEAllAttributes(m_DataType->getEAttributes());
	m_Enumeration->addAllEAllStructuralFeatures(m_DataType->getEStructuralFeatures());
	m_EnumerationLiteral->addESuperTypes(m_NamedElement);
	m_EnumerationLiteral->addAllEAllOperations(m_NamedElement->getEOperations());
	m_EnumerationLiteral->addAllEAllReferences(m_NamedElement->getEReferences());
	m_EnumerationLiteral->addAllEAllAttributes(m_NamedElement->getEAttributes());
	m_EnumerationLiteral->addAllEAllStructuralFeatures(m_NamedElement->getEStructuralFeatures());
	m_Extent->addESuperTypes(m_Object);
	m_Extent->addAllEAllOperations(m_Object->getEOperations());
	m_Extent->addAllEAllReferences(m_Object->getEReferences());
	m_Extent->addAllEAllAttributes(m_Object->getEAttributes());
	m_Extent->addAllEAllStructuralFeatures(m_Object->getEStructuralFeatures());
	m_NamedElement->addESuperTypes(m_Element);
	m_NamedElement->addAllEAllOperations(m_Element->getEOperations());
	m_NamedElement->addAllEAllReferences(m_Element->getEReferences());
	m_NamedElement->addAllEAllAttributes(m_Element->getEAttributes());
	m_NamedElement->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_Operation->addESuperTypes(m_TypedElement);
	m_Operation->addAllEAllOperations(m_TypedElement->getEOperations());
	m_Operation->addAllEAllReferences(m_TypedElement->getEReferences());
	m_Operation->addAllEAllAttributes(m_TypedElement->getEAttributes());
	m_Operation->addAllEAllStructuralFeatures(m_TypedElement->getEStructuralFeatures());
	m_Operation->addESuperTypes(m_MultiplicityElement);
	m_Operation->addAllEAllOperations(m_MultiplicityElement->getEOperations());
	m_Operation->addAllEAllReferences(m_MultiplicityElement->getEReferences());
	m_Operation->addAllEAllAttributes(m_MultiplicityElement->getEAttributes());
	m_Operation->addAllEAllStructuralFeatures(m_MultiplicityElement->getEStructuralFeatures());
	m_Package->addESuperTypes(m_NamedElement);
	m_Package->addAllEAllOperations(m_NamedElement->getEOperations());
	m_Package->addAllEAllReferences(m_NamedElement->getEReferences());
	m_Package->addAllEAllAttributes(m_NamedElement->getEAttributes());
	m_Package->addAllEAllStructuralFeatures(m_NamedElement->getEStructuralFeatures());
	m_Parameter->addESuperTypes(m_TypedElement);
	m_Parameter->addAllEAllOperations(m_TypedElement->getEOperations());
	m_Parameter->addAllEAllReferences(m_TypedElement->getEReferences());
	m_Parameter->addAllEAllAttributes(m_TypedElement->getEAttributes());
	m_Parameter->addAllEAllStructuralFeatures(m_TypedElement->getEStructuralFeatures());
	m_Parameter->addESuperTypes(m_MultiplicityElement);
	m_Parameter->addAllEAllOperations(m_MultiplicityElement->getEOperations());
	m_Parameter->addAllEAllReferences(m_MultiplicityElement->getEReferences());
	m_Parameter->addAllEAllAttributes(m_MultiplicityElement->getEAttributes());
	m_Parameter->addAllEAllStructuralFeatures(m_MultiplicityElement->getEStructuralFeatures());
	m_PrimitiveType->addESuperTypes(m_DataType);
	m_PrimitiveType->addAllEAllOperations(m_DataType->getEOperations());
	m_PrimitiveType->addAllEAllReferences(m_DataType->getEReferences());
	m_PrimitiveType->addAllEAllAttributes(m_DataType->getEAttributes());
	m_PrimitiveType->addAllEAllStructuralFeatures(m_DataType->getEStructuralFeatures());
	m_Property->addESuperTypes(m_TypedElement);
	m_Property->addAllEAllOperations(m_TypedElement->getEOperations());
	m_Property->addAllEAllReferences(m_TypedElement->getEReferences());
	m_Property->addAllEAllAttributes(m_TypedElement->getEAttributes());
	m_Property->addAllEAllStructuralFeatures(m_TypedElement->getEStructuralFeatures());
	m_Property->addESuperTypes(m_MultiplicityElement);
	m_Property->addAllEAllOperations(m_MultiplicityElement->getEOperations());
	m_Property->addAllEAllReferences(m_MultiplicityElement->getEReferences());
	m_Property->addAllEAllAttributes(m_MultiplicityElement->getEAttributes());
	m_Property->addAllEAllStructuralFeatures(m_MultiplicityElement->getEStructuralFeatures());
	m_Tag->addESuperTypes(m_Element);
	m_Tag->addAllEAllOperations(m_Element->getEOperations());
	m_Tag->addAllEAllReferences(m_Element->getEReferences());
	m_Tag->addAllEAllAttributes(m_Element->getEAttributes());
	m_Tag->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_Type->addESuperTypes(m_NamedElement);
	m_Type->addAllEAllOperations(m_NamedElement->getEOperations());
	m_Type->addAllEAllReferences(m_NamedElement->getEReferences());
	m_Type->addAllEAllAttributes(m_NamedElement->getEAttributes());
	m_Type->addAllEAllStructuralFeatures(m_NamedElement->getEStructuralFeatures());
	m_TypedElement->addESuperTypes(m_NamedElement);
	m_TypedElement->addAllEAllOperations(m_NamedElement->getEOperations());
	m_TypedElement->addAllEAllReferences(m_NamedElement->getEReferences());
	m_TypedElement->addAllEAllAttributes(m_NamedElement->getEAttributes());
	m_TypedElement->addAllEAllStructuralFeatures(m_NamedElement->getEStructuralFeatures());
	m_URIExtent->addESuperTypes(m_Extent);
	m_URIExtent->addAllEAllOperations(m_Extent->getEOperations());
	m_URIExtent->addAllEAllReferences(m_Extent->getEReferences());
	m_URIExtent->addAllEAllAttributes(m_Extent->getEAttributes());
	m_URIExtent->addAllEAllStructuralFeatures(m_Extent->getEStructuralFeatures());
	
	
	m_Class->addFeatureAccesors(m_Class__isAbstract, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Class_ptr >(o)->getIsAbstract()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Class->addFeatureAccesors(m_Class__ownedAttribute, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Class_ptr >(o)->getOwnedAttribute()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Class->addFeatureAccesors(m_Class__ownedOperation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Class_ptr >(o)->getOwnedOperation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Class->addFeatureAccesors(m_Class__superClass, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Class_ptr >(o)->getSuperClass()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Comment->addFeatureAccesors(m_Comment__annotatedElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Comment_ptr >(o)->getAnnotatedElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__ownedComment, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Element_ptr >(o)->getOwnedComment()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Element->addFeatureAccesors(m_Element__tag, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Element_ptr >(o)->getTag()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Enumeration->addFeatureAccesors(m_Enumeration__ownedLiteral, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Enumeration_ptr >(o)->getOwnedLiteral()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_EnumerationLiteral->addFeatureAccesors(m_EnumerationLiteral__enumeration, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::EnumerationLiteral_ptr >(o)->getEnumeration()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MultiplicityElement->addFeatureAccesors(m_MultiplicityElement__isOrdered, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::MultiplicityElement_ptr >(o)->getIsOrdered()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MultiplicityElement->addFeatureAccesors(m_MultiplicityElement__isUnique, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::MultiplicityElement_ptr >(o)->getIsUnique()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MultiplicityElement->addFeatureAccesors(m_MultiplicityElement__lower, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::MultiplicityElement_ptr >(o)->getLower()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_MultiplicityElement->addFeatureAccesors(m_MultiplicityElement__upper, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::MultiplicityElement_ptr >(o)->getUpper()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NamedElement->addFeatureAccesors(m_NamedElement__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::NamedElement_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Operation->addFeatureAccesors(m_Operation__class, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Operation_ptr >(o)->getClass()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Operation->addFeatureAccesors(m_Operation__ownedParameter, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Operation_ptr >(o)->getOwnedParameter()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Operation->addFeatureAccesors(m_Operation__raisedException, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Operation_ptr >(o)->getRaisedException()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Package->addFeatureAccesors(m_Package__nestedPackage, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Package_ptr >(o)->getNestedPackage()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Package->addFeatureAccesors(m_Package__ownedType, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Package_ptr >(o)->getOwnedType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Package->addFeatureAccesors(m_Package__uri, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Package_ptr >(o)->getUri()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Parameter->addFeatureAccesors(m_Parameter__operation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Parameter_ptr >(o)->getOperation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__class, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getClass()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__default, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getDefault()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__isComposite, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getIsComposite()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__isDerived, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getIsDerived()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__isId, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getIsId()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__isReadOnly, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getIsReadOnly()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__opposite, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Property_ptr >(o)->getOpposite()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Tag->addFeatureAccesors(m_Tag__element, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Tag_ptr >(o)->getElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Tag->addFeatureAccesors(m_Tag__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Tag_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Tag->addFeatureAccesors(m_Tag__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Tag_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Type->addFeatureAccesors(m_Type__package, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::Type_ptr >(o)->getPackage()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TypedElement->addFeatureAccesors(m_TypedElement__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< emof::TypedElement_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const EmofPackage_ptr EmofPackage::_instance()
{
	static EmofPackage __instance;
	return &__instance;
}

ecore::EDataType_ptr EmofPackage::getBoolean() const
{
	return m_Boolean;
}
  	
e4c::tag_t EmofPackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
ecore::EClass_ptr EmofPackage::getClass() const
{
	return m_Class;
}
  	
e4c::tag_t EmofPackage::getTag_Class() const
{
	return e4c::tag< Class >::get();
}
 
ecore::EClass_ptr EmofPackage::getComment() const
{
	return m_Comment;
}
  	
e4c::tag_t EmofPackage::getTag_Comment() const
{
	return e4c::tag< Comment >::get();
}
 
ecore::EClass_ptr EmofPackage::getDataType() const
{
	return m_DataType;
}
  	
e4c::tag_t EmofPackage::getTag_DataType() const
{
	return e4c::tag< DataType >::get();
}
 
ecore::EClass_ptr EmofPackage::getElement() const
{
	return m_Element;
}
  	
e4c::tag_t EmofPackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
ecore::EClass_ptr EmofPackage::getEnumeration() const
{
	return m_Enumeration;
}
  	
e4c::tag_t EmofPackage::getTag_Enumeration() const
{
	return e4c::tag< Enumeration >::get();
}
 
ecore::EClass_ptr EmofPackage::getEnumerationLiteral() const
{
	return m_EnumerationLiteral;
}
  	
e4c::tag_t EmofPackage::getTag_EnumerationLiteral() const
{
	return e4c::tag< EnumerationLiteral >::get();
}
 
ecore::EClass_ptr EmofPackage::getExtent() const
{
	return m_Extent;
}
  	
e4c::tag_t EmofPackage::getTag_Extent() const
{
	return e4c::tag< Extent >::get();
}
 
ecore::EDataType_ptr EmofPackage::getInteger() const
{
	return m_Integer;
}
  	
e4c::tag_t EmofPackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
ecore::EClass_ptr EmofPackage::getMultiplicityElement() const
{
	return m_MultiplicityElement;
}
  	
e4c::tag_t EmofPackage::getTag_MultiplicityElement() const
{
	return e4c::tag< MultiplicityElement >::get();
}
 
ecore::EClass_ptr EmofPackage::getNamedElement() const
{
	return m_NamedElement;
}
  	
e4c::tag_t EmofPackage::getTag_NamedElement() const
{
	return e4c::tag< NamedElement >::get();
}
 
ecore::EClass_ptr EmofPackage::getObject() const
{
	return m_Object;
}
  	
e4c::tag_t EmofPackage::getTag_Object() const
{
	return e4c::tag< Object >::get();
}
 
ecore::EClass_ptr EmofPackage::getOperation() const
{
	return m_Operation;
}
  	
e4c::tag_t EmofPackage::getTag_Operation() const
{
	return e4c::tag< Operation >::get();
}
 
ecore::EClass_ptr EmofPackage::getPackage() const
{
	return m_Package;
}
  	
e4c::tag_t EmofPackage::getTag_Package() const
{
	return e4c::tag< Package >::get();
}
 
ecore::EClass_ptr EmofPackage::getParameter() const
{
	return m_Parameter;
}
  	
e4c::tag_t EmofPackage::getTag_Parameter() const
{
	return e4c::tag< Parameter >::get();
}
 
ecore::EClass_ptr EmofPackage::getPrimitiveType() const
{
	return m_PrimitiveType;
}
  	
e4c::tag_t EmofPackage::getTag_PrimitiveType() const
{
	return e4c::tag< PrimitiveType >::get();
}
 
ecore::EClass_ptr EmofPackage::getProperty() const
{
	return m_Property;
}
  	
e4c::tag_t EmofPackage::getTag_Property() const
{
	return e4c::tag< Property >::get();
}
 
ecore::EDataType_ptr EmofPackage::getReal() const
{
	return m_Real;
}
  	
e4c::tag_t EmofPackage::getTag_Real() const
{
	return e4c::tag< Real >::get();
}
 
ecore::EDataType_ptr EmofPackage::getString() const
{
	return m_String;
}
  	
e4c::tag_t EmofPackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
ecore::EClass_ptr EmofPackage::getTag() const
{
	return m_Tag;
}
  	
e4c::tag_t EmofPackage::getTag_Tag() const
{
	return e4c::tag< Tag >::get();
}
 
ecore::EClass_ptr EmofPackage::getType() const
{
	return m_Type;
}
  	
e4c::tag_t EmofPackage::getTag_Type() const
{
	return e4c::tag< Type >::get();
}
 
ecore::EClass_ptr EmofPackage::getTypedElement() const
{
	return m_TypedElement;
}
  	
e4c::tag_t EmofPackage::getTag_TypedElement() const
{
	return e4c::tag< TypedElement >::get();
}
 
ecore::EClass_ptr EmofPackage::getURIExtent() const
{
	return m_URIExtent;
}
  	
e4c::tag_t EmofPackage::getTag_URIExtent() const
{
	return e4c::tag< URIExtent >::get();
}
 
ecore::EDataType_ptr EmofPackage::getUnlimitedNatural() const
{
	return m_UnlimitedNatural;
}
  	
e4c::tag_t EmofPackage::getTag_UnlimitedNatural() const
{
	return e4c::tag< UnlimitedNatural >::get();
}
 
e4c::tag_t EmofPackage::getTag_Class__isAbstract() const
{
	return e4c::tag< Class__isAbstract_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getClass__isAbstract() const
{
	return m_Class__isAbstract;
}

e4c::tag_t EmofPackage::getTag_Class__ownedAttribute() const
{
	return e4c::tag< Class__ownedAttribute_tag >::get();
}

ecore::EReference_ptr EmofPackage::getClass__ownedAttribute() const
{
	return m_Class__ownedAttribute;
}

e4c::tag_t EmofPackage::getTag_Class__ownedOperation() const
{
	return e4c::tag< Class__ownedOperation_tag >::get();
}

ecore::EReference_ptr EmofPackage::getClass__ownedOperation() const
{
	return m_Class__ownedOperation;
}

e4c::tag_t EmofPackage::getTag_Class__superClass() const
{
	return e4c::tag< Class__superClass_tag >::get();
}

ecore::EReference_ptr EmofPackage::getClass__superClass() const
{
	return m_Class__superClass;
}

e4c::tag_t EmofPackage::getTag_Comment__annotatedElement() const
{
	return e4c::tag< Comment__annotatedElement_tag >::get();
}

ecore::EReference_ptr EmofPackage::getComment__annotatedElement() const
{
	return m_Comment__annotatedElement;
}

e4c::tag_t EmofPackage::getTag_Element__ownedComment() const
{
	return e4c::tag< Element__ownedComment_tag >::get();
}

ecore::EReference_ptr EmofPackage::getElement__ownedComment() const
{
	return m_Element__ownedComment;
}

e4c::tag_t EmofPackage::getTag_Element__tag() const
{
	return e4c::tag< Element__tag_tag >::get();
}

ecore::EReference_ptr EmofPackage::getElement__tag() const
{
	return m_Element__tag;
}

e4c::tag_t EmofPackage::getTag_Enumeration__ownedLiteral() const
{
	return e4c::tag< Enumeration__ownedLiteral_tag >::get();
}

ecore::EReference_ptr EmofPackage::getEnumeration__ownedLiteral() const
{
	return m_Enumeration__ownedLiteral;
}

e4c::tag_t EmofPackage::getTag_EnumerationLiteral__enumeration() const
{
	return e4c::tag< EnumerationLiteral__enumeration_tag >::get();
}

ecore::EReference_ptr EmofPackage::getEnumerationLiteral__enumeration() const
{
	return m_EnumerationLiteral__enumeration;
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__isOrdered() const
{
	return e4c::tag< MultiplicityElement__isOrdered_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getMultiplicityElement__isOrdered() const
{
	return m_MultiplicityElement__isOrdered;
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__isUnique() const
{
	return e4c::tag< MultiplicityElement__isUnique_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getMultiplicityElement__isUnique() const
{
	return m_MultiplicityElement__isUnique;
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__lower() const
{
	return e4c::tag< MultiplicityElement__lower_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getMultiplicityElement__lower() const
{
	return m_MultiplicityElement__lower;
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__upper() const
{
	return e4c::tag< MultiplicityElement__upper_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getMultiplicityElement__upper() const
{
	return m_MultiplicityElement__upper;
}

e4c::tag_t EmofPackage::getTag_NamedElement__name() const
{
	return e4c::tag< NamedElement__name_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getNamedElement__name() const
{
	return m_NamedElement__name;
}

e4c::tag_t EmofPackage::getTag_Operation__class() const
{
	return e4c::tag< Operation__class_tag >::get();
}

ecore::EReference_ptr EmofPackage::getOperation__class() const
{
	return m_Operation__class;
}

e4c::tag_t EmofPackage::getTag_Operation__ownedParameter() const
{
	return e4c::tag< Operation__ownedParameter_tag >::get();
}

ecore::EReference_ptr EmofPackage::getOperation__ownedParameter() const
{
	return m_Operation__ownedParameter;
}

e4c::tag_t EmofPackage::getTag_Operation__raisedException() const
{
	return e4c::tag< Operation__raisedException_tag >::get();
}

ecore::EReference_ptr EmofPackage::getOperation__raisedException() const
{
	return m_Operation__raisedException;
}

e4c::tag_t EmofPackage::getTag_Package__nestedPackage() const
{
	return e4c::tag< Package__nestedPackage_tag >::get();
}

ecore::EReference_ptr EmofPackage::getPackage__nestedPackage() const
{
	return m_Package__nestedPackage;
}

e4c::tag_t EmofPackage::getTag_Package__ownedType() const
{
	return e4c::tag< Package__ownedType_tag >::get();
}

ecore::EReference_ptr EmofPackage::getPackage__ownedType() const
{
	return m_Package__ownedType;
}

e4c::tag_t EmofPackage::getTag_Package__uri() const
{
	return e4c::tag< Package__uri_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getPackage__uri() const
{
	return m_Package__uri;
}

e4c::tag_t EmofPackage::getTag_Parameter__operation() const
{
	return e4c::tag< Parameter__operation_tag >::get();
}

ecore::EReference_ptr EmofPackage::getParameter__operation() const
{
	return m_Parameter__operation;
}

e4c::tag_t EmofPackage::getTag_Property__class() const
{
	return e4c::tag< Property__class_tag >::get();
}

ecore::EReference_ptr EmofPackage::getProperty__class() const
{
	return m_Property__class;
}

e4c::tag_t EmofPackage::getTag_Property__default() const
{
	return e4c::tag< Property__default_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getProperty__default() const
{
	return m_Property__default;
}

e4c::tag_t EmofPackage::getTag_Property__isComposite() const
{
	return e4c::tag< Property__isComposite_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getProperty__isComposite() const
{
	return m_Property__isComposite;
}

e4c::tag_t EmofPackage::getTag_Property__isDerived() const
{
	return e4c::tag< Property__isDerived_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getProperty__isDerived() const
{
	return m_Property__isDerived;
}

e4c::tag_t EmofPackage::getTag_Property__isId() const
{
	return e4c::tag< Property__isId_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getProperty__isId() const
{
	return m_Property__isId;
}

e4c::tag_t EmofPackage::getTag_Property__isReadOnly() const
{
	return e4c::tag< Property__isReadOnly_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getProperty__isReadOnly() const
{
	return m_Property__isReadOnly;
}

e4c::tag_t EmofPackage::getTag_Property__opposite() const
{
	return e4c::tag< Property__opposite_tag >::get();
}

ecore::EReference_ptr EmofPackage::getProperty__opposite() const
{
	return m_Property__opposite;
}

e4c::tag_t EmofPackage::getTag_Tag__element() const
{
	return e4c::tag< Tag__element_tag >::get();
}

ecore::EReference_ptr EmofPackage::getTag__element() const
{
	return m_Tag__element;
}

e4c::tag_t EmofPackage::getTag_Tag__name() const
{
	return e4c::tag< Tag__name_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getTag__name() const
{
	return m_Tag__name;
}

e4c::tag_t EmofPackage::getTag_Tag__value() const
{
	return e4c::tag< Tag__value_tag >::get();
}

ecore::EAttribute_ptr EmofPackage::getTag__value() const
{
	return m_Tag__value;
}

e4c::tag_t EmofPackage::getTag_Type__package() const
{
	return e4c::tag< Type__package_tag >::get();
}

ecore::EReference_ptr EmofPackage::getType__package() const
{
	return m_Type__package;
}

e4c::tag_t EmofPackage::getTag_TypedElement__type() const
{
	return e4c::tag< TypedElement__type_tag >::get();
}

ecore::EReference_ptr EmofPackage::getTypedElement__type() const
{
	return m_TypedElement__type;
}


extern "C" ::ecore::EPackage_ptr e4c_emof()
{
	return ::emof::EmofPackage::_instance();
}
