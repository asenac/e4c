#ifndef EMF_CPP_ECORE_PACKAGE_HPP
#define EMF_CPP_ECORE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <ecore/fwd.hpp>

namespace ecore
{


class EcorePackage : public ::ecore::EPackage
{
public:
    static EcorePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_EAttribute();
 	e4c::tag_t getTag_EAnnotation();
 	e4c::tag_t getTag_EClass();
 	e4c::tag_t getTag_EClassifier();
 	e4c::tag_t getTag_EDataType();
 	e4c::tag_t getTag_EEnum();
 	e4c::tag_t getTag_EEnumLiteral();
 	e4c::tag_t getTag_EFactory();
 	e4c::tag_t getTag_EModelElement();
 	e4c::tag_t getTag_ENamedElement();
 	e4c::tag_t getTag_EObject();
 	e4c::tag_t getTag_EOperation();
 	e4c::tag_t getTag_EPackage();
 	e4c::tag_t getTag_EParameter();
 	e4c::tag_t getTag_EReference();
 	e4c::tag_t getTag_EStructuralFeature();
 	e4c::tag_t getTag_ETypedElement();
 	e4c::tag_t getTag_EBigDecimal();
 	e4c::tag_t getTag_EBigInteger();
 	e4c::tag_t getTag_EBoolean();
 	e4c::tag_t getTag_EBooleanObject();
 	e4c::tag_t getTag_EByte();
 	e4c::tag_t getTag_EByteArray();
 	e4c::tag_t getTag_EByteObject();
 	e4c::tag_t getTag_EChar();
 	e4c::tag_t getTag_ECharacterObject();
 	e4c::tag_t getTag_EDate();
 	e4c::tag_t getTag_EDiagnosticChain();
 	e4c::tag_t getTag_EDouble();
 	e4c::tag_t getTag_EDoubleObject();
 	e4c::tag_t getTag_EEList();
 	e4c::tag_t getTag_EEnumerator();
 	e4c::tag_t getTag_EFeatureMap();
 	e4c::tag_t getTag_EFeatureMapEntry();
 	e4c::tag_t getTag_EFloat();
 	e4c::tag_t getTag_EFloatObject();
 	e4c::tag_t getTag_EInt();
 	e4c::tag_t getTag_EIntegerObject();
 	e4c::tag_t getTag_EJavaClass();
 	e4c::tag_t getTag_EJavaObject();
 	e4c::tag_t getTag_ELong();
 	e4c::tag_t getTag_ELongObject();
 	e4c::tag_t getTag_EMap();
 	e4c::tag_t getTag_EResource();
 	e4c::tag_t getTag_EResourceSet();
 	e4c::tag_t getTag_EShort();
 	e4c::tag_t getTag_EShortObject();
 	e4c::tag_t getTag_EString();
 	e4c::tag_t getTag_EStringToStringMapEntry();
 	e4c::tag_t getTag_ETreeIterator();
 	e4c::tag_t getTag_EGenericType();
 	e4c::tag_t getTag_ETypeParameter();
 	e4c::tag_t getTag_EInvocationTargetException();
 
