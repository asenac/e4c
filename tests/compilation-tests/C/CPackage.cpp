#include "CPackage.hpp"
#include "CFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace C;

CPackage::CPackage()
{
	m_eFactoryInstance = CFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr CDataType_ = ecoreFactory->createEClass();
	CDataType_->setName("CDataType");
	// m_eClassifiers.push_back(CDataType_);
	::ecore::EClass_ptr CIntegral_ = ecoreFactory->createEClass();
	CIntegral_->setName("CIntegral");
	// m_eClassifiers.push_back(CIntegral_);
	::ecore::EClass_ptr CFloating_ = ecoreFactory->createEClass();
	CFloating_->setName("CFloating");
	// m_eClassifiers.push_back(CFloating_);
	::ecore::EClass_ptr CBitField_ = ecoreFactory->createEClass();
	CBitField_->setName("CBitField");
	// m_eClassifiers.push_back(CBitField_);
	::ecore::EClass_ptr CVoid_ = ecoreFactory->createEClass();
	CVoid_->setName("CVoid");
	// m_eClassifiers.push_back(CVoid_);
	::ecore::EClass_ptr CEnumeration_ = ecoreFactory->createEClass();
	CEnumeration_->setName("CEnumeration");
	// m_eClassifiers.push_back(CEnumeration_);
	::ecore::EClass_ptr CInt_ = ecoreFactory->createEClass();
	CInt_->setName("CInt");
	// m_eClassifiers.push_back(CInt_);
	::ecore::EClass_ptr CChar_ = ecoreFactory->createEClass();
	CChar_->setName("CChar");
	// m_eClassifiers.push_back(CChar_);
	::ecore::EClass_ptr CDouble_ = ecoreFactory->createEClass();
	CDouble_->setName("CDouble");
	// m_eClassifiers.push_back(CDouble_);
	::ecore::EClass_ptr CFloat_ = ecoreFactory->createEClass();
	CFloat_->setName("CFloat");
	// m_eClassifiers.push_back(CFloat_);
	::ecore::EClass_ptr CLongDouble_ = ecoreFactory->createEClass();
	CLongDouble_->setName("CLongDouble");
	// m_eClassifiers.push_back(CLongDouble_);
	::ecore::EClass_ptr CUnsignedInt_ = ecoreFactory->createEClass();
	CUnsignedInt_->setName("CUnsignedInt");
	// m_eClassifiers.push_back(CUnsignedInt_);
	::ecore::EClass_ptr CLong_ = ecoreFactory->createEClass();
	CLong_->setName("CLong");
	// m_eClassifiers.push_back(CLong_);
	::ecore::EClass_ptr CLongLong_ = ecoreFactory->createEClass();
	CLongLong_->setName("CLongLong");
	// m_eClassifiers.push_back(CLongLong_);
	::ecore::EClass_ptr CShort_ = ecoreFactory->createEClass();
	CShort_->setName("CShort");
	// m_eClassifiers.push_back(CShort_);
	::ecore::EClass_ptr CSignedChar_ = ecoreFactory->createEClass();
	CSignedChar_->setName("CSignedChar");
	// m_eClassifiers.push_back(CSignedChar_);
	::ecore::EClass_ptr CUnsignedChar_ = ecoreFactory->createEClass();
	CUnsignedChar_->setName("CUnsignedChar");
	// m_eClassifiers.push_back(CUnsignedChar_);
	::ecore::EClass_ptr CWChar_ = ecoreFactory->createEClass();
	CWChar_->setName("CWChar");
	// m_eClassifiers.push_back(CWChar_);
	::ecore::EClass_ptr UnsignedLong_ = ecoreFactory->createEClass();
	UnsignedLong_->setName("UnsignedLong");
	// m_eClassifiers.push_back(UnsignedLong_);
	::ecore::EClass_ptr UnsignedLongLong_ = ecoreFactory->createEClass();
	UnsignedLongLong_->setName("UnsignedLongLong");
	// m_eClassifiers.push_back(UnsignedLongLong_);
	::ecore::EClass_ptr UnsignedShort_ = ecoreFactory->createEClass();
	UnsignedShort_->setName("UnsignedShort");
	// m_eClassifiers.push_back(UnsignedShort_);
	::ecore::EClass_ptr CClassifier_ = ecoreFactory->createEClass();
	CClassifier_->setName("CClassifier");
	// m_eClassifiers.push_back(CClassifier_);
	::ecore::EClass_ptr Derived_ = ecoreFactory->createEClass();
	Derived_->setName("Derived");
	// m_eClassifiers.push_back(Derived_);
	::ecore::EClass_ptr CStructureContents_ = ecoreFactory->createEClass();
	CStructureContents_->setName("CStructureContents");
	// m_eClassifiers.push_back(CStructureContents_);
	::ecore::EClass_ptr CStructured_ = ecoreFactory->createEClass();
	CStructured_->setName("CStructured");
	// m_eClassifiers.push_back(CStructured_);
	::ecore::EClass_ptr CStruct_ = ecoreFactory->createEClass();
	CStruct_->setName("CStruct");
	// m_eClassifiers.push_back(CStruct_);
	::ecore::EClass_ptr CUnion_ = ecoreFactory->createEClass();
	CUnion_->setName("CUnion");
	// m_eClassifiers.push_back(CUnion_);
	::ecore::EClass_ptr CSourceText_ = ecoreFactory->createEClass();
	CSourceText_->setName("CSourceText");
	// m_eClassifiers.push_back(CSourceText_);
	::ecore::EClass_ptr CTypedElement_ = ecoreFactory->createEClass();
	CTypedElement_->setName("CTypedElement");
	// m_eClassifiers.push_back(CTypedElement_);
	::ecore::EClass_ptr CStructuralFeature_ = ecoreFactory->createEClass();
	CStructuralFeature_->setName("CStructuralFeature");
	// m_eClassifiers.push_back(CStructuralFeature_);
	::ecore::EClass_ptr CField_ = ecoreFactory->createEClass();
	CField_->setName("CField");
	// m_eClassifiers.push_back(CField_);
	::ecore::EClass_ptr CParameter_ = ecoreFactory->createEClass();
	CParameter_->setName("CParameter");
	// m_eClassifiers.push_back(CParameter_);
	::ecore::EClass_ptr BehavioralFeature_ = ecoreFactory->createEClass();
	BehavioralFeature_->setName("BehavioralFeature");
	// m_eClassifiers.push_back(BehavioralFeature_);
	::ecore::EClass_ptr CFunction_ = ecoreFactory->createEClass();
	CFunction_->setName("CFunction");
	// m_eClassifiers.push_back(CFunction_);
	
	
	// CDataType_->addESuperType(CClassifier_);
	// CIntegral_->addESuperType(CDataType_);
	// CFloating_->addESuperType(CDataType_);
	// CBitField_->addESuperType(CDataType_);
	// CVoid_->addESuperType(CDataType_);
	// CEnumeration_->addESuperType(CIntegral_);
	// CInt_->addESuperType(CIntegral_);
	// CChar_->addESuperType(CIntegral_);
	// CDouble_->addESuperType(CFloating_);
	// CFloat_->addESuperType(CFloating_);
	// CLongDouble_->addESuperType(CFloating_);
	// CUnsignedInt_->addESuperType(CInt_);
	// CLong_->addESuperType(CInt_);
	// CLongLong_->addESuperType(CInt_);
	// CShort_->addESuperType(CInt_);
	// CSignedChar_->addESuperType(CChar_);
	// CUnsignedChar_->addESuperType(CChar_);
	// CWChar_->addESuperType(CChar_);
	// UnsignedLong_->addESuperType(CUnsignedInt_);
	// UnsignedLongLong_->addESuperType(CUnsignedInt_);
	// UnsignedShort_->addESuperType(CUnsignedInt_);
	// Derived_->addESuperType(CClassifier_);
	// CStructured_->addESuperType(CClassifier_);
	// CStructured_->addESuperType(CStructureContents_);
	// CStruct_->addESuperType(CStructured_);
	// CUnion_->addESuperType(CStructured_);
	// CStructuralFeature_->addESuperType(CStructureContents_);
	// CStructuralFeature_->addESuperType(CTypedElement_);
	// CField_->addESuperType(CStructuralFeature_);
	// CParameter_->addESuperType(CTypedElement_);
	// CFunction_->addESuperType(BehavioralFeature_);
	
	
	
	
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
