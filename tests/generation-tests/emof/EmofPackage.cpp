#include "EmofPackage.hpp"
#include "EmofFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace emof;

EmofPackage::EmofPackage()
{
	m_eFactoryInstance = EmofFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr Class_ = ecoreFactory->createEClass();
	Class_->setName("Class");
	// m_eClassifiers.push_back(Class_);
	::ecore::EClass_ptr Comment_ = ecoreFactory->createEClass();
	Comment_->setName("Comment");
	// m_eClassifiers.push_back(Comment_);
	::ecore::EClass_ptr DataType_ = ecoreFactory->createEClass();
	DataType_->setName("DataType");
	// m_eClassifiers.push_back(DataType_);
	::ecore::EClass_ptr Element_ = ecoreFactory->createEClass();
	Element_->setName("Element");
	// m_eClassifiers.push_back(Element_);
	::ecore::EClass_ptr Enumeration_ = ecoreFactory->createEClass();
	Enumeration_->setName("Enumeration");
	// m_eClassifiers.push_back(Enumeration_);
	::ecore::EClass_ptr EnumerationLiteral_ = ecoreFactory->createEClass();
	EnumerationLiteral_->setName("EnumerationLiteral");
	// m_eClassifiers.push_back(EnumerationLiteral_);
	::ecore::EClass_ptr Extent_ = ecoreFactory->createEClass();
	Extent_->setName("Extent");
	// m_eClassifiers.push_back(Extent_);
	::ecore::EClass_ptr MultiplicityElement_ = ecoreFactory->createEClass();
	MultiplicityElement_->setName("MultiplicityElement");
	// m_eClassifiers.push_back(MultiplicityElement_);
	::ecore::EClass_ptr NamedElement_ = ecoreFactory->createEClass();
	NamedElement_->setName("NamedElement");
	// m_eClassifiers.push_back(NamedElement_);
	::ecore::EClass_ptr Object_ = ecoreFactory->createEClass();
	Object_->setName("Object");
	// m_eClassifiers.push_back(Object_);
	::ecore::EClass_ptr Operation_ = ecoreFactory->createEClass();
	Operation_->setName("Operation");
	// m_eClassifiers.push_back(Operation_);
	::ecore::EClass_ptr Package_ = ecoreFactory->createEClass();
	Package_->setName("Package");
	// m_eClassifiers.push_back(Package_);
	::ecore::EClass_ptr Parameter_ = ecoreFactory->createEClass();
	Parameter_->setName("Parameter");
	// m_eClassifiers.push_back(Parameter_);
	::ecore::EClass_ptr PrimitiveType_ = ecoreFactory->createEClass();
	PrimitiveType_->setName("PrimitiveType");
	// m_eClassifiers.push_back(PrimitiveType_);
	::ecore::EClass_ptr Property_ = ecoreFactory->createEClass();
	Property_->setName("Property");
	// m_eClassifiers.push_back(Property_);
	::ecore::EClass_ptr Tag_ = ecoreFactory->createEClass();
	Tag_->setName("Tag");
	// m_eClassifiers.push_back(Tag_);
	::ecore::EClass_ptr Type_ = ecoreFactory->createEClass();
	Type_->setName("Type");
	// m_eClassifiers.push_back(Type_);
	::ecore::EClass_ptr TypedElement_ = ecoreFactory->createEClass();
	TypedElement_->setName("TypedElement");
	// m_eClassifiers.push_back(TypedElement_);
	::ecore::EClass_ptr URIExtent_ = ecoreFactory->createEClass();
	URIExtent_->setName("URIExtent");
	// m_eClassifiers.push_back(URIExtent_);
	
	
	// Class_->addESuperType(Type_);
	// Comment_->addESuperType(Element_);
	// DataType_->addESuperType(Type_);
	// Element_->addESuperType(Object_);
	// Enumeration_->addESuperType(DataType_);
	// EnumerationLiteral_->addESuperType(NamedElement_);
	// Extent_->addESuperType(Object_);
	// NamedElement_->addESuperType(Element_);
	// Operation_->addESuperType(TypedElement_);
	// Operation_->addESuperType(MultiplicityElement_);
	// Package_->addESuperType(NamedElement_);
	// Parameter_->addESuperType(TypedElement_);
	// Parameter_->addESuperType(MultiplicityElement_);
	// PrimitiveType_->addESuperType(DataType_);
	// Property_->addESuperType(TypedElement_);
	// Property_->addESuperType(MultiplicityElement_);
	// Tag_->addESuperType(Element_);
	// Type_->addESuperType(NamedElement_);
	// TypedElement_->addESuperType(NamedElement_);
	// URIExtent_->addESuperType(Extent_);
	
	
	::ecore::EDataType_ptr Boolean_ = ecoreFactory->createEDataType();
	Boolean_->setName("Boolean");
	// m_eClassifiers.push_back(Boolean_);
	::ecore::EDataType_ptr Integer_ = ecoreFactory->createEDataType();
	Integer_->setName("Integer");
	// m_eClassifiers.push_back(Integer_);
	::ecore::EDataType_ptr Real_ = ecoreFactory->createEDataType();
	Real_->setName("Real");
	// m_eClassifiers.push_back(Real_);
	::ecore::EDataType_ptr String_ = ecoreFactory->createEDataType();
	String_->setName("String");
	// m_eClassifiers.push_back(String_);
	::ecore::EDataType_ptr UnlimitedNatural_ = ecoreFactory->createEDataType();
	UnlimitedNatural_->setName("UnlimitedNatural");
	// m_eClassifiers.push_back(UnlimitedNatural_);
	
	
}

const EmofPackage_ptr EmofPackage::_instance()
{
	static EmofPackage __instance;
	return &__instance;
}

