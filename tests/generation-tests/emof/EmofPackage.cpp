#include "EmofPackage.hpp"
#include "EmofFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace emof;

EmofPackage::EmofPackage()
{
	m_eFactoryInstance = EmofFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
