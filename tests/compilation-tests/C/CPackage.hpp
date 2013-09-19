#ifndef EMF_CPP_C_PACKAGE_HPP
#define EMF_CPP_C_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <C/fwd.hpp>

namespace C
{


class CPackage : public ::ecore::EPackage
{
public:
    static const CPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // C


#endif // EMF_CPP_C_PACKAGE_HPP
