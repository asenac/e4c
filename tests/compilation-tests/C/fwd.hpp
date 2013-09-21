#ifndef EMF_CPP_C_FWD_HPP
#define EMF_CPP_C_FWD_HPP


#include <e4c/mapping.hpp>

namespace C
{


class CPackage;
typedef CPackage * CPackage_ptr;
class CFactory;
typedef CFactory * CFactory_ptr;

// Data types


// Classes
class CDataType;
typedef CDataType* CDataType_ptr;
class CIntegral;
typedef CIntegral* CIntegral_ptr;
class CFloating;
typedef CFloating* CFloating_ptr;
class CBitField;
typedef CBitField* CBitField_ptr;
class CVoid;
typedef CVoid* CVoid_ptr;
class CEnumeration;
typedef CEnumeration* CEnumeration_ptr;
class CInt;
typedef CInt* CInt_ptr;
class CChar;
typedef CChar* CChar_ptr;
class CDouble;
typedef CDouble* CDouble_ptr;
class CFloat;
typedef CFloat* CFloat_ptr;
class CLongDouble;
typedef CLongDouble* CLongDouble_ptr;
class CUnsignedInt;
typedef CUnsignedInt* CUnsignedInt_ptr;
class CLong;
typedef CLong* CLong_ptr;
class CLongLong;
typedef CLongLong* CLongLong_ptr;
class CShort;
typedef CShort* CShort_ptr;
class CSignedChar;
typedef CSignedChar* CSignedChar_ptr;
class CUnsignedChar;
typedef CUnsignedChar* CUnsignedChar_ptr;
class CWChar;
typedef CWChar* CWChar_ptr;
class UnsignedLong;
typedef UnsignedLong* UnsignedLong_ptr;
class UnsignedLongLong;
typedef UnsignedLongLong* UnsignedLongLong_ptr;
class UnsignedShort;
typedef UnsignedShort* UnsignedShort_ptr;
class CClassifier;
typedef CClassifier* CClassifier_ptr;
class Derived;
typedef Derived* Derived_ptr;
class CStructureContents;
typedef CStructureContents* CStructureContents_ptr;
class CStructured;
typedef CStructured* CStructured_ptr;
class CStruct;
typedef CStruct* CStruct_ptr;
class CUnion;
typedef CUnion* CUnion_ptr;
class CSourceText;
typedef CSourceText* CSourceText_ptr;
class CTypedElement;
typedef CTypedElement* CTypedElement_ptr;
class CStructuralFeature;
typedef CStructuralFeature* CStructuralFeature_ptr;
class CField;
typedef CField* CField_ptr;
class CParameter;
typedef CParameter* CParameter_ptr;
class BehavioralFeature;
typedef BehavioralFeature* BehavioralFeature_ptr;
class CFunction;
typedef CFunction* CFunction_ptr;


// Structural features
struct CStructureContents__sc_container_tag;
struct CStructured__contains_tag;
struct CSourceText__source_tag;
struct CSourceText__fileName_tag;
struct CTypedElement__type_tag;
struct CTypedElement__source_tag;
struct CParameter__behavioralFeature_tag;
struct BehavioralFeature__parameters_tag;
struct CFunction__isVarArg_tag;


} // C


#endif // EMF_CPP_C_FWD_HPP