e4c::tag_t EmofPackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t EmofPackage::getTag_Class() const
{
	return e4c::tag< Class >::get();
}
 
e4c::tag_t EmofPackage::getTag_Comment() const
{
	return e4c::tag< Comment >::get();
}
 
e4c::tag_t EmofPackage::getTag_DataType() const
{
	return e4c::tag< DataType >::get();
}
 
e4c::tag_t EmofPackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t EmofPackage::getTag_Enumeration() const
{
	return e4c::tag< Enumeration >::get();
}
 
e4c::tag_t EmofPackage::getTag_EnumerationLiteral() const
{
	return e4c::tag< EnumerationLiteral >::get();
}
 
e4c::tag_t EmofPackage::getTag_Extent() const
{
	return e4c::tag< Extent >::get();
}
 
e4c::tag_t EmofPackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
e4c::tag_t EmofPackage::getTag_MultiplicityElement() const
{
	return e4c::tag< MultiplicityElement >::get();
}
 
e4c::tag_t EmofPackage::getTag_NamedElement() const
{
	return e4c::tag< NamedElement >::get();
}
 
e4c::tag_t EmofPackage::getTag_Object() const
{
	return e4c::tag< Object >::get();
}
 
e4c::tag_t EmofPackage::getTag_Operation() const
{
	return e4c::tag< Operation >::get();
}
 
e4c::tag_t EmofPackage::getTag_Package() const
{
	return e4c::tag< Package >::get();
}
 
e4c::tag_t EmofPackage::getTag_Parameter() const
{
	return e4c::tag< Parameter >::get();
}
 
e4c::tag_t EmofPackage::getTag_PrimitiveType() const
{
	return e4c::tag< PrimitiveType >::get();
}
 
e4c::tag_t EmofPackage::getTag_Property() const
{
	return e4c::tag< Property >::get();
}
 
e4c::tag_t EmofPackage::getTag_Real() const
{
	return e4c::tag< Real >::get();
}
 
e4c::tag_t EmofPackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
e4c::tag_t EmofPackage::getTag_Tag() const
{
	return e4c::tag< Tag >::get();
}
 
e4c::tag_t EmofPackage::getTag_Type() const
{
	return e4c::tag< Type >::get();
}
 
e4c::tag_t EmofPackage::getTag_TypedElement() const
{
	return e4c::tag< TypedElement >::get();
}
 
e4c::tag_t EmofPackage::getTag_URIExtent() const
{
	return e4c::tag< URIExtent >::get();
}
 
e4c::tag_t EmofPackage::getTag_UnlimitedNatural() const
{
	return e4c::tag< UnlimitedNatural >::get();
}
 
e4c::tag_t EmofPackage::getTag_Class__isAbstract() const
{
	return e4c::tag< Class__isAbstract_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Class__ownedAttribute() const
{
	return e4c::tag< Class__ownedAttribute_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Class__ownedOperation() const
{
	return e4c::tag< Class__ownedOperation_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Class__superClass() const
{
	return e4c::tag< Class__superClass_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Comment__annotatedElement() const
{
	return e4c::tag< Comment__annotatedElement_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Element__ownedComment() const
{
	return e4c::tag< Element__ownedComment_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Element__tag() const
{
	return e4c::tag< Element__tag_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Enumeration__ownedLiteral() const
{
	return e4c::tag< Enumeration__ownedLiteral_tag >::get();
}

e4c::tag_t EmofPackage::getTag_EnumerationLiteral__enumeration() const
{
	return e4c::tag< EnumerationLiteral__enumeration_tag >::get();
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__isOrdered() const
{
	return e4c::tag< MultiplicityElement__isOrdered_tag >::get();
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__isUnique() const
{
	return e4c::tag< MultiplicityElement__isUnique_tag >::get();
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__lower() const
{
	return e4c::tag< MultiplicityElement__lower_tag >::get();
}

e4c::tag_t EmofPackage::getTag_MultiplicityElement__upper() const
{
	return e4c::tag< MultiplicityElement__upper_tag >::get();
}

e4c::tag_t EmofPackage::getTag_NamedElement__name() const
{
	return e4c::tag< NamedElement__name_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Operation__class() const
{
	return e4c::tag< Operation__class_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Operation__ownedParameter() const
{
	return e4c::tag< Operation__ownedParameter_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Operation__raisedException() const
{
	return e4c::tag< Operation__raisedException_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Package__nestedPackage() const
{
	return e4c::tag< Package__nestedPackage_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Package__ownedType() const
{
	return e4c::tag< Package__ownedType_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Package__uri() const
{
	return e4c::tag< Package__uri_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Parameter__operation() const
{
	return e4c::tag< Parameter__operation_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__class() const
{
	return e4c::tag< Property__class_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__default() const
{
	return e4c::tag< Property__default_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__isComposite() const
{
	return e4c::tag< Property__isComposite_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__isDerived() const
{
	return e4c::tag< Property__isDerived_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__isId() const
{
	return e4c::tag< Property__isId_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__isReadOnly() const
{
	return e4c::tag< Property__isReadOnly_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Property__opposite() const
{
	return e4c::tag< Property__opposite_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Tag__element() const
{
	return e4c::tag< Tag__element_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Tag__name() const
{
	return e4c::tag< Tag__name_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Tag__value() const
{
	return e4c::tag< Tag__value_tag >::get();
}

e4c::tag_t EmofPackage::getTag_Type__package() const
{
	return e4c::tag< Type__package_tag >::get();
}

e4c::tag_t EmofPackage::getTag_TypedElement__type() const
{
	return e4c::tag< TypedElement__type_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_emof()
{
	return ::emof::EmofPackage::_instance();
}
