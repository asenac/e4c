#include "CPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace C;

CPackage::CPackage()
{
}

CPackage_ptr CPackage::_instance()
{
	static CPackage __instance;
	return &__instance;
}

e4c::tag_t CPackage::getTag_CDataType()
{
	return e4c::tag< CDataType >::get();
}
 
e4c::tag_t CPackage::getTag_CIntegral()
{
	return e4c::tag< CIntegral >::get();
}
 
e4c::tag_t CPackage::getTag_CFloating()
{
	return e4c::tag< CFloating >::get();
}
 
e4c::tag_t CPackage::getTag_CBitField()
{
	return e4c::tag< CBitField >::get();
}
 
e4c::tag_t CPackage::getTag_CVoid()
{
	return e4c::tag< CVoid >::get();
}
 
e4c::tag_t CPackage::getTag_CEnumeration()
{
	return e4c::tag< CEnumeration >::get();
}
 
e4c::tag_t CPackage::getTag_CInt()
{
	return e4c::tag< CInt >::get();
}
 
e4c::tag_t CPackage::getTag_CChar()
{
	return e4c::tag< CChar >::get();
}
 
e4c::tag_t CPackage::getTag_CDouble()
{
	return e4c::tag< CDouble >::get();
}
 
e4c::tag_t CPackage::getTag_CFloat()
{
	return e4c::tag< CFloat >::get();
}
 
e4c::tag_t CPackage::getTag_CLongDouble()
{
	return e4c::tag< CLongDouble >::get();
}
 
e4c::tag_t CPackage::getTag_CUnsignedInt()
{
	return e4c::tag< CUnsignedInt >::get();
}
 
e4c::tag_t CPackage::getTag_CLong()
{
	return e4c::tag< CLong >::get();
}
 
e4c::tag_t CPackage::getTag_CLongLong()
{
	return e4c::tag< CLongLong >::get();
}
 
e4c::tag_t CPackage::getTag_CShort()
{
	return e4c::tag< CShort >::get();
}
 
e4c::tag_t CPackage::getTag_CSignedChar()
{
	return e4c::tag< CSignedChar >::get();
}
 
e4c::tag_t CPackage::getTag_CUnsignedChar()
{
	return e4c::tag< CUnsignedChar >::get();
}
 
e4c::tag_t CPackage::getTag_CWChar()
{
	return e4c::tag< CWChar >::get();
}
 
e4c::tag_t CPackage::getTag_UnsignedLong()
{
	return e4c::tag< UnsignedLong >::get();
}
 
e4c::tag_t CPackage::getTag_UnsignedLongLong()
{
	return e4c::tag< UnsignedLongLong >::get();
}
 
e4c::tag_t CPackage::getTag_UnsignedShort()
{
	return e4c::tag< UnsignedShort >::get();
}
 
e4c::tag_t CPackage::getTag_CClassifier()
{
	return e4c::tag< CClassifier >::get();
}
 
e4c::tag_t CPackage::getTag_Derived()
{
	return e4c::tag< Derived >::get();
}
 
e4c::tag_t CPackage::getTag_CStructureContents()
{
	return e4c::tag< CStructureContents >::get();
}
 
e4c::tag_t CPackage::getTag_CStructured()
{
	return e4c::tag< CStructured >::get();
}
 
e4c::tag_t CPackage::getTag_CStruct()
{
	return e4c::tag< CStruct >::get();
}
 
e4c::tag_t CPackage::getTag_CUnion()
{
	return e4c::tag< CUnion >::get();
}
 
e4c::tag_t CPackage::getTag_CSourceText()
{
	return e4c::tag< CSourceText >::get();
}
 
e4c::tag_t CPackage::getTag_CTypedElement()
{
	return e4c::tag< CTypedElement >::get();
}
 
e4c::tag_t CPackage::getTag_CStructuralFeature()
{
	return e4c::tag< CStructuralFeature >::get();
}
 
e4c::tag_t CPackage::getTag_CField()
{
	return e4c::tag< CField >::get();
}
 
e4c::tag_t CPackage::getTag_CParameter()
{
	return e4c::tag< CParameter >::get();
}
 
e4c::tag_t CPackage::getTag_BehavioralFeature()
{
	return e4c::tag< BehavioralFeature >::get();
}
 
e4c::tag_t CPackage::getTag_CFunction()
{
	return e4c::tag< CFunction >::get();
}
 
e4c::tag_t CPackage::getTag_CStructureContents__sc_container()
{
	return e4c::tag< CStructureContents__sc_container_tag >::get();
}

e4c::tag_t CPackage::getTag_CStructured__contains()
{
	return e4c::tag< CStructured__contains_tag >::get();
}

e4c::tag_t CPackage::getTag_CSourceText__source()
{
	return e4c::tag< CSourceText__source_tag >::get();
}

e4c::tag_t CPackage::getTag_CSourceText__fileName()
{
	return e4c::tag< CSourceText__fileName_tag >::get();
}

e4c::tag_t CPackage::getTag_CTypedElement__type()
{
	return e4c::tag< CTypedElement__type_tag >::get();
}

e4c::tag_t CPackage::getTag_CTypedElement__source()
{
	return e4c::tag< CTypedElement__source_tag >::get();
}

e4c::tag_t CPackage::getTag_CParameter__behavioralFeature()
{
	return e4c::tag< CParameter__behavioralFeature_tag >::get();
}

e4c::tag_t CPackage::getTag_BehavioralFeature__parameters()
{
	return e4c::tag< BehavioralFeature__parameters_tag >::get();
}

e4c::tag_t CPackage::getTag_CFunction__isVarArg()
{
	return e4c::tag< CFunction__isVarArg_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_C()
{
	return ::C::CPackage::_instance();
}
