#include "EcorePackage.hpp"
#include "EcoreFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace ecore;

EcorePackage::EcorePackage()
{
	m_eFactoryInstance = EcoreFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const EcorePackage_ptr EcorePackage::_instance()
{
	static EcorePackage __instance;
	return &__instance;
}

e4c::tag_t EcorePackage::getTag_EAttribute() const
{
	return e4c::tag< EAttribute >::get();
}
 
e4c::tag_t EcorePackage::getTag_EAnnotation() const
{
	return e4c::tag< EAnnotation >::get();
}
 
e4c::tag_t EcorePackage::getTag_EClass() const
{
	return e4c::tag< EClass >::get();
}
 
e4c::tag_t EcorePackage::getTag_EClassifier() const
{
	return e4c::tag< EClassifier >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDataType() const
{
	return e4c::tag< EDataType >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEnum() const
{
	return e4c::tag< EEnum >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEnumLiteral() const
{
	return e4c::tag< EEnumLiteral >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFactory() const
{
	return e4c::tag< EFactory >::get();
}
 
e4c::tag_t EcorePackage::getTag_EModelElement() const
{
	return e4c::tag< EModelElement >::get();
}
 
e4c::tag_t EcorePackage::getTag_ENamedElement() const
{
	return e4c::tag< ENamedElement >::get();
}
 
e4c::tag_t EcorePackage::getTag_EObject() const
{
	return e4c::tag< EObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EOperation() const
{
	return e4c::tag< EOperation >::get();
}
 
e4c::tag_t EcorePackage::getTag_EPackage() const
{
	return e4c::tag< EPackage >::get();
}
 
e4c::tag_t EcorePackage::getTag_EParameter() const
{
	return e4c::tag< EParameter >::get();
}
 
e4c::tag_t EcorePackage::getTag_EReference() const
{
	return e4c::tag< EReference >::get();
}
 
e4c::tag_t EcorePackage::getTag_EStructuralFeature() const
{
	return e4c::tag< EStructuralFeature >::get();
}
 
e4c::tag_t EcorePackage::getTag_ETypedElement() const
{
	return e4c::tag< ETypedElement >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBigDecimal() const
{
	return e4c::tag< EBigDecimal >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBigInteger() const
{
	return e4c::tag< EBigInteger >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBoolean() const
{
	return e4c::tag< EBoolean >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBooleanObject() const
{
	return e4c::tag< EBooleanObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EByte() const
{
	return e4c::tag< EByte >::get();
}
 
e4c::tag_t EcorePackage::getTag_EByteArray() const
{
	return e4c::tag< EByteArray >::get();
}
 
e4c::tag_t EcorePackage::getTag_EByteObject() const
{
	return e4c::tag< EByteObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EChar() const
{
	return e4c::tag< EChar >::get();
}
 
e4c::tag_t EcorePackage::getTag_ECharacterObject() const
{
	return e4c::tag< ECharacterObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDate() const
{
	return e4c::tag< EDate >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDiagnosticChain() const
{
	return e4c::tag< EDiagnosticChain >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDouble() const
{
	return e4c::tag< EDouble >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDoubleObject() const
{
	return e4c::tag< EDoubleObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEList() const
{
	return e4c::tag< EEList >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEnumerator() const
{
	return e4c::tag< EEnumerator >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFeatureMap() const
{
	return e4c::tag< EFeatureMap >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFeatureMapEntry() const
{
	return e4c::tag< EFeatureMapEntry >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFloat() const
{
	return e4c::tag< EFloat >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFloatObject() const
{
	return e4c::tag< EFloatObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EInt() const
{
	return e4c::tag< EInt >::get();
}
 
e4c::tag_t EcorePackage::getTag_EIntegerObject() const
{
	return e4c::tag< EIntegerObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EJavaClass() const
{
	return e4c::tag< EJavaClass >::get();
}
 
e4c::tag_t EcorePackage::getTag_EJavaObject() const
{
	return e4c::tag< EJavaObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_ELong() const
{
	return e4c::tag< ELong >::get();
}
 
e4c::tag_t EcorePackage::getTag_ELongObject() const
{
	return e4c::tag< ELongObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EMap() const
{
	return e4c::tag< EMap >::get();
}
 
e4c::tag_t EcorePackage::getTag_EResource() const
{
	return e4c::tag< EResource >::get();
}
 
e4c::tag_t EcorePackage::getTag_EResourceSet() const
{
	return e4c::tag< EResourceSet >::get();
}
 
e4c::tag_t EcorePackage::getTag_EShort() const
{
	return e4c::tag< EShort >::get();
}
 
e4c::tag_t EcorePackage::getTag_EShortObject() const
{
	return e4c::tag< EShortObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EString() const
{
	return e4c::tag< EString >::get();
}
 
e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry() const
{
	return e4c::tag< EStringToStringMapEntry >::get();
}
 
e4c::tag_t EcorePackage::getTag_ETreeIterator() const
{
	return e4c::tag< ETreeIterator >::get();
}
 
e4c::tag_t EcorePackage::getTag_EGenericType() const
{
	return e4c::tag< EGenericType >::get();
}
 
e4c::tag_t EcorePackage::getTag_ETypeParameter() const
{
	return e4c::tag< ETypeParameter >::get();
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
