#ifndef EMF_CPP_ECORE_PACKAGE_HPP
#define EMF_CPP_ECORE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/fwd.hpp>

namespace ecore
{


class EcorePackage : public ::ecore::EPackage
{
public:
    static const EcorePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_EAttribute() const;
 	e4c::tag_t getTag_EAnnotation() const;
 	e4c::tag_t getTag_EClass() const;
 	e4c::tag_t getTag_EClassifier() const;
 	e4c::tag_t getTag_EDataType() const;
 	e4c::tag_t getTag_EEnum() const;
 	e4c::tag_t getTag_EEnumLiteral() const;
 	e4c::tag_t getTag_EFactory() const;
 	e4c::tag_t getTag_EModelElement() const;
 	e4c::tag_t getTag_ENamedElement() const;
 	e4c::tag_t getTag_EObject() const;
 	e4c::tag_t getTag_EOperation() const;
 	e4c::tag_t getTag_EPackage() const;
 	e4c::tag_t getTag_EParameter() const;
 	e4c::tag_t getTag_EReference() const;
 	e4c::tag_t getTag_EStructuralFeature() const;
 	e4c::tag_t getTag_ETypedElement() const;
 	e4c::tag_t getTag_EBigDecimal() const;
 	e4c::tag_t getTag_EBigInteger() const;
 	e4c::tag_t getTag_EBoolean() const;
 	e4c::tag_t getTag_EBooleanObject() const;
 	e4c::tag_t getTag_EByte() const;
 	e4c::tag_t getTag_EByteArray() const;
 	e4c::tag_t getTag_EByteObject() const;
 	e4c::tag_t getTag_EChar() const;
 	e4c::tag_t getTag_ECharacterObject() const;
 	e4c::tag_t getTag_EDate() const;
 	e4c::tag_t getTag_EDiagnosticChain() const;
 	e4c::tag_t getTag_EDouble() const;
 	e4c::tag_t getTag_EDoubleObject() const;
 	e4c::tag_t getTag_EEList() const;
 	e4c::tag_t getTag_EEnumerator() const;
 	e4c::tag_t getTag_EFeatureMap() const;
 	e4c::tag_t getTag_EFeatureMapEntry() const;
 	e4c::tag_t getTag_EFloat() const;
 	e4c::tag_t getTag_EFloatObject() const;
 	e4c::tag_t getTag_EInt() const;
 	e4c::tag_t getTag_EIntegerObject() const;
 	e4c::tag_t getTag_EJavaClass() const;
 	e4c::tag_t getTag_EJavaObject() const;
 	e4c::tag_t getTag_ELong() const;
 	e4c::tag_t getTag_ELongObject() const;
 	e4c::tag_t getTag_EMap() const;
 	e4c::tag_t getTag_EResource() const;
 	e4c::tag_t getTag_EResourceSet() const;
 	e4c::tag_t getTag_EShort() const;
 	e4c::tag_t getTag_EShortObject() const;
 	e4c::tag_t getTag_EString() const;
 	e4c::tag_t getTag_EStringToStringMapEntry() const;
 	e4c::tag_t getTag_ETreeIterator() const;
 	e4c::tag_t getTag_EGenericType() const;
 	e4c::tag_t getTag_ETypeParameter() const;
 	e4c::tag_t getTag_EInvocationTargetException() const;
 
