#include "EcorePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>
#include <emf4cpp2/reference.ipp>

using namespace ecore;

EcorePackage::EcorePackage()
{
}

EcorePackage_ptr EcorePackage::_instance()
{
	static EcorePackage __instance;
	return &__instance;
}

e4c::tag_t EcorePackage::getTag_EAttribute()
{
	return e4c::tag< EAttribute >::get();
}
 
e4c::tag_t EcorePackage::getTag_EAnnotation()
{
	return e4c::tag< EAnnotation >::get();
}
 
e4c::tag_t EcorePackage::getTag_EClass()
{
	return e4c::tag< EClass >::get();
}
 
e4c::tag_t EcorePackage::getTag_EClassifier()
{
	return e4c::tag< EClassifier >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDataType()
{
	return e4c::tag< EDataType >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEnum()
{
	return e4c::tag< EEnum >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEnumLiteral()
{
	return e4c::tag< EEnumLiteral >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFactory()
{
	return e4c::tag< EFactory >::get();
}
 
e4c::tag_t EcorePackage::getTag_EModelElement()
{
	return e4c::tag< EModelElement >::get();
}
 
e4c::tag_t EcorePackage::getTag_ENamedElement()
{
	return e4c::tag< ENamedElement >::get();
}
 
e4c::tag_t EcorePackage::getTag_EObject()
{
	return e4c::tag< EObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EOperation()
{
	return e4c::tag< EOperation >::get();
}
 
e4c::tag_t EcorePackage::getTag_EPackage()
{
	return e4c::tag< EPackage >::get();
}
 
e4c::tag_t EcorePackage::getTag_EParameter()
{
	return e4c::tag< EParameter >::get();
}
 
e4c::tag_t EcorePackage::getTag_EReference()
{
	return e4c::tag< EReference >::get();
}
 
e4c::tag_t EcorePackage::getTag_EStructuralFeature()
{
	return e4c::tag< EStructuralFeature >::get();
}
 
e4c::tag_t EcorePackage::getTag_ETypedElement()
{
	return e4c::tag< ETypedElement >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBigDecimal()
{
	return e4c::tag< EBigDecimal >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBigInteger()
{
	return e4c::tag< EBigInteger >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBoolean()
{
	return e4c::tag< EBoolean >::get();
}
 
e4c::tag_t EcorePackage::getTag_EBooleanObject()
{
	return e4c::tag< EBooleanObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EByte()
{
	return e4c::tag< EByte >::get();
}
 
e4c::tag_t EcorePackage::getTag_EByteArray()
{
	return e4c::tag< EByteArray >::get();
}
 
e4c::tag_t EcorePackage::getTag_EByteObject()
{
	return e4c::tag< EByteObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EChar()
{
	return e4c::tag< EChar >::get();
}
 
e4c::tag_t EcorePackage::getTag_ECharacterObject()
{
	return e4c::tag< ECharacterObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDate()
{
	return e4c::tag< EDate >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDiagnosticChain()
{
	return e4c::tag< EDiagnosticChain >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDouble()
{
	return e4c::tag< EDouble >::get();
}
 
e4c::tag_t EcorePackage::getTag_EDoubleObject()
{
	return e4c::tag< EDoubleObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEList()
{
	return e4c::tag< EEList >::get();
}
 
e4c::tag_t EcorePackage::getTag_EEnumerator()
{
	return e4c::tag< EEnumerator >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFeatureMap()
{
	return e4c::tag< EFeatureMap >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFeatureMapEntry()
{
	return e4c::tag< EFeatureMapEntry >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFloat()
{
	return e4c::tag< EFloat >::get();
}
 
e4c::tag_t EcorePackage::getTag_EFloatObject()
{
	return e4c::tag< EFloatObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EInt()
{
	return e4c::tag< EInt >::get();
}
 
e4c::tag_t EcorePackage::getTag_EIntegerObject()
{
	return e4c::tag< EIntegerObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EJavaClass()
{
	return e4c::tag< EJavaClass >::get();
}
 
e4c::tag_t EcorePackage::getTag_EJavaObject()
{
	return e4c::tag< EJavaObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_ELong()
{
	return e4c::tag< ELong >::get();
}
 
e4c::tag_t EcorePackage::getTag_ELongObject()
{
	return e4c::tag< ELongObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EMap()
{
	return e4c::tag< EMap >::get();
}
 
e4c::tag_t EcorePackage::getTag_EResource()
{
	return e4c::tag< EResource >::get();
}
 
e4c::tag_t EcorePackage::getTag_EResourceSet()
{
	return e4c::tag< EResourceSet >::get();
}
 
e4c::tag_t EcorePackage::getTag_EShort()
{
	return e4c::tag< EShort >::get();
}
 
e4c::tag_t EcorePackage::getTag_EShortObject()
{
	return e4c::tag< EShortObject >::get();
}
 
e4c::tag_t EcorePackage::getTag_EString()
{
	return e4c::tag< EString >::get();
}
 
e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry()
{
	return e4c::tag< EStringToStringMapEntry >::get();
}
 
e4c::tag_t EcorePackage::getTag_ETreeIterator()
{
	return e4c::tag< ETreeIterator >::get();
}
 
e4c::tag_t EcorePackage::getTag_EGenericType()
{
	return e4c::tag< EGenericType >::get();
}
 
e4c::tag_t EcorePackage::getTag_ETypeParameter()
{
	return e4c::tag< ETypeParameter >::get();
}
 
e4c::tag_t EcorePackage::getTag_EInvocationTargetException()
{
	return e4c::tag< EInvocationTargetException >::get();
}
 
e4c::tag_t EcorePackage::getTag_EAttribute__iD()
{
	return e4c::tag< EAttribute__iD_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAttribute__eAttributeType()
{
	return e4c::tag< EAttribute__eAttributeType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__source()
{
	return e4c::tag< EAnnotation__source_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__details()
{
	return e4c::tag< EAnnotation__details_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__eModelElement()
{
	return e4c::tag< EAnnotation__eModelElement_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__contents()
{
	return e4c::tag< EAnnotation__contents_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EAnnotation__references()
{
	return e4c::tag< EAnnotation__references_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__abstract()
{
	return e4c::tag< EClass__abstract_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__interface()
{
	return e4c::tag< EClass__interface_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eSuperTypes()
{
	return e4c::tag< EClass__eSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eOperations()
{
	return e4c::tag< EClass__eOperations_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllAttributes()
{
	return e4c::tag< EClass__eAllAttributes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllReferences()
{
	return e4c::tag< EClass__eAllReferences_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eReferences()
{
	return e4c::tag< EClass__eReferences_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAttributes()
{
	return e4c::tag< EClass__eAttributes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllContainments()
{
	return e4c::tag< EClass__eAllContainments_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllOperations()
{
	return e4c::tag< EClass__eAllOperations_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllStructuralFeatures()
{
	return e4c::tag< EClass__eAllStructuralFeatures_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllSuperTypes()
{
	return e4c::tag< EClass__eAllSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eIDAttribute()
{
	return e4c::tag< EClass__eIDAttribute_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eStructuralFeatures()
{
	return e4c::tag< EClass__eStructuralFeatures_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eGenericSuperTypes()
{
	return e4c::tag< EClass__eGenericSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClass__eAllGenericSuperTypes()
{
	return e4c::tag< EClass__eAllGenericSuperTypes_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceClassName()
{
	return e4c::tag< EClassifier__instanceClassName_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceClass()
{
	return e4c::tag< EClassifier__instanceClass_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__defaultValue()
{
	return e4c::tag< EClassifier__defaultValue_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__instanceTypeName()
{
	return e4c::tag< EClassifier__instanceTypeName_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__ePackage()
{
	return e4c::tag< EClassifier__ePackage_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EClassifier__eTypeParameters()
{
	return e4c::tag< EClassifier__eTypeParameters_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EDataType__serializable()
{
	return e4c::tag< EDataType__serializable_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnum__eLiterals()
{
	return e4c::tag< EEnum__eLiterals_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__value()
{
	return e4c::tag< EEnumLiteral__value_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__instance()
{
	return e4c::tag< EEnumLiteral__instance_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__literal()
{
	return e4c::tag< EEnumLiteral__literal_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EEnumLiteral__eEnum()
{
	return e4c::tag< EEnumLiteral__eEnum_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EFactory__ePackage()
{
	return e4c::tag< EFactory__ePackage_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EModelElement__eAnnotations()
{
	return e4c::tag< EModelElement__eAnnotations_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ENamedElement__name()
{
	return e4c::tag< ENamedElement__name_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eContainingClass()
{
	return e4c::tag< EOperation__eContainingClass_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eTypeParameters()
{
	return e4c::tag< EOperation__eTypeParameters_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eParameters()
{
	return e4c::tag< EOperation__eParameters_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eExceptions()
{
	return e4c::tag< EOperation__eExceptions_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EOperation__eGenericExceptions()
{
	return e4c::tag< EOperation__eGenericExceptions_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__nsURI()
{
	return e4c::tag< EPackage__nsURI_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__nsPrefix()
{
	return e4c::tag< EPackage__nsPrefix_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eFactoryInstance()
{
	return e4c::tag< EPackage__eFactoryInstance_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eClassifiers()
{
	return e4c::tag< EPackage__eClassifiers_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eSubpackages()
{
	return e4c::tag< EPackage__eSubpackages_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EPackage__eSuperPackage()
{
	return e4c::tag< EPackage__eSuperPackage_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EParameter__eOperation()
{
	return e4c::tag< EParameter__eOperation_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__containment()
{
	return e4c::tag< EReference__containment_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__container()
{
	return e4c::tag< EReference__container_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__resolveProxies()
{
	return e4c::tag< EReference__resolveProxies_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__eOpposite()
{
	return e4c::tag< EReference__eOpposite_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__eReferenceType()
{
	return e4c::tag< EReference__eReferenceType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EReference__eKeys()
{
	return e4c::tag< EReference__eKeys_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__changeable()
{
	return e4c::tag< EStructuralFeature__changeable_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__volatile()
{
	return e4c::tag< EStructuralFeature__volatile_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__transient()
{
	return e4c::tag< EStructuralFeature__transient_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__defaultValueLiteral()
{
	return e4c::tag< EStructuralFeature__defaultValueLiteral_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__defaultValue()
{
	return e4c::tag< EStructuralFeature__defaultValue_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__unsettable()
{
	return e4c::tag< EStructuralFeature__unsettable_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__derived()
{
	return e4c::tag< EStructuralFeature__derived_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStructuralFeature__eContainingClass()
{
	return e4c::tag< EStructuralFeature__eContainingClass_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__ordered()
{
	return e4c::tag< ETypedElement__ordered_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__unique()
{
	return e4c::tag< ETypedElement__unique_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__lowerBound()
{
	return e4c::tag< ETypedElement__lowerBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__upperBound()
{
	return e4c::tag< ETypedElement__upperBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__many()
{
	return e4c::tag< ETypedElement__many_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__required()
{
	return e4c::tag< ETypedElement__required_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__eType()
{
	return e4c::tag< ETypedElement__eType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypedElement__eGenericType()
{
	return e4c::tag< ETypedElement__eGenericType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry__key()
{
	return e4c::tag< EStringToStringMapEntry__key_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EStringToStringMapEntry__value()
{
	return e4c::tag< EStringToStringMapEntry__value_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eUpperBound()
{
	return e4c::tag< EGenericType__eUpperBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eTypeArguments()
{
	return e4c::tag< EGenericType__eTypeArguments_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eRawType()
{
	return e4c::tag< EGenericType__eRawType_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eLowerBound()
{
	return e4c::tag< EGenericType__eLowerBound_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eTypeParameter()
{
	return e4c::tag< EGenericType__eTypeParameter_tag >::get();
}

e4c::tag_t EcorePackage::getTag_EGenericType__eClassifier()
{
	return e4c::tag< EGenericType__eClassifier_tag >::get();
}

e4c::tag_t EcorePackage::getTag_ETypeParameter__eBounds()
{
	return e4c::tag< ETypeParameter__eBounds_tag >::get();
}

template class e4c::impl::reference< EAttribute__eAttributeType_tag >;
template class e4c::impl::reference< EAnnotation__details_tag >;
template class e4c::impl::reference< EAnnotation__eModelElement_tag >;
template class e4c::impl::reference< EAnnotation__contents_tag >;
template class e4c::impl::reference< EAnnotation__references_tag >;
template class e4c::impl::reference< EClass__eSuperTypes_tag >;
template class e4c::impl::reference< EClass__eOperations_tag >;
template class e4c::impl::reference< EClass__eAllAttributes_tag >;
template class e4c::impl::reference< EClass__eAllReferences_tag >;
template class e4c::impl::reference< EClass__eReferences_tag >;
template class e4c::impl::reference< EClass__eAttributes_tag >;
template class e4c::impl::reference< EClass__eAllContainments_tag >;
template class e4c::impl::reference< EClass__eAllOperations_tag >;
template class e4c::impl::reference< EClass__eAllStructuralFeatures_tag >;
template class e4c::impl::reference< EClass__eAllSuperTypes_tag >;
template class e4c::impl::reference< EClass__eIDAttribute_tag >;
template class e4c::impl::reference< EClass__eStructuralFeatures_tag >;
template class e4c::impl::reference< EClass__eGenericSuperTypes_tag >;
template class e4c::impl::reference< EClass__eAllGenericSuperTypes_tag >;
template class e4c::impl::reference< EClassifier__ePackage_tag >;
template class e4c::impl::reference< EClassifier__eTypeParameters_tag >;
template class e4c::impl::reference< EEnum__eLiterals_tag >;
template class e4c::impl::reference< EEnumLiteral__eEnum_tag >;
template class e4c::impl::reference< EFactory__ePackage_tag >;
template class e4c::impl::reference< EModelElement__eAnnotations_tag >;
template class e4c::impl::reference< EOperation__eContainingClass_tag >;
template class e4c::impl::reference< EOperation__eTypeParameters_tag >;
template class e4c::impl::reference< EOperation__eParameters_tag >;
template class e4c::impl::reference< EOperation__eExceptions_tag >;
template class e4c::impl::reference< EOperation__eGenericExceptions_tag >;
template class e4c::impl::reference< EPackage__eFactoryInstance_tag >;
template class e4c::impl::reference< EPackage__eClassifiers_tag >;
template class e4c::impl::reference< EPackage__eSubpackages_tag >;
template class e4c::impl::reference< EPackage__eSuperPackage_tag >;
template class e4c::impl::reference< EParameter__eOperation_tag >;
template class e4c::impl::reference< EReference__eOpposite_tag >;
template class e4c::impl::reference< EReference__eReferenceType_tag >;
template class e4c::impl::reference< EReference__eKeys_tag >;
template class e4c::impl::reference< EStructuralFeature__eContainingClass_tag >;
template class e4c::impl::reference< ETypedElement__eType_tag >;
template class e4c::impl::reference< ETypedElement__eGenericType_tag >;
template class e4c::impl::reference< EGenericType__eUpperBound_tag >;
template class e4c::impl::reference< EGenericType__eTypeArguments_tag >;
template class e4c::impl::reference< EGenericType__eRawType_tag >;
template class e4c::impl::reference< EGenericType__eLowerBound_tag >;
template class e4c::impl::reference< EGenericType__eTypeParameter_tag >;
template class e4c::impl::reference< EGenericType__eClassifier_tag >;
template class e4c::impl::reference< ETypeParameter__eBounds_tag >;

extern "C" ::ecore::EPackage_ptr e4c_ecore()
{
	return ::ecore::EcorePackage::_instance();
}
