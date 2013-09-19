
#ifndef EMF_CPP_ECORE_META_HPP
#define EMF_CPP_ECORE_META_HPP

#include <e4c/definition.hpp>
#include <ecore/fwd.hpp>


namespace ecore
{



struct EAttribute__iD_tag
{
	typedef EAttribute eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EAttribute__eAttributeType_tag
{
	typedef EAttribute eClass;
	typedef ::ecore::EDataType eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EAttribute__eAttributeType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EAnnotation__source_tag
{
	typedef EAnnotation eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EAnnotation__details_tag
{
	typedef EAnnotation eClass;
	typedef ::ecore::EStringToStringMapEntry eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EAnnotation__details_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EAnnotation__eModelElement_tag
{
	typedef EAnnotation eClass;
	typedef ::ecore::EModelElement eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EModelElement__eAnnotations_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EAnnotation__contents_tag
{
	typedef EAnnotation eClass;
	typedef ::ecore::EObject eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EAnnotation__contents_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EAnnotation__references_tag
{
	typedef EAnnotation eClass;
	typedef ::ecore::EObject eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EAnnotation__references_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__abstract_tag
{
	typedef EClass eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__interface_tag
{
	typedef EClass eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eSuperTypes_tag
{
	typedef EClass eClass;
	typedef ::ecore::EClass eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eSuperTypes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eOperations_tag
{
	typedef EClass eClass;
	typedef ::ecore::EOperation eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EOperation__eContainingClass_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllAttributes_tag
{
	typedef EClass eClass;
	typedef ::ecore::EAttribute eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllAttributes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllReferences_tag
{
	typedef EClass eClass;
	typedef ::ecore::EReference eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllReferences_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eReferences_tag
{
	typedef EClass eClass;
	typedef ::ecore::EReference eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eReferences_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAttributes_tag
{
	typedef EClass eClass;
	typedef ::ecore::EAttribute eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAttributes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllContainments_tag
{
	typedef EClass eClass;
	typedef ::ecore::EReference eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllContainments_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllOperations_tag
{
	typedef EClass eClass;
	typedef ::ecore::EOperation eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllOperations_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllStructuralFeatures_tag
{
	typedef EClass eClass;
	typedef ::ecore::EStructuralFeature eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllStructuralFeatures_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllSuperTypes_tag
{
	typedef EClass eClass;
	typedef ::ecore::EClass eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllSuperTypes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eIDAttribute_tag
{
	typedef EClass eClass;
	typedef ::ecore::EAttribute eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eIDAttribute_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eStructuralFeatures_tag
{
	typedef EClass eClass;
	typedef ::ecore::EStructuralFeature eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EStructuralFeature__eContainingClass_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eGenericSuperTypes_tag
{
	typedef EClass eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eGenericSuperTypes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClass__eAllGenericSuperTypes_tag
{
	typedef EClass eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClass__eAllGenericSuperTypes_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClassifier__instanceClassName_tag
{
	typedef EClassifier eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClassifier__instanceClass_tag
{
	typedef EClassifier eClass;
	typedef ::ecore::EJavaClass eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClassifier__defaultValue_tag
{
	typedef EClassifier eClass;
	typedef ::ecore::EJavaObject eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClassifier__instanceTypeName_tag
{
	typedef EClassifier eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClassifier__ePackage_tag
{
	typedef EClassifier eClass;
	typedef ::ecore::EPackage eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EPackage__eClassifiers_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EClassifier__eTypeParameters_tag
{
	typedef EClassifier eClass;
	typedef ::ecore::ETypeParameter eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EClassifier__eTypeParameters_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EDataType__serializable_tag
{
	typedef EDataType eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EEnum__eLiterals_tag
{
	typedef EEnum eClass;
	typedef ::ecore::EEnumLiteral eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EEnumLiteral__eEnum_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EEnumLiteral__value_tag
{
	typedef EEnumLiteral eClass;
	typedef ::ecore::EInt eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EEnumLiteral__instance_tag
{
	typedef EEnumLiteral eClass;
	typedef ::ecore::EEnumerator eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EEnumLiteral__literal_tag
{
	typedef EEnumLiteral eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EEnumLiteral__eEnum_tag
{
	typedef EEnumLiteral eClass;
	typedef ::ecore::EEnum eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EEnum__eLiterals_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EFactory__ePackage_tag
{
	typedef EFactory eClass;
	typedef ::ecore::EPackage eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EPackage__eFactoryInstance_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EModelElement__eAnnotations_tag
{
	typedef EModelElement eClass;
	typedef ::ecore::EAnnotation eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EAnnotation__eModelElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ENamedElement__name_tag
{
	typedef ENamedElement eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EOperation__eContainingClass_tag
{
	typedef EOperation eClass;
	typedef ::ecore::EClass eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EClass__eOperations_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EOperation__eTypeParameters_tag
{
	typedef EOperation eClass;
	typedef ::ecore::ETypeParameter eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EOperation__eTypeParameters_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EOperation__eParameters_tag
{
	typedef EOperation eClass;
	typedef ::ecore::EParameter eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EParameter__eOperation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EOperation__eExceptions_tag
{
	typedef EOperation eClass;
	typedef ::ecore::EClassifier eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EOperation__eExceptions_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EOperation__eGenericExceptions_tag
{
	typedef EOperation eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EOperation__eGenericExceptions_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EPackage__nsURI_tag
{
	typedef EPackage eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EPackage__nsPrefix_tag
{
	typedef EPackage eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EPackage__eFactoryInstance_tag
{
	typedef EPackage eClass;
	typedef ::ecore::EFactory eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EFactory__ePackage_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EPackage__eClassifiers_tag
{
	typedef EPackage eClass;
	typedef ::ecore::EClassifier eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EClassifier__ePackage_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EPackage__eSubpackages_tag
{
	typedef EPackage eClass;
	typedef ::ecore::EPackage eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::ecore::EPackage__eSuperPackage_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EPackage__eSuperPackage_tag
{
	typedef EPackage eClass;
	typedef ::ecore::EPackage eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EPackage__eSubpackages_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EParameter__eOperation_tag
{
	typedef EParameter eClass;
	typedef ::ecore::EOperation eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EOperation__eParameters_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EReference__containment_tag
{
	typedef EReference eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EReference__container_tag
{
	typedef EReference eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EReference__resolveProxies_tag
{
	typedef EReference eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EReference__eOpposite_tag
{
	typedef EReference eClass;
	typedef ::ecore::EReference eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EReference__eOpposite_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EReference__eReferenceType_tag
{
	typedef EReference eClass;
	typedef ::ecore::EClass eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EReference__eReferenceType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EReference__eKeys_tag
{
	typedef EReference eClass;
	typedef ::ecore::EAttribute eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EReference__eKeys_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__changeable_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__volatile_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__transient_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__defaultValueLiteral_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__defaultValue_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EJavaObject eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__unsettable_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__derived_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStructuralFeature__eContainingClass_tag
{
	typedef EStructuralFeature eClass;
	typedef ::ecore::EClass eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::ecore::EClass__eStructuralFeatures_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__ordered_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__unique_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__lowerBound_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EInt eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__upperBound_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EInt eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__many_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__required_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__eType_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EClassifier eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ETypedElement__eType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypedElement__eGenericType_tag
{
	typedef ETypedElement eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ETypedElement__eGenericType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStringToStringMapEntry__key_tag
{
	typedef EStringToStringMapEntry eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EStringToStringMapEntry__value_tag
{
	typedef EStringToStringMapEntry eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EGenericType__eUpperBound_tag
{
	typedef EGenericType eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EGenericType__eUpperBound_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EGenericType__eTypeArguments_tag
{
	typedef EGenericType eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EGenericType__eTypeArguments_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EGenericType__eRawType_tag
{
	typedef EGenericType eClass;
	typedef ::ecore::EClassifier eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EGenericType__eRawType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EGenericType__eLowerBound_tag
{
	typedef EGenericType eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EGenericType__eLowerBound_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EGenericType__eTypeParameter_tag
{
	typedef EGenericType eClass;
	typedef ::ecore::ETypeParameter eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EGenericType__eTypeParameter_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EGenericType__eClassifier_tag
{
	typedef EGenericType eClass;
	typedef ::ecore::EClassifier eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef EGenericType__eClassifier_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ETypeParameter__eBounds_tag
{
	typedef ETypeParameter eClass;
	typedef ::ecore::EGenericType eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ETypeParameter__eBounds_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // ecore


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::ecore::EcorePackage >
{
	typedef boost::mpl::list< ::ecore::EAttribute,
	                          ::ecore::EAnnotation,
	                          ::ecore::EClass,
	                          ::ecore::EClassifier,
	                          ::ecore::EDataType,
	                          ::ecore::EEnum,
	                          ::ecore::EEnumLiteral,
	                          ::ecore::EFactory,
	                          ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::EObject,
	                          ::ecore::EOperation,
	                          ::ecore::EPackage,
	                          ::ecore::EParameter,
	                          ::ecore::EReference,
	                          ::ecore::EStructuralFeature,
	                          ::ecore::ETypedElement,
	                          ::ecore::EStringToStringMapEntry,
	                          ::ecore::EGenericType,
	                          ::ecore::ETypeParameter > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::ecore::EAttribute >
{
	typedef boost::mpl::list< ::ecore::EStructuralFeature > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::ETypedElement,
	                          ::ecore::EStructuralFeature > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EAttribute__iD_tag,
	                          ::ecore::EAttribute__eAttributeType_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag,
	                          ::ecore::EStructuralFeature__changeable_tag,
	                          ::ecore::EStructuralFeature__volatile_tag,
	                          ::ecore::EStructuralFeature__transient_tag,
	                          ::ecore::EStructuralFeature__defaultValueLiteral_tag,
	                          ::ecore::EStructuralFeature__defaultValue_tag,
	                          ::ecore::EStructuralFeature__unsettable_tag,
	                          ::ecore::EStructuralFeature__derived_tag,
	                          ::ecore::EStructuralFeature__eContainingClass_tag,
	                          ::ecore::EAttribute__iD_tag,
	                          ::ecore::EAttribute__eAttributeType_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EAttribute >
{
	static const char * get()
	{
		return "EAttribute";
	}
};


template < >
struct name< ::ecore::EAttribute__iD_tag >
{
	static const char * get()
	{
		return "iD";
	}
};


template < >
struct name< ::ecore::EAttribute__eAttributeType_tag >
{
	static const char * get()
	{
		return "eAttributeType";
	}
};


template < >
struct eclass< ::ecore::EAnnotation >
{
	typedef boost::mpl::list< ::ecore::EModelElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EAnnotation__source_tag,
	                          ::ecore::EAnnotation__details_tag,
	                          ::ecore::EAnnotation__eModelElement_tag,
	                          ::ecore::EAnnotation__contents_tag,
	                          ::ecore::EAnnotation__references_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::EAnnotation__source_tag,
	                          ::ecore::EAnnotation__details_tag,
	                          ::ecore::EAnnotation__eModelElement_tag,
	                          ::ecore::EAnnotation__contents_tag,
	                          ::ecore::EAnnotation__references_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EAnnotation >
{
	static const char * get()
	{
		return "EAnnotation";
	}
};


template < >
struct name< ::ecore::EAnnotation__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct name< ::ecore::EAnnotation__details_tag >
{
	static const char * get()
	{
		return "details";
	}
};


template < >
struct name< ::ecore::EAnnotation__eModelElement_tag >
{
	static const char * get()
	{
		return "eModelElement";
	}
};


template < >
struct name< ::ecore::EAnnotation__contents_tag >
{
	static const char * get()
	{
		return "contents";
	}
};


template < >
struct name< ::ecore::EAnnotation__references_tag >
{
	static const char * get()
	{
		return "references";
	}
};


template < >
struct eclass< ::ecore::EClass >
{
	typedef boost::mpl::list< ::ecore::EClassifier > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::EClassifier > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EClass__abstract_tag,
	                          ::ecore::EClass__interface_tag,
	                          ::ecore::EClass__eSuperTypes_tag,
	                          ::ecore::EClass__eOperations_tag,
	                          ::ecore::EClass__eAllAttributes_tag,
	                          ::ecore::EClass__eAllReferences_tag,
	                          ::ecore::EClass__eReferences_tag,
	                          ::ecore::EClass__eAttributes_tag,
	                          ::ecore::EClass__eAllContainments_tag,
	                          ::ecore::EClass__eAllOperations_tag,
	                          ::ecore::EClass__eAllStructuralFeatures_tag,
	                          ::ecore::EClass__eAllSuperTypes_tag,
	                          ::ecore::EClass__eIDAttribute_tag,
	                          ::ecore::EClass__eStructuralFeatures_tag,
	                          ::ecore::EClass__eGenericSuperTypes_tag,
	                          ::ecore::EClass__eAllGenericSuperTypes_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::EClassifier__instanceClassName_tag,
	                          ::ecore::EClassifier__instanceClass_tag,
	                          ::ecore::EClassifier__defaultValue_tag,
	                          ::ecore::EClassifier__instanceTypeName_tag,
	                          ::ecore::EClassifier__ePackage_tag,
	                          ::ecore::EClassifier__eTypeParameters_tag,
	                          ::ecore::EClass__abstract_tag,
	                          ::ecore::EClass__interface_tag,
	                          ::ecore::EClass__eSuperTypes_tag,
	                          ::ecore::EClass__eOperations_tag,
	                          ::ecore::EClass__eAllAttributes_tag,
	                          ::ecore::EClass__eAllReferences_tag,
	                          ::ecore::EClass__eReferences_tag,
	                          ::ecore::EClass__eAttributes_tag,
	                          ::ecore::EClass__eAllContainments_tag,
	                          ::ecore::EClass__eAllOperations_tag,
	                          ::ecore::EClass__eAllStructuralFeatures_tag,
	                          ::ecore::EClass__eAllSuperTypes_tag,
	                          ::ecore::EClass__eIDAttribute_tag,
	                          ::ecore::EClass__eStructuralFeatures_tag,
	                          ::ecore::EClass__eGenericSuperTypes_tag,
	                          ::ecore::EClass__eAllGenericSuperTypes_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EClass >
{
	static const char * get()
	{
		return "EClass";
	}
};


template < >
struct name< ::ecore::EClass__abstract_tag >
{
	static const char * get()
	{
		return "abstract";
	}
};


template < >
struct name< ::ecore::EClass__interface_tag >
{
	static const char * get()
	{
		return "interface";
	}
};


template < >
struct name< ::ecore::EClass__eSuperTypes_tag >
{
	static const char * get()
	{
		return "eSuperTypes";
	}
};


template < >
struct name< ::ecore::EClass__eOperations_tag >
{
	static const char * get()
	{
		return "eOperations";
	}
};


template < >
struct name< ::ecore::EClass__eAllAttributes_tag >
{
	static const char * get()
	{
		return "eAllAttributes";
	}
};


template < >
struct name< ::ecore::EClass__eAllReferences_tag >
{
	static const char * get()
	{
		return "eAllReferences";
	}
};


template < >
struct name< ::ecore::EClass__eReferences_tag >
{
	static const char * get()
	{
		return "eReferences";
	}
};


template < >
struct name< ::ecore::EClass__eAttributes_tag >
{
	static const char * get()
	{
		return "eAttributes";
	}
};


template < >
struct name< ::ecore::EClass__eAllContainments_tag >
{
	static const char * get()
	{
		return "eAllContainments";
	}
};


template < >
struct name< ::ecore::EClass__eAllOperations_tag >
{
	static const char * get()
	{
		return "eAllOperations";
	}
};


template < >
struct name< ::ecore::EClass__eAllStructuralFeatures_tag >
{
	static const char * get()
	{
		return "eAllStructuralFeatures";
	}
};


template < >
struct name< ::ecore::EClass__eAllSuperTypes_tag >
{
	static const char * get()
	{
		return "eAllSuperTypes";
	}
};


template < >
struct name< ::ecore::EClass__eIDAttribute_tag >
{
	static const char * get()
	{
		return "eIDAttribute";
	}
};


template < >
struct name< ::ecore::EClass__eStructuralFeatures_tag >
{
	static const char * get()
	{
		return "eStructuralFeatures";
	}
};


template < >
struct name< ::ecore::EClass__eGenericSuperTypes_tag >
{
	static const char * get()
	{
		return "eGenericSuperTypes";
	}
};


template < >
struct name< ::ecore::EClass__eAllGenericSuperTypes_tag >
{
	static const char * get()
	{
		return "eAllGenericSuperTypes";
	}
};


template < >
struct eclass< ::ecore::EClassifier >
{
	typedef boost::mpl::list< ::ecore::ENamedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EClassifier__instanceClassName_tag,
	                          ::ecore::EClassifier__instanceClass_tag,
	                          ::ecore::EClassifier__defaultValue_tag,
	                          ::ecore::EClassifier__instanceTypeName_tag,
	                          ::ecore::EClassifier__ePackage_tag,
	                          ::ecore::EClassifier__eTypeParameters_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::EClassifier__instanceClassName_tag,
	                          ::ecore::EClassifier__instanceClass_tag,
	                          ::ecore::EClassifier__defaultValue_tag,
	                          ::ecore::EClassifier__instanceTypeName_tag,
	                          ::ecore::EClassifier__ePackage_tag,
	                          ::ecore::EClassifier__eTypeParameters_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EClassifier >
{
	static const char * get()
	{
		return "EClassifier";
	}
};


template < >
struct name< ::ecore::EClassifier__instanceClassName_tag >
{
	static const char * get()
	{
		return "instanceClassName";
	}
};


template < >
struct name< ::ecore::EClassifier__instanceClass_tag >
{
	static const char * get()
	{
		return "instanceClass";
	}
};


template < >
struct name< ::ecore::EClassifier__defaultValue_tag >
{
	static const char * get()
	{
		return "defaultValue";
	}
};


template < >
struct name< ::ecore::EClassifier__instanceTypeName_tag >
{
	static const char * get()
	{
		return "instanceTypeName";
	}
};


template < >
struct name< ::ecore::EClassifier__ePackage_tag >
{
	static const char * get()
	{
		return "ePackage";
	}
};


template < >
struct name< ::ecore::EClassifier__eTypeParameters_tag >
{
	static const char * get()
	{
		return "eTypeParameters";
	}
};


template < >
struct eclass< ::ecore::EDataType >
{
	typedef boost::mpl::list< ::ecore::EClassifier > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::EClassifier > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EDataType__serializable_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::EClassifier__instanceClassName_tag,
	                          ::ecore::EClassifier__instanceClass_tag,
	                          ::ecore::EClassifier__defaultValue_tag,
	                          ::ecore::EClassifier__instanceTypeName_tag,
	                          ::ecore::EClassifier__ePackage_tag,
	                          ::ecore::EClassifier__eTypeParameters_tag,
	                          ::ecore::EDataType__serializable_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EDataType >
{
	static const char * get()
	{
		return "EDataType";
	}
};


template < >
struct name< ::ecore::EDataType__serializable_tag >
{
	static const char * get()
	{
		return "serializable";
	}
};


template < >
struct eclass< ::ecore::EEnum >
{
	typedef boost::mpl::list< ::ecore::EDataType > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::EClassifier,
	                          ::ecore::EDataType > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EEnum__eLiterals_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::EClassifier__instanceClassName_tag,
	                          ::ecore::EClassifier__instanceClass_tag,
	                          ::ecore::EClassifier__defaultValue_tag,
	                          ::ecore::EClassifier__instanceTypeName_tag,
	                          ::ecore::EClassifier__ePackage_tag,
	                          ::ecore::EClassifier__eTypeParameters_tag,
	                          ::ecore::EDataType__serializable_tag,
	                          ::ecore::EEnum__eLiterals_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EEnum >
{
	static const char * get()
	{
		return "EEnum";
	}
};


template < >
struct name< ::ecore::EEnum__eLiterals_tag >
{
	static const char * get()
	{
		return "eLiterals";
	}
};


template < >
struct eclass< ::ecore::EEnumLiteral >
{
	typedef boost::mpl::list< ::ecore::ENamedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EEnumLiteral__value_tag,
	                          ::ecore::EEnumLiteral__instance_tag,
	                          ::ecore::EEnumLiteral__literal_tag,
	                          ::ecore::EEnumLiteral__eEnum_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::EEnumLiteral__value_tag,
	                          ::ecore::EEnumLiteral__instance_tag,
	                          ::ecore::EEnumLiteral__literal_tag,
	                          ::ecore::EEnumLiteral__eEnum_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EEnumLiteral >
{
	static const char * get()
	{
		return "EEnumLiteral";
	}
};


template < >
struct name< ::ecore::EEnumLiteral__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct name< ::ecore::EEnumLiteral__instance_tag >
{
	static const char * get()
	{
		return "instance";
	}
};


template < >
struct name< ::ecore::EEnumLiteral__literal_tag >
{
	static const char * get()
	{
		return "literal";
	}
};


template < >
struct name< ::ecore::EEnumLiteral__eEnum_tag >
{
	static const char * get()
	{
		return "eEnum";
	}
};


template < >
struct eclass< ::ecore::EFactory >
{
	typedef boost::mpl::list< ::ecore::EModelElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EFactory__ePackage_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::EFactory__ePackage_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EFactory >
{
	static const char * get()
	{
		return "EFactory";
	}
};


template < >
struct name< ::ecore::EFactory__ePackage_tag >
{
	static const char * get()
	{
		return "ePackage";
	}
};


template < >
struct eclass< ::ecore::EModelElement >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EModelElement >
{
	static const char * get()
	{
		return "EModelElement";
	}
};


template < >
struct name< ::ecore::EModelElement__eAnnotations_tag >
{
	static const char * get()
	{
		return "eAnnotations";
	}
};


template < >
struct eclass< ::ecore::ENamedElement >
{
	typedef boost::mpl::list< ::ecore::EModelElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::ENamedElement__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::ENamedElement >
{
	static const char * get()
	{
		return "ENamedElement";
	}
};


template < >
struct name< ::ecore::ENamedElement__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::ecore::EObject >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EObject >
{
	static const char * get()
	{
		return "EObject";
	}
};


template < >
struct eclass< ::ecore::EOperation >
{
	typedef boost::mpl::list< ::ecore::ETypedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::ETypedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EOperation__eContainingClass_tag,
	                          ::ecore::EOperation__eTypeParameters_tag,
	                          ::ecore::EOperation__eParameters_tag,
	                          ::ecore::EOperation__eExceptions_tag,
	                          ::ecore::EOperation__eGenericExceptions_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag,
	                          ::ecore::EOperation__eContainingClass_tag,
	                          ::ecore::EOperation__eTypeParameters_tag,
	                          ::ecore::EOperation__eParameters_tag,
	                          ::ecore::EOperation__eExceptions_tag,
	                          ::ecore::EOperation__eGenericExceptions_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EOperation >
{
	static const char * get()
	{
		return "EOperation";
	}
};


template < >
struct name< ::ecore::EOperation__eContainingClass_tag >
{
	static const char * get()
	{
		return "eContainingClass";
	}
};


template < >
struct name< ::ecore::EOperation__eTypeParameters_tag >
{
	static const char * get()
	{
		return "eTypeParameters";
	}
};


template < >
struct name< ::ecore::EOperation__eParameters_tag >
{
	static const char * get()
	{
		return "eParameters";
	}
};


template < >
struct name< ::ecore::EOperation__eExceptions_tag >
{
	static const char * get()
	{
		return "eExceptions";
	}
};


template < >
struct name< ::ecore::EOperation__eGenericExceptions_tag >
{
	static const char * get()
	{
		return "eGenericExceptions";
	}
};


template < >
struct eclass< ::ecore::EPackage >
{
	typedef boost::mpl::list< ::ecore::ENamedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EPackage__nsURI_tag,
	                          ::ecore::EPackage__nsPrefix_tag,
	                          ::ecore::EPackage__eFactoryInstance_tag,
	                          ::ecore::EPackage__eClassifiers_tag,
	                          ::ecore::EPackage__eSubpackages_tag,
	                          ::ecore::EPackage__eSuperPackage_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::EPackage__nsURI_tag,
	                          ::ecore::EPackage__nsPrefix_tag,
	                          ::ecore::EPackage__eFactoryInstance_tag,
	                          ::ecore::EPackage__eClassifiers_tag,
	                          ::ecore::EPackage__eSubpackages_tag,
	                          ::ecore::EPackage__eSuperPackage_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EPackage >
{
	static const char * get()
	{
		return "EPackage";
	}
};


template < >
struct name< ::ecore::EPackage__nsURI_tag >
{
	static const char * get()
	{
		return "nsURI";
	}
};


template < >
struct name< ::ecore::EPackage__nsPrefix_tag >
{
	static const char * get()
	{
		return "nsPrefix";
	}
};


template < >
struct name< ::ecore::EPackage__eFactoryInstance_tag >
{
	static const char * get()
	{
		return "eFactoryInstance";
	}
};


template < >
struct name< ::ecore::EPackage__eClassifiers_tag >
{
	static const char * get()
	{
		return "eClassifiers";
	}
};


template < >
struct name< ::ecore::EPackage__eSubpackages_tag >
{
	static const char * get()
	{
		return "eSubpackages";
	}
};


template < >
struct name< ::ecore::EPackage__eSuperPackage_tag >
{
	static const char * get()
	{
		return "eSuperPackage";
	}
};


template < >
struct eclass< ::ecore::EParameter >
{
	typedef boost::mpl::list< ::ecore::ETypedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::ETypedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EParameter__eOperation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag,
	                          ::ecore::EParameter__eOperation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EParameter >
{
	static const char * get()
	{
		return "EParameter";
	}
};


template < >
struct name< ::ecore::EParameter__eOperation_tag >
{
	static const char * get()
	{
		return "eOperation";
	}
};


template < >
struct eclass< ::ecore::EReference >
{
	typedef boost::mpl::list< ::ecore::EStructuralFeature > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::ETypedElement,
	                          ::ecore::EStructuralFeature > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EReference__containment_tag,
	                          ::ecore::EReference__container_tag,
	                          ::ecore::EReference__resolveProxies_tag,
	                          ::ecore::EReference__eOpposite_tag,
	                          ::ecore::EReference__eReferenceType_tag,
	                          ::ecore::EReference__eKeys_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag,
	                          ::ecore::EStructuralFeature__changeable_tag,
	                          ::ecore::EStructuralFeature__volatile_tag,
	                          ::ecore::EStructuralFeature__transient_tag,
	                          ::ecore::EStructuralFeature__defaultValueLiteral_tag,
	                          ::ecore::EStructuralFeature__defaultValue_tag,
	                          ::ecore::EStructuralFeature__unsettable_tag,
	                          ::ecore::EStructuralFeature__derived_tag,
	                          ::ecore::EStructuralFeature__eContainingClass_tag,
	                          ::ecore::EReference__containment_tag,
	                          ::ecore::EReference__container_tag,
	                          ::ecore::EReference__resolveProxies_tag,
	                          ::ecore::EReference__eOpposite_tag,
	                          ::ecore::EReference__eReferenceType_tag,
	                          ::ecore::EReference__eKeys_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EReference >
{
	static const char * get()
	{
		return "EReference";
	}
};


template < >
struct name< ::ecore::EReference__containment_tag >
{
	static const char * get()
	{
		return "containment";
	}
};


template < >
struct name< ::ecore::EReference__container_tag >
{
	static const char * get()
	{
		return "container";
	}
};


template < >
struct name< ::ecore::EReference__resolveProxies_tag >
{
	static const char * get()
	{
		return "resolveProxies";
	}
};


template < >
struct name< ::ecore::EReference__eOpposite_tag >
{
	static const char * get()
	{
		return "eOpposite";
	}
};


template < >
struct name< ::ecore::EReference__eReferenceType_tag >
{
	static const char * get()
	{
		return "eReferenceType";
	}
};


template < >
struct name< ::ecore::EReference__eKeys_tag >
{
	static const char * get()
	{
		return "eKeys";
	}
};


template < >
struct eclass< ::ecore::EStructuralFeature >
{
	typedef boost::mpl::list< ::ecore::ETypedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement,
	                          ::ecore::ETypedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EStructuralFeature__changeable_tag,
	                          ::ecore::EStructuralFeature__volatile_tag,
	                          ::ecore::EStructuralFeature__transient_tag,
	                          ::ecore::EStructuralFeature__defaultValueLiteral_tag,
	                          ::ecore::EStructuralFeature__defaultValue_tag,
	                          ::ecore::EStructuralFeature__unsettable_tag,
	                          ::ecore::EStructuralFeature__derived_tag,
	                          ::ecore::EStructuralFeature__eContainingClass_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag,
	                          ::ecore::EStructuralFeature__changeable_tag,
	                          ::ecore::EStructuralFeature__volatile_tag,
	                          ::ecore::EStructuralFeature__transient_tag,
	                          ::ecore::EStructuralFeature__defaultValueLiteral_tag,
	                          ::ecore::EStructuralFeature__defaultValue_tag,
	                          ::ecore::EStructuralFeature__unsettable_tag,
	                          ::ecore::EStructuralFeature__derived_tag,
	                          ::ecore::EStructuralFeature__eContainingClass_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EStructuralFeature >
{
	static const char * get()
	{
		return "EStructuralFeature";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__changeable_tag >
{
	static const char * get()
	{
		return "changeable";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__volatile_tag >
{
	static const char * get()
	{
		return "volatile";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__transient_tag >
{
	static const char * get()
	{
		return "transient";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__defaultValueLiteral_tag >
{
	static const char * get()
	{
		return "defaultValueLiteral";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__defaultValue_tag >
{
	static const char * get()
	{
		return "defaultValue";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__unsettable_tag >
{
	static const char * get()
	{
		return "unsettable";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__derived_tag >
{
	static const char * get()
	{
		return "derived";
	}
};


template < >
struct name< ::ecore::EStructuralFeature__eContainingClass_tag >
{
	static const char * get()
	{
		return "eContainingClass";
	}
};


template < >
struct eclass< ::ecore::ETypedElement >
{
	typedef boost::mpl::list< ::ecore::ENamedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypedElement__ordered_tag,
	                          ::ecore::ETypedElement__unique_tag,
	                          ::ecore::ETypedElement__lowerBound_tag,
	                          ::ecore::ETypedElement__upperBound_tag,
	                          ::ecore::ETypedElement__many_tag,
	                          ::ecore::ETypedElement__required_tag,
	                          ::ecore::ETypedElement__eType_tag,
	                          ::ecore::ETypedElement__eGenericType_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::ETypedElement >
{
	static const char * get()
	{
		return "ETypedElement";
	}
};


template < >
struct name< ::ecore::ETypedElement__ordered_tag >
{
	static const char * get()
	{
		return "ordered";
	}
};


template < >
struct name< ::ecore::ETypedElement__unique_tag >
{
	static const char * get()
	{
		return "unique";
	}
};


template < >
struct name< ::ecore::ETypedElement__lowerBound_tag >
{
	static const char * get()
	{
		return "lowerBound";
	}
};


template < >
struct name< ::ecore::ETypedElement__upperBound_tag >
{
	static const char * get()
	{
		return "upperBound";
	}
};


template < >
struct name< ::ecore::ETypedElement__many_tag >
{
	static const char * get()
	{
		return "many";
	}
};


template < >
struct name< ::ecore::ETypedElement__required_tag >
{
	static const char * get()
	{
		return "required";
	}
};


template < >
struct name< ::ecore::ETypedElement__eType_tag >
{
	static const char * get()
	{
		return "eType";
	}
};


template < >
struct name< ::ecore::ETypedElement__eGenericType_tag >
{
	static const char * get()
	{
		return "eGenericType";
	}
};


template < >
struct eclass< ::ecore::EStringToStringMapEntry >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EStringToStringMapEntry__key_tag,
	                          ::ecore::EStringToStringMapEntry__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EStringToStringMapEntry__key_tag,
	                          ::ecore::EStringToStringMapEntry__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EStringToStringMapEntry >
{
	static const char * get()
	{
		return "EStringToStringMapEntry";
	}
};


template < >
struct name< ::ecore::EStringToStringMapEntry__key_tag >
{
	static const char * get()
	{
		return "key";
	}
};


template < >
struct name< ::ecore::EStringToStringMapEntry__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::ecore::EGenericType >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::EGenericType__eUpperBound_tag,
	                          ::ecore::EGenericType__eTypeArguments_tag,
	                          ::ecore::EGenericType__eRawType_tag,
	                          ::ecore::EGenericType__eLowerBound_tag,
	                          ::ecore::EGenericType__eTypeParameter_tag,
	                          ::ecore::EGenericType__eClassifier_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EGenericType__eUpperBound_tag,
	                          ::ecore::EGenericType__eTypeArguments_tag,
	                          ::ecore::EGenericType__eRawType_tag,
	                          ::ecore::EGenericType__eLowerBound_tag,
	                          ::ecore::EGenericType__eTypeParameter_tag,
	                          ::ecore::EGenericType__eClassifier_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::EGenericType >
{
	static const char * get()
	{
		return "EGenericType";
	}
};


template < >
struct name< ::ecore::EGenericType__eUpperBound_tag >
{
	static const char * get()
	{
		return "eUpperBound";
	}
};


template < >
struct name< ::ecore::EGenericType__eTypeArguments_tag >
{
	static const char * get()
	{
		return "eTypeArguments";
	}
};


template < >
struct name< ::ecore::EGenericType__eRawType_tag >
{
	static const char * get()
	{
		return "eRawType";
	}
};


template < >
struct name< ::ecore::EGenericType__eLowerBound_tag >
{
	static const char * get()
	{
		return "eLowerBound";
	}
};


template < >
struct name< ::ecore::EGenericType__eTypeParameter_tag >
{
	static const char * get()
	{
		return "eTypeParameter";
	}
};


template < >
struct name< ::ecore::EGenericType__eClassifier_tag >
{
	static const char * get()
	{
		return "eClassifier";
	}
};


template < >
struct eclass< ::ecore::ETypeParameter >
{
	typedef boost::mpl::list< ::ecore::ENamedElement > eSuperTypes;
	typedef boost::mpl::list< ::ecore::EModelElement,
	                          ::ecore::ENamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::ecore::ETypeParameter__eBounds_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::ecore::EModelElement__eAnnotations_tag,
	                          ::ecore::ENamedElement__name_tag,
	                          ::ecore::ETypeParameter__eBounds_tag > eAllStructuralFeatures;
};

template < >
struct name< ::ecore::ETypeParameter >
{
	static const char * get()
	{
		return "ETypeParameter";
	}
};


template < >
struct name< ::ecore::ETypeParameter__eBounds_tag >
{
	static const char * get()
	{
		return "eBounds";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_ECORE_Meta_HPP
