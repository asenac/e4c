#include "CPackage.hpp"
#include "CFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace C;

CPackage::CPackage()
{
	m_eFactoryInstance = CFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const CPackage_ptr CPackage::_instance()
{
	static CPackage __instance;
	return &__instance;
}

e4c::tag_t CPackage::getTag_CDataType() const
{
	return e4c::tag< CDataType >::get();
}
 
e4c::tag_t CPackage::getTag_CIntegral() const
{
	return e4c::tag< CIntegral >::get();
}
 
e4c::tag_t CPackage::getTag_CFloating() const
{
	return e4c::tag< CFloating >::get();
}
 
e4c::tag_t CPackage::getTag_CBitField() const
{
	return e4c::tag< CBitField >::get();
}
 
e4c::tag_t CPackage::getTag_CVoid() const
{
	return e4c::tag< CVoid >::get();
}
 
e4c::tag_t CPackage::getTag_CEnumeration() const
{
	return e4c::tag< CEnumeration >::get();
}
 
e4c::tag_t CPackage::getTag_CInt() const
{
	return e4c::tag< CInt >::get();
}
 
e4c::tag_t CPackage::getTag_CChar() const
{
	return e4c::tag< CChar >::get();
}
 
e4c::tag_t CPackage::getTag_CDouble() const
{
	return e4c::tag< CDouble >::get();
}
 
e4c::tag_t CPackage::getTag_CFloat() const
{
	return e4c::tag< CFloat >::get();
}
 
e4c::tag_t CPackage::getTag_CLongDouble() const
{
	return e4c::tag< CLongDouble >::get();
}
 
e4c::tag_t CPackage::getTag_CUnsignedInt() const
{
	return e4c::tag< CUnsignedInt >::get();
}
 
e4c::tag_t CPackage::getTag_CLong() const
{
	return e4c::tag< CLong >::get();
}
 
e4c::tag_t CPackage::getTag_CLongLong() const
{
	return e4c::tag< CLongLong >::get();
}
 
e4c::tag_t CPackage::getTag_CShort() const
{
	return e4c::tag< CShort >::get();
}
 
e4c::tag_t CPackage::getTag_CSignedChar() const
{
	return e4c::tag< CSignedChar >::get();
}
 
e4c::tag_t CPackage::getTag_CUnsignedChar() const
{
	return e4c::tag< CUnsignedChar >::get();
}
 
e4c::tag_t CPackage::getTag_CWChar() const
{
	return e4c::tag< CWChar >::get();
}
 
e4c::tag_t CPackage::getTag_UnsignedLong() const
{
	return e4c::tag< UnsignedLong >::get();
}
 
e4c::tag_t CPackage::getTag_UnsignedLongLong() const
{
	return e4c::tag< UnsignedLongLong >::get();
}
 
e4c::tag_t CPackage::getTag_UnsignedShort() const
{
	return e4c::tag< UnsignedShort >::get();
}
 
e4c::tag_t CPackage::getTag_CClassifier() const
{
	return e4c::tag< CClassifier >::get();
}
 
e4c::tag_t CPackage::getTag_Derived() const
{
	return e4c::tag< Derived >::get();
}
 
e4c::tag_t CPackage::getTag_CStructureContents() const
{
	return e4c::tag< CStructureContents >::get();
}
 
e4c::tag_t CPackage::getTag_CStructured() const
{
	return e4c::tag< CStructured >::get();
}
 
e4c::tag_t CPackage::getTag_CStruct() const
{
	return e4c::tag< CStruct >::get();
}
 
e4c::tag_t CPackage::getTag_CUnion() const
{
	return e4c::tag< CUnion >::get();
}
 
e4c::tag_t CPackage::getTag_CSourceText() const
{
	return e4c::tag< CSourceText >::get();
}
 
e4c::tag_t CPackage::getTag_CTypedElement() const
{
	return e4c::tag< CTypedElement >::get();
}
 
e4c::tag_t CPackage::getTag_CStructuralFeature() const
{
	return e4c::tag< CStructuralFeature >::get();
}
 
e4c::tag_t CPackage::getTag_CField() const
{
	return e4c::tag< CField >::get();
}
 
e4c::tag_t CPackage::getTag_CParameter() const
{
	return e4c::tag< CParameter >::get();
}
 
e4c::tag_t CPackage::getTag_BehavioralFeature() const
{
	return e4c::tag< BehavioralFeature >::get();
}
 
e4c::tag_t CPackage::getTag_CFunction() const
{
	return e4c::tag< CFunction >::get();
}
 
e4c::tag_t CPackage::getTag_CStructureContents__sc_container() const
{
	return e4c::tag< CStructureContents__sc_container_tag >::get();
}

e4c::tag_t CPackage::getTag_CStructured__contains() const
{
	return e4c::tag< CStructured__contains_tag >::get();
}

e4c::tag_t CPackage::getTag_CSourceText__source() const
{
	return e4c::tag< CSourceText__source_tag >::get();
}

e4c::tag_t CPackage::getTag_CSourceText__fileName() const
{
	return e4c::tag< CSourceText__fileName_tag >::get();
}

e4c::tag_t CPackage::getTag_CTypedElement__type() const
{
	return e4c::tag< CTypedElement__type_tag >::get();
}

e4c::tag_t CPackage::getTag_CTypedElement__source() const
{
	return e4c::tag< CTypedElement__source_tag >::get();
}

e4c::tag_t CPackage::getTag_CParameter__behavioralFeature() const
{
	return e4c::tag< CParameter__behavioralFeature_tag >::get();
}

e4c::tag_t CPackage::getTag_BehavioralFeature__parameters() const
{
	return e4c::tag< BehavioralFeature__parameters_tag >::get();
}

e4c::tag_t CPackage::getTag_CFunction__isVarArg() const
{
	return e4c::tag< CFunction__isVarArg_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_C()
{
	return ::C::CPackage::_instance();
}
