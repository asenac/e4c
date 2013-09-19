#ifndef EMF_CPP_C_FACTORY_HPP
#define EMF_CPP_C_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <C/fwd.hpp>

namespace C
{


class CFactory : public ::ecore::EFactory
{
public:

    static const CFactory_ptr _instance();

    CDataType_ptr createCDataType() const;
    CIntegral_ptr createCIntegral() const;
    CFloating_ptr createCFloating() const;
    CBitField_ptr createCBitField() const;
    CVoid_ptr createCVoid() const;
    CEnumeration_ptr createCEnumeration() const;
    CInt_ptr createCInt() const;
    CChar_ptr createCChar() const;
    CDouble_ptr createCDouble() const;
    CFloat_ptr createCFloat() const;
    CLongDouble_ptr createCLongDouble() const;
    CUnsignedInt_ptr createCUnsignedInt() const;
    CLong_ptr createCLong() const;
    CLongLong_ptr createCLongLong() const;
    CShort_ptr createCShort() const;
    CSignedChar_ptr createCSignedChar() const;
    CUnsignedChar_ptr createCUnsignedChar() const;
    CWChar_ptr createCWChar() const;
    UnsignedLong_ptr createUnsignedLong() const;
    UnsignedLongLong_ptr createUnsignedLongLong() const;
    UnsignedShort_ptr createUnsignedShort() const;
    CClassifier_ptr createCClassifier() const;
    Derived_ptr createDerived() const;
    CStructureContents_ptr createCStructureContents() const;
    CStructured_ptr createCStructured() const;
    CStruct_ptr createCStruct() const;
    CUnion_ptr createCUnion() const;
    CSourceText_ptr createCSourceText() const;
    CTypedElement_ptr createCTypedElement() const;
    CStructuralFeature_ptr createCStructuralFeature() const;
    CField_ptr createCField() const;
    CParameter_ptr createCParameter() const;
    BehavioralFeature_ptr createBehavioralFeature() const;
    CFunction_ptr createCFunction() const;

protected:

    CFactory();
};

} // C


#endif // EMF_CPP_C_FACTORY_HPP
