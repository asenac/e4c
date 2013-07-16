#ifndef EMF_CPP_C_PACKAGE_HPP
#define EMF_CPP_C_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <C/fwd.hpp>

namespace C
{


class CPackage : public ::ecore::EPackage
{
public:
    static CPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_CDataType();
 	e4c::tag_t getTag_CIntegral();
 	e4c::tag_t getTag_CFloating();
 	e4c::tag_t getTag_CBitField();
 	e4c::tag_t getTag_CVoid();
 	e4c::tag_t getTag_CEnumeration();
 	e4c::tag_t getTag_CInt();
 	e4c::tag_t getTag_CChar();
 	e4c::tag_t getTag_CDouble();
 	e4c::tag_t getTag_CFloat();
 	e4c::tag_t getTag_CLongDouble();
 	e4c::tag_t getTag_CUnsignedInt();
 	e4c::tag_t getTag_CLong();
 	e4c::tag_t getTag_CLongLong();
 	e4c::tag_t getTag_CShort();
 	e4c::tag_t getTag_CSignedChar();
 	e4c::tag_t getTag_CUnsignedChar();
 	e4c::tag_t getTag_CWChar();
 	e4c::tag_t getTag_UnsignedLong();
 	e4c::tag_t getTag_UnsignedLongLong();
 	e4c::tag_t getTag_UnsignedShort();
 	e4c::tag_t getTag_CClassifier();
 	e4c::tag_t getTag_Derived();
 	e4c::tag_t getTag_CStructureContents();
 	e4c::tag_t getTag_CStructured();
 	e4c::tag_t getTag_CStruct();
 	e4c::tag_t getTag_CUnion();
 	e4c::tag_t getTag_CSourceText();
 	e4c::tag_t getTag_CTypedElement();
 	e4c::tag_t getTag_CStructuralFeature();
 	e4c::tag_t getTag_CField();
 	e4c::tag_t getTag_CParameter();
 	e4c::tag_t getTag_BehavioralFeature();
 	e4c::tag_t getTag_CFunction();
 
 	// Structural features
 	e4c::tag_t getTag_CStructureContents__sc_container();
 	e4c::tag_t getTag_CStructured__contains();
 	e4c::tag_t getTag_CSourceText__source();
 	e4c::tag_t getTag_CSourceText__fileName();
 	e4c::tag_t getTag_CTypedElement__type();
 	e4c::tag_t getTag_CTypedElement__source();
 	e4c::tag_t getTag_CParameter__behavioralFeature();
 	e4c::tag_t getTag_BehavioralFeature__parameters();
 	e4c::tag_t getTag_CFunction__isVarArg();

protected:
    CPackage();
};

} // C


#endif // EMF_CPP_C_PACKAGE_HPP