 	// Structural features
 	e4c::tag_t getTag_EAttribute__iD();
 	e4c::tag_t getTag_EAttribute__eAttributeType();
 	e4c::tag_t getTag_EAnnotation__source();
 	e4c::tag_t getTag_EAnnotation__details();
 	e4c::tag_t getTag_EAnnotation__eModelElement();
 	e4c::tag_t getTag_EAnnotation__contents();
 	e4c::tag_t getTag_EAnnotation__references();
 	e4c::tag_t getTag_EClass__abstract();
 	e4c::tag_t getTag_EClass__interface();
 	e4c::tag_t getTag_EClass__eSuperTypes();
 	e4c::tag_t getTag_EClass__eOperations();
 	e4c::tag_t getTag_EClass__eAllAttributes();
 	e4c::tag_t getTag_EClass__eAllReferences();
 	e4c::tag_t getTag_EClass__eReferences();
 	e4c::tag_t getTag_EClass__eAttributes();
 	e4c::tag_t getTag_EClass__eAllContainments();
 	e4c::tag_t getTag_EClass__eAllOperations();
 	e4c::tag_t getTag_EClass__eAllStructuralFeatures();
 	e4c::tag_t getTag_EClass__eAllSuperTypes();
 	e4c::tag_t getTag_EClass__eIDAttribute();
 	e4c::tag_t getTag_EClass__eStructuralFeatures();
 	e4c::tag_t getTag_EClass__eGenericSuperTypes();
 	e4c::tag_t getTag_EClass__eAllGenericSuperTypes();
 	e4c::tag_t getTag_EClassifier__instanceClassName();
 	e4c::tag_t getTag_EClassifier__instanceClass();
 	e4c::tag_t getTag_EClassifier__defaultValue();
 	e4c::tag_t getTag_EClassifier__instanceTypeName();
 	e4c::tag_t getTag_EClassifier__ePackage();
 	e4c::tag_t getTag_EClassifier__eTypeParameters();
 	e4c::tag_t getTag_EDataType__serializable();
 	e4c::tag_t getTag_EEnum__eLiterals();
 	e4c::tag_t getTag_EEnumLiteral__value();
 	e4c::tag_t getTag_EEnumLiteral__instance();
 	e4c::tag_t getTag_EEnumLiteral__literal();
 	e4c::tag_t getTag_EEnumLiteral__eEnum();
 	e4c::tag_t getTag_EFactory__ePackage();
 	e4c::tag_t getTag_EModelElement__eAnnotations();
 	e4c::tag_t getTag_ENamedElement__name();
 	e4c::tag_t getTag_EOperation__eContainingClass();
 	e4c::tag_t getTag_EOperation__eTypeParameters();
 	e4c::tag_t getTag_EOperation__eParameters();
 	e4c::tag_t getTag_EOperation__eExceptions();
 	e4c::tag_t getTag_EOperation__eGenericExceptions();
 	e4c::tag_t getTag_EPackage__nsURI();
 	e4c::tag_t getTag_EPackage__nsPrefix();
 	e4c::tag_t getTag_EPackage__eFactoryInstance();
 	e4c::tag_t getTag_EPackage__eClassifiers();
 	e4c::tag_t getTag_EPackage__eSubpackages();
 	e4c::tag_t getTag_EPackage__eSuperPackage();
 	e4c::tag_t getTag_EParameter__eOperation();
 	e4c::tag_t getTag_EReference__containment();
 	e4c::tag_t getTag_EReference__container();
 	e4c::tag_t getTag_EReference__resolveProxies();
 	e4c::tag_t getTag_EReference__eOpposite();
 	e4c::tag_t getTag_EReference__eReferenceType();
 	e4c::tag_t getTag_EReference__eKeys();
 	e4c::tag_t getTag_EStructuralFeature__changeable();
 	e4c::tag_t getTag_EStructuralFeature__volatile();
 	e4c::tag_t getTag_EStructuralFeature__transient();
 	e4c::tag_t getTag_EStructuralFeature__defaultValueLiteral();
 	e4c::tag_t getTag_EStructuralFeature__defaultValue();
 	e4c::tag_t getTag_EStructuralFeature__unsettable();
 	e4c::tag_t getTag_EStructuralFeature__derived();
 	e4c::tag_t getTag_EStructuralFeature__eContainingClass();
 	e4c::tag_t getTag_ETypedElement__ordered();
 	e4c::tag_t getTag_ETypedElement__unique();
 	e4c::tag_t getTag_ETypedElement__lowerBound();
 	e4c::tag_t getTag_ETypedElement__upperBound();
 	e4c::tag_t getTag_ETypedElement__many();
 	e4c::tag_t getTag_ETypedElement__required();
 	e4c::tag_t getTag_ETypedElement__eType();
 	e4c::tag_t getTag_ETypedElement__eGenericType();
 	e4c::tag_t getTag_EStringToStringMapEntry__key();
 	e4c::tag_t getTag_EStringToStringMapEntry__value();
 	e4c::tag_t getTag_EGenericType__eUpperBound();
 	e4c::tag_t getTag_EGenericType__eTypeArguments();
 	e4c::tag_t getTag_EGenericType__eRawType();
 	e4c::tag_t getTag_EGenericType__eLowerBound();
 	e4c::tag_t getTag_EGenericType__eTypeParameter();
 	e4c::tag_t getTag_EGenericType__eClassifier();
 	e4c::tag_t getTag_ETypeParameter__eBounds();

protected:
    EcorePackage();
};

} // ecore


#endif // EMF_CPP_ECORE_PACKAGE_HPP
