#ifndef EMF_CPP_ECORE_FWD_HPP
#define EMF_CPP_ECORE_FWD_HPP


#include <e4c/mapping.hpp>

namespace ecore
{


class EcorePackage;
typedef EcorePackage * EcorePackage_ptr;
class EcoreFactory;
typedef EcoreFactory * EcoreFactory_ptr;

// Data types

/*PROTECTED REGION ID(typedef_ecore::EBigDecimal) ENABLED START*/
typedef double EBigDecimal;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EBigInteger) ENABLED START*/
typedef int64_t EBigInteger;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EBoolean) ENABLED START*/
typedef bool EBoolean;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EBooleanObject) START*/
typedef int EBooleanObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EByte) START*/
typedef int EByte;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EByteArray) START*/
typedef int EByteArray;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EByteObject) START*/
typedef int EByteObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EChar) START*/
typedef int EChar;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::ECharacterObject) START*/
typedef int ECharacterObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EDate) START*/
typedef int EDate;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EDiagnosticChain) START*/
typedef int EDiagnosticChain;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EDouble) START*/
typedef int EDouble;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EDoubleObject) START*/
typedef int EDoubleObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EEList) START*/
typedef int EEList;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EEnumerator) START*/
typedef int EEnumerator;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EFeatureMap) START*/
typedef int EFeatureMap;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EFeatureMapEntry) START*/
typedef int EFeatureMapEntry;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EFloat) ENABLED START*/
typedef float EFloat;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EFloatObject) START*/
typedef int EFloatObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EInt) ENABLED START*/
typedef int32_t EInt;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EIntegerObject) START*/
typedef int EIntegerObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EJavaClass) START*/
typedef int EJavaClass;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EJavaObject) START*/
typedef int EJavaObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::ELong) START*/
typedef int ELong;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::ELongObject) START*/
typedef int ELongObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EMap) START*/
typedef int EMap;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EResource) START*/
typedef int EResource;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EResourceSet) START*/
typedef int EResourceSet;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EShort) START*/
typedef int EShort;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EShortObject) START*/
typedef int EShortObject;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EString) ENABLED START*/
typedef std::string EString;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::ETreeIterator) START*/
typedef int ETreeIterator;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_ecore::EInvocationTargetException) START*/
typedef int EInvocationTargetException;
/*PROTECTED REGION END*/


// Classes
class EAttribute;
typedef EAttribute* EAttribute_ptr;
class EAnnotation;
typedef EAnnotation* EAnnotation_ptr;
class EClass;
typedef EClass* EClass_ptr;
class EClassifier;
typedef EClassifier* EClassifier_ptr;
class EDataType;
typedef EDataType* EDataType_ptr;
class EEnum;
typedef EEnum* EEnum_ptr;
class EEnumLiteral;
typedef EEnumLiteral* EEnumLiteral_ptr;
class EFactory;
typedef EFactory* EFactory_ptr;
class EModelElement;
typedef EModelElement* EModelElement_ptr;
class ENamedElement;
typedef ENamedElement* ENamedElement_ptr;
class EObject;
typedef EObject* EObject_ptr;
class EOperation;
typedef EOperation* EOperation_ptr;
class EPackage;
typedef EPackage* EPackage_ptr;
class EParameter;
typedef EParameter* EParameter_ptr;
class EReference;
typedef EReference* EReference_ptr;
class EStructuralFeature;
typedef EStructuralFeature* EStructuralFeature_ptr;
class ETypedElement;
typedef ETypedElement* ETypedElement_ptr;
class EStringToStringMapEntry;
typedef EStringToStringMapEntry* EStringToStringMapEntry_ptr;
class EGenericType;
typedef EGenericType* EGenericType_ptr;
class ETypeParameter;
typedef ETypeParameter* ETypeParameter_ptr;


// Structural features
struct EAttribute__iD_tag;
struct EAttribute__eAttributeType_tag;
struct EAnnotation__source_tag;
struct EAnnotation__details_tag;
struct EAnnotation__eModelElement_tag;
struct EAnnotation__contents_tag;
struct EAnnotation__references_tag;
struct EClass__abstract_tag;
struct EClass__interface_tag;
struct EClass__eSuperTypes_tag;
struct EClass__eOperations_tag;
struct EClass__eAllAttributes_tag;
struct EClass__eAllReferences_tag;
struct EClass__eReferences_tag;
struct EClass__eAttributes_tag;
struct EClass__eAllContainments_tag;
struct EClass__eAllOperations_tag;
struct EClass__eAllStructuralFeatures_tag;
struct EClass__eAllSuperTypes_tag;
struct EClass__eIDAttribute_tag;
struct EClass__eStructuralFeatures_tag;
struct EClass__eGenericSuperTypes_tag;
struct EClass__eAllGenericSuperTypes_tag;
struct EClassifier__instanceClassName_tag;
struct EClassifier__instanceClass_tag;
struct EClassifier__defaultValue_tag;
struct EClassifier__instanceTypeName_tag;
struct EClassifier__ePackage_tag;
struct EClassifier__eTypeParameters_tag;
struct EDataType__serializable_tag;
struct EEnum__eLiterals_tag;
struct EEnumLiteral__value_tag;
struct EEnumLiteral__instance_tag;
struct EEnumLiteral__literal_tag;
struct EEnumLiteral__eEnum_tag;
struct EFactory__ePackage_tag;
struct EModelElement__eAnnotations_tag;
struct ENamedElement__name_tag;
struct EOperation__eContainingClass_tag;
struct EOperation__eTypeParameters_tag;
struct EOperation__eParameters_tag;
struct EOperation__eExceptions_tag;
struct EOperation__eGenericExceptions_tag;
struct EPackage__nsURI_tag;
struct EPackage__nsPrefix_tag;
struct EPackage__eFactoryInstance_tag;
struct EPackage__eClassifiers_tag;
struct EPackage__eSubpackages_tag;
struct EPackage__eSuperPackage_tag;
struct EParameter__eOperation_tag;
struct EReference__containment_tag;
struct EReference__container_tag;
struct EReference__resolveProxies_tag;
struct EReference__eOpposite_tag;
struct EReference__eReferenceType_tag;
struct EReference__eKeys_tag;
struct EStructuralFeature__changeable_tag;
struct EStructuralFeature__volatile_tag;
struct EStructuralFeature__transient_tag;
struct EStructuralFeature__defaultValueLiteral_tag;
struct EStructuralFeature__defaultValue_tag;
struct EStructuralFeature__unsettable_tag;
struct EStructuralFeature__derived_tag;
struct EStructuralFeature__eContainingClass_tag;
struct ETypedElement__ordered_tag;
struct ETypedElement__unique_tag;
struct ETypedElement__lowerBound_tag;
struct ETypedElement__upperBound_tag;
struct ETypedElement__many_tag;
struct ETypedElement__required_tag;
struct ETypedElement__eType_tag;
struct ETypedElement__eGenericType_tag;
struct EStringToStringMapEntry__key_tag;
struct EStringToStringMapEntry__value_tag;
struct EGenericType__eUpperBound_tag;
struct EGenericType__eTypeArguments_tag;
struct EGenericType__eRawType_tag;
struct EGenericType__eLowerBound_tag;
struct EGenericType__eTypeParameter_tag;
struct EGenericType__eClassifier_tag;
struct ETypeParameter__eBounds_tag;


} // ecore


#endif // EMF_CPP_ECORE_FWD_HPP
