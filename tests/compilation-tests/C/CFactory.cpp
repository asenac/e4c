#include "CFactory.hpp"
#include "CPackage.hpp"
#include "include.hpp"

using namespace C;

CFactory::CFactory()
{
    // m_ePackage = CPackage::_instance();
    // std::bind(&CFactory::createCDataType, this);
    // m_ePackage->getTag_CDataType();
    // std::bind(&CFactory::createCIntegral, this);
    // m_ePackage->getTag_CIntegral();
    // std::bind(&CFactory::createCFloating, this);
    // m_ePackage->getTag_CFloating();
    // std::bind(&CFactory::createCBitField, this);
    // m_ePackage->getTag_CBitField();
    // std::bind(&CFactory::createCVoid, this);
    // m_ePackage->getTag_CVoid();
    // std::bind(&CFactory::createCEnumeration, this);
    // m_ePackage->getTag_CEnumeration();
    // std::bind(&CFactory::createCInt, this);
    // m_ePackage->getTag_CInt();
    // std::bind(&CFactory::createCChar, this);
    // m_ePackage->getTag_CChar();
    // std::bind(&CFactory::createCDouble, this);
    // m_ePackage->getTag_CDouble();
    // std::bind(&CFactory::createCFloat, this);
    // m_ePackage->getTag_CFloat();
    // std::bind(&CFactory::createCLongDouble, this);
    // m_ePackage->getTag_CLongDouble();
    // std::bind(&CFactory::createCUnsignedInt, this);
    // m_ePackage->getTag_CUnsignedInt();
    // std::bind(&CFactory::createCLong, this);
    // m_ePackage->getTag_CLong();
    // std::bind(&CFactory::createCLongLong, this);
    // m_ePackage->getTag_CLongLong();
    // std::bind(&CFactory::createCShort, this);
    // m_ePackage->getTag_CShort();
    // std::bind(&CFactory::createCSignedChar, this);
    // m_ePackage->getTag_CSignedChar();
    // std::bind(&CFactory::createCUnsignedChar, this);
    // m_ePackage->getTag_CUnsignedChar();
    // std::bind(&CFactory::createCWChar, this);
    // m_ePackage->getTag_CWChar();
    // std::bind(&CFactory::createUnsignedLong, this);
    // m_ePackage->getTag_UnsignedLong();
    // std::bind(&CFactory::createUnsignedLongLong, this);
    // m_ePackage->getTag_UnsignedLongLong();
    // std::bind(&CFactory::createUnsignedShort, this);
    // m_ePackage->getTag_UnsignedShort();
    // std::bind(&CFactory::createCClassifier, this);
    // m_ePackage->getTag_CClassifier();
    // std::bind(&CFactory::createDerived, this);
    // m_ePackage->getTag_Derived();
    // std::bind(&CFactory::createCStructureContents, this);
    // m_ePackage->getTag_CStructureContents();
    // std::bind(&CFactory::createCStructured, this);
    // m_ePackage->getTag_CStructured();
    // std::bind(&CFactory::createCStruct, this);
    // m_ePackage->getTag_CStruct();
    // std::bind(&CFactory::createCUnion, this);
    // m_ePackage->getTag_CUnion();
    // std::bind(&CFactory::createCSourceText, this);
    // m_ePackage->getTag_CSourceText();
    // std::bind(&CFactory::createCTypedElement, this);
    // m_ePackage->getTag_CTypedElement();
    // std::bind(&CFactory::createCStructuralFeature, this);
    // m_ePackage->getTag_CStructuralFeature();
    // std::bind(&CFactory::createCField, this);
    // m_ePackage->getTag_CField();
    // std::bind(&CFactory::createCParameter, this);
    // m_ePackage->getTag_CParameter();
    // std::bind(&CFactory::createBehavioralFeature, this);
    // m_ePackage->getTag_BehavioralFeature();
    // std::bind(&CFactory::createCFunction, this);
    // m_ePackage->getTag_CFunction();
}

const CFactory_ptr CFactory::_instance()
{
    static CFactory __instance;
    return &__instance;
}

CDataType_ptr CFactory::createCDataType() const
{
    return new CDataType();
}

CIntegral_ptr CFactory::createCIntegral() const
{
    return new CIntegral();
}

CFloating_ptr CFactory::createCFloating() const
{
    return new CFloating();
}

CBitField_ptr CFactory::createCBitField() const
{
    return new CBitField();
}

CVoid_ptr CFactory::createCVoid() const
{
    return new CVoid();
}

CEnumeration_ptr CFactory::createCEnumeration() const
{
    return new CEnumeration();
}

CInt_ptr CFactory::createCInt() const
{
    return new CInt();
}

CChar_ptr CFactory::createCChar() const
{
    return new CChar();
}

CDouble_ptr CFactory::createCDouble() const
{
    return new CDouble();
}

CFloat_ptr CFactory::createCFloat() const
{
    return new CFloat();
}

CLongDouble_ptr CFactory::createCLongDouble() const
{
    return new CLongDouble();
}

CUnsignedInt_ptr CFactory::createCUnsignedInt() const
{
    return new CUnsignedInt();
}

CLong_ptr CFactory::createCLong() const
{
    return new CLong();
}

CLongLong_ptr CFactory::createCLongLong() const
{
    return new CLongLong();
}

CShort_ptr CFactory::createCShort() const
{
    return new CShort();
}

CSignedChar_ptr CFactory::createCSignedChar() const
{
    return new CSignedChar();
}

CUnsignedChar_ptr CFactory::createCUnsignedChar() const
{
    return new CUnsignedChar();
}

CWChar_ptr CFactory::createCWChar() const
{
    return new CWChar();
}

UnsignedLong_ptr CFactory::createUnsignedLong() const
{
    return new UnsignedLong();
}

UnsignedLongLong_ptr CFactory::createUnsignedLongLong() const
{
    return new UnsignedLongLong();
}

UnsignedShort_ptr CFactory::createUnsignedShort() const
{
    return new UnsignedShort();
}

CClassifier_ptr CFactory::createCClassifier() const
{
    return new CClassifier();
}

Derived_ptr CFactory::createDerived() const
{
    return new Derived();
}

CStructureContents_ptr CFactory::createCStructureContents() const
{
    return new CStructureContents();
}

CStructured_ptr CFactory::createCStructured() const
{
    return new CStructured();
}

CStruct_ptr CFactory::createCStruct() const
{
    return new CStruct();
}

CUnion_ptr CFactory::createCUnion() const
{
    return new CUnion();
}

CSourceText_ptr CFactory::createCSourceText() const
{
    return new CSourceText();
}

CTypedElement_ptr CFactory::createCTypedElement() const
{
    return new CTypedElement();
}

CStructuralFeature_ptr CFactory::createCStructuralFeature() const
{
    return new CStructuralFeature();
}

CField_ptr CFactory::createCField() const
{
    return new CField();
}

CParameter_ptr CFactory::createCParameter() const
{
    return new CParameter();
}

BehavioralFeature_ptr CFactory::createBehavioralFeature() const
{
    return new BehavioralFeature();
}

CFunction_ptr CFactory::createCFunction() const
{
    return new CFunction();
}