 	// Structural features
 	e4c::tag_t getTag_EAttribute__iD() const;
 	e4c::tag_t getTag_EAttribute__eAttributeType() const;
 	e4c::tag_t getTag_EAnnotation__source() const;
 	e4c::tag_t getTag_EAnnotation__details() const;
 	e4c::tag_t getTag_EAnnotation__eModelElement() const;
 	e4c::tag_t getTag_EAnnotation__contents() const;
 	e4c::tag_t getTag_EAnnotation__references() const;
 	e4c::tag_t getTag_EClass__abstract() const;
 	e4c::tag_t getTag_EClass__interface() const;
 	e4c::tag_t getTag_EClass__eSuperTypes() const;
 	e4c::tag_t getTag_EClass__eOperations() const;
 	e4c::tag_t getTag_EClass__eAllAttributes() const;
 	e4c::tag_t getTag_EClass__eAllReferences() const;
 	e4c::tag_t getTag_EClass__eReferences() const;
 	e4c::tag_t getTag_EClass__eAttributes() const;
 	e4c::tag_t getTag_EClass__eAllContainments() const;
 	e4c::tag_t getTag_EClass__eAllOperations() const;
 	e4c::tag_t getTag_EClass__eAllStructuralFeatures() const;
 	e4c::tag_t getTag_EClass__eAllSuperTypes() const;
 	e4c::tag_t getTag_EClass__eIDAttribute() const;
 	e4c::tag_t getTag_EClass__eStructuralFeatures() const;
 	e4c::tag_t getTag_EClass__eGenericSuperTypes() const;
 	e4c::tag_t getTag_EClass__eAllGenericSuperTypes() const;
 	e4c::tag_t getTag_EClassifier__instanceClassName() const;
 	e4c::tag_t getTag_EClassifier__instanceClass() const;
 	e4c::tag_t getTag_EClassifier__defaultValue() const;
 	e4c::tag_t getTag_EClassifier__instanceTypeName() const;
 	e4c::tag_t getTag_EClassifier__ePackage() const;
 	e4c::tag_t getTag_EClassifier__eTypeParameters() const;
 	e4c::tag_t getTag_EDataType__serializable() const;
 	e4c::tag_t getTag_EEnum__eLiterals() const;
 	e4c::tag_t getTag_EEnumLiteral__value() const;
 	e4c::tag_t getTag_EEnumLiteral__instance() const;
 	e4c::tag_t getTag_EEnumLiteral__literal() const;
 	e4c::tag_t getTag_EEnumLiteral__eEnum() const;
 	e4c::tag_t getTag_EFactory__ePackage() const;
 	e4c::tag_t getTag_EModelElement__eAnnotations() const;
 	e4c::tag_t getTag_ENamedElement__name() const;
 	e4c::tag_t getTag_EOperation__eContainingClass() const;
 	e4c::tag_t getTag_EOperation__eTypeParameters() const;
 	e4c::tag_t getTag_EOperation__eParameters() const;
 	e4c::tag_t getTag_EOperation__eExceptions() const;
 	e4c::tag_t getTag_EOperation__eGenericExceptions() const;
 	e4c::tag_t getTag_EPackage__nsURI() const;
 	e4c::tag_t getTag_EPackage__nsPrefix() const;
 	e4c::tag_t getTag_EPackage__eFactoryInstance() const;
 	e4c::tag_t getTag_EPackage__eClassifiers() const;
 	e4c::tag_t getTag_EPackage__eSubpackages() const;
 	e4c::tag_t getTag_EPackage__eSuperPackage() const;
 	e4c::tag_t getTag_EParameter__eOperation() const;
 	e4c::tag_t getTag_EReference__containment() const;
 	e4c::tag_t getTag_EReference__container() const;
 	e4c::tag_t getTag_EReference__resolveProxies() const;
 	e4c::tag_t getTag_EReference__eOpposite() const;
 	e4c::tag_t getTag_EReference__eReferenceType() const;
 	e4c::tag_t getTag_EReference__eKeys() const;
 	e4c::tag_t getTag_EStructuralFeature__changeable() const;
 	e4c::tag_t getTag_EStructuralFeature__volatile() const;
 	e4c::tag_t getTag_EStructuralFeature__transient() const;
 	e4c::tag_t getTag_EStructuralFeature__defaultValueLiteral() const;
 	e4c::tag_t getTag_EStructuralFeature__defaultValue() const;
 	e4c::tag_t getTag_EStructuralFeature__unsettable() const;
 	e4c::tag_t getTag_EStructuralFeature__derived() const;
 	e4c::tag_t getTag_EStructuralFeature__eContainingClass() const;
 	e4c::tag_t getTag_ETypedElement__ordered() const;
 	e4c::tag_t getTag_ETypedElement__unique() const;
 	e4c::tag_t getTag_ETypedElement__lowerBound() const;
 	e4c::tag_t getTag_ETypedElement__upperBound() const;
 	e4c::tag_t getTag_ETypedElement__many() const;
 	e4c::tag_t getTag_ETypedElement__required() const;
 	e4c::tag_t getTag_ETypedElement__eType() const;
 	e4c::tag_t getTag_ETypedElement__eGenericType() const;
 	e4c::tag_t getTag_EStringToStringMapEntry__key() const;
 	e4c::tag_t getTag_EStringToStringMapEntry__value() const;
 	e4c::tag_t getTag_EGenericType__eUpperBound() const;
 	e4c::tag_t getTag_EGenericType__eTypeArguments() const;
 	e4c::tag_t getTag_EGenericType__eRawType() const;
 	e4c::tag_t getTag_EGenericType__eLowerBound() const;
 	e4c::tag_t getTag_EGenericType__eTypeParameter() const;
 	e4c::tag_t getTag_EGenericType__eClassifier() const;
 	e4c::tag_t getTag_ETypeParameter__eBounds() const;

protected:
    EcorePackage();
};

} // ecore


#endif // EMF_CPP_ECORE_PACKAGE_HPP
