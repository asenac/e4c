#ifndef EMF_CPP_C_PACKAGE_HPP
#define EMF_CPP_C_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <C/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace C
{


class CPackage : public ::ecore::EPackage
{
public:
    static const CPackage_ptr _instance();

     ::ecore::EClass_ptr getCDataType() const;
     ::ecore::EClass_ptr getCIntegral() const;
     ::ecore::EClass_ptr getCFloating() const;
     ::ecore::EClass_ptr getCBitField() const;
     ::ecore::EClass_ptr getCVoid() const;
     ::ecore::EClass_ptr getCEnumeration() const;
     ::ecore::EClass_ptr getCInt() const;
     ::ecore::EClass_ptr getCChar() const;
     ::ecore::EClass_ptr getCDouble() const;
     ::ecore::EClass_ptr getCFloat() const;
     ::ecore::EClass_ptr getCLongDouble() const;
     ::ecore::EClass_ptr getCUnsignedInt() const;
     ::ecore::EClass_ptr getCLong() const;
     ::ecore::EClass_ptr getCLongLong() const;
     ::ecore::EClass_ptr getCShort() const;
     ::ecore::EClass_ptr getCSignedChar() const;
     ::ecore::EClass_ptr getCUnsignedChar() const;
     ::ecore::EClass_ptr getCWChar() const;
     ::ecore::EClass_ptr getUnsignedLong() const;
     ::ecore::EClass_ptr getUnsignedLongLong() const;
     ::ecore::EClass_ptr getUnsignedShort() const;
     ::ecore::EClass_ptr getCClassifier() const;
     ::ecore::EClass_ptr getDerived() const;
     ::ecore::EClass_ptr getCStructureContents() const;
     ::ecore::EClass_ptr getCStructured() const;
     ::ecore::EClass_ptr getCStruct() const;
     ::ecore::EClass_ptr getCUnion() const;
     ::ecore::EClass_ptr getCSourceText() const;
     ::ecore::EClass_ptr getCTypedElement() const;
     ::ecore::EClass_ptr getCStructuralFeature() const;
     ::ecore::EClass_ptr getCField() const;
     ::ecore::EClass_ptr getCParameter() const;
     ::ecore::EClass_ptr getBehavioralFeature() const;
     ::ecore::EClass_ptr getCFunction() const;

     ::ecore::EReference_ptr getCStructureContents__sc_container() const;
     ::ecore::EReference_ptr getCStructured__contains() const;
     ::ecore::EAttribute_ptr getCSourceText__source() const;
     ::ecore::EAttribute_ptr getCSourceText__fileName() const;
     ::ecore::EReference_ptr getCTypedElement__type() const;
     ::ecore::EReference_ptr getCTypedElement__source() const;
     ::ecore::EReference_ptr getCParameter__behavioralFeature() const;
     ::ecore::EReference_ptr getBehavioralFeature__parameters() const;
     ::ecore::EAttribute_ptr getCFunction__isVarArg() const;

     e4c::tag_t getTag_CDataType() const;
     e4c::tag_t getTag_CIntegral() const;
     e4c::tag_t getTag_CFloating() const;
     e4c::tag_t getTag_CBitField() const;
     e4c::tag_t getTag_CVoid() const;
     e4c::tag_t getTag_CEnumeration() const;
     e4c::tag_t getTag_CInt() const;
     e4c::tag_t getTag_CChar() const;
     e4c::tag_t getTag_CDouble() const;
     e4c::tag_t getTag_CFloat() const;
     e4c::tag_t getTag_CLongDouble() const;
     e4c::tag_t getTag_CUnsignedInt() const;
     e4c::tag_t getTag_CLong() const;
     e4c::tag_t getTag_CLongLong() const;
     e4c::tag_t getTag_CShort() const;
     e4c::tag_t getTag_CSignedChar() const;
     e4c::tag_t getTag_CUnsignedChar() const;
     e4c::tag_t getTag_CWChar() const;
     e4c::tag_t getTag_UnsignedLong() const;
     e4c::tag_t getTag_UnsignedLongLong() const;
     e4c::tag_t getTag_UnsignedShort() const;
     e4c::tag_t getTag_CClassifier() const;
     e4c::tag_t getTag_Derived() const;
     e4c::tag_t getTag_CStructureContents() const;
     e4c::tag_t getTag_CStructured() const;
     e4c::tag_t getTag_CStruct() const;
     e4c::tag_t getTag_CUnion() const;
     e4c::tag_t getTag_CSourceText() const;
     e4c::tag_t getTag_CTypedElement() const;
     e4c::tag_t getTag_CStructuralFeature() const;
     e4c::tag_t getTag_CField() const;
     e4c::tag_t getTag_CParameter() const;
     e4c::tag_t getTag_BehavioralFeature() const;
     e4c::tag_t getTag_CFunction() const;

     e4c::tag_t getTag_CStructureContents__sc_container() const;
     e4c::tag_t getTag_CStructured__contains() const;
     e4c::tag_t getTag_CSourceText__source() const;
     e4c::tag_t getTag_CSourceText__fileName() const;
     e4c::tag_t getTag_CTypedElement__type() const;
     e4c::tag_t getTag_CTypedElement__source() const;
     e4c::tag_t getTag_CParameter__behavioralFeature() const;
     e4c::tag_t getTag_BehavioralFeature__parameters() const;
     e4c::tag_t getTag_CFunction__isVarArg() const;

protected:
    CPackage();

     ::ecore::EClass_ptr m_CDataType;
     ::ecore::EClass_ptr m_CIntegral;
     ::ecore::EClass_ptr m_CFloating;
     ::ecore::EClass_ptr m_CBitField;
     ::ecore::EClass_ptr m_CVoid;
     ::ecore::EClass_ptr m_CEnumeration;
     ::ecore::EClass_ptr m_CInt;
     ::ecore::EClass_ptr m_CChar;
     ::ecore::EClass_ptr m_CDouble;
     ::ecore::EClass_ptr m_CFloat;
     ::ecore::EClass_ptr m_CLongDouble;
     ::ecore::EClass_ptr m_CUnsignedInt;
     ::ecore::EClass_ptr m_CLong;
     ::ecore::EClass_ptr m_CLongLong;
     ::ecore::EClass_ptr m_CShort;
     ::ecore::EClass_ptr m_CSignedChar;
     ::ecore::EClass_ptr m_CUnsignedChar;
     ::ecore::EClass_ptr m_CWChar;
     ::ecore::EClass_ptr m_UnsignedLong;
     ::ecore::EClass_ptr m_UnsignedLongLong;
     ::ecore::EClass_ptr m_UnsignedShort;
     ::ecore::EClass_ptr m_CClassifier;
     ::ecore::EClass_ptr m_Derived;
     ::ecore::EClass_ptr m_CStructureContents;
     ::ecore::EClass_ptr m_CStructured;
     ::ecore::EClass_ptr m_CStruct;
     ::ecore::EClass_ptr m_CUnion;
     ::ecore::EClass_ptr m_CSourceText;
     ::ecore::EClass_ptr m_CTypedElement;
     ::ecore::EClass_ptr m_CStructuralFeature;
     ::ecore::EClass_ptr m_CField;
     ::ecore::EClass_ptr m_CParameter;
     ::ecore::EClass_ptr m_BehavioralFeature;
     ::ecore::EClass_ptr m_CFunction;
     ::ecore::EReference_ptr m_CStructureContents__sc_container;
     ::ecore::EReference_ptr m_CStructured__contains;
     ::ecore::EAttribute_ptr m_CSourceText__source;
     ::ecore::EAttribute_ptr m_CSourceText__fileName;
     ::ecore::EReference_ptr m_CTypedElement__type;
     ::ecore::EReference_ptr m_CTypedElement__source;
     ::ecore::EReference_ptr m_CParameter__behavioralFeature;
     ::ecore::EReference_ptr m_BehavioralFeature__parameters;
     ::ecore::EAttribute_ptr m_CFunction__isVarArg;
};

} // C


#endif // EMF_CPP_C_PACKAGE_HPP
