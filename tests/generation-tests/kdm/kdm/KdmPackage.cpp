#include "KdmPackage.hpp"
#include "KdmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::kdm;

KdmPackage::KdmPackage()
{
	m_eFactoryInstance = KdmFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr KDMFramework_ = ecoreFactory->createEClass();
	KDMFramework_->setName("KDMFramework");
	// m_eClassifiers.push_back(KDMFramework_);
	::ecore::EClass_ptr KDMModel_ = ecoreFactory->createEClass();
	KDMModel_->setName("KDMModel");
	// m_eClassifiers.push_back(KDMModel_);
	::ecore::EClass_ptr Audit_ = ecoreFactory->createEClass();
	Audit_->setName("Audit");
	// m_eClassifiers.push_back(Audit_);
	::ecore::EClass_ptr Segment_ = ecoreFactory->createEClass();
	Segment_->setName("Segment");
	// m_eClassifiers.push_back(Segment_);
	::ecore::EClass_ptr Attribute_ = ecoreFactory->createEClass();
	Attribute_->setName("Attribute");
	// m_eClassifiers.push_back(Attribute_);
	::ecore::EClass_ptr Annotation_ = ecoreFactory->createEClass();
	Annotation_->setName("Annotation");
	// m_eClassifiers.push_back(Annotation_);
	::ecore::EClass_ptr TagDefinition_ = ecoreFactory->createEClass();
	TagDefinition_->setName("TagDefinition");
	// m_eClassifiers.push_back(TagDefinition_);
	::ecore::EClass_ptr ExtendedValue_ = ecoreFactory->createEClass();
	ExtendedValue_->setName("ExtendedValue");
	// m_eClassifiers.push_back(ExtendedValue_);
	::ecore::EClass_ptr Stereotype_ = ecoreFactory->createEClass();
	Stereotype_->setName("Stereotype");
	// m_eClassifiers.push_back(Stereotype_);
	::ecore::EClass_ptr ExtensionFamily_ = ecoreFactory->createEClass();
	ExtensionFamily_->setName("ExtensionFamily");
	// m_eClassifiers.push_back(ExtensionFamily_);
	::ecore::EClass_ptr TaggedRef_ = ecoreFactory->createEClass();
	TaggedRef_->setName("TaggedRef");
	// m_eClassifiers.push_back(TaggedRef_);
	::ecore::EClass_ptr TaggedValue_ = ecoreFactory->createEClass();
	TaggedValue_->setName("TaggedValue");
	// m_eClassifiers.push_back(TaggedValue_);
	
	
	// KDMFramework_->addESuperType(ModelElement_);
	// KDMModel_->addESuperType(KDMFramework_);
	// Audit_->addESuperType(Element_);
	// Segment_->addESuperType(KDMFramework_);
	// Attribute_->addESuperType(Element_);
	// Annotation_->addESuperType(Element_);
	// TagDefinition_->addESuperType(Element_);
	// ExtendedValue_->addESuperType(Element_);
	// Stereotype_->addESuperType(Element_);
	// ExtensionFamily_->addESuperType(Element_);
	// TaggedRef_->addESuperType(ExtendedValue_);
	// TaggedValue_->addESuperType(ExtendedValue_);
	
	
	
	
}

const KdmPackage_ptr KdmPackage::_instance()
{
	static KdmPackage __instance;
	return &__instance;
}

e4c::tag_t KdmPackage::getTag_KDMFramework() const
{
	return e4c::tag< KDMFramework >::get();
}
 
e4c::tag_t KdmPackage::getTag_KDMModel() const
{
	return e4c::tag< KDMModel >::get();
}
 
e4c::tag_t KdmPackage::getTag_Audit() const
{
	return e4c::tag< Audit >::get();
}
 
e4c::tag_t KdmPackage::getTag_Segment() const
{
	return e4c::tag< Segment >::get();
}
 
e4c::tag_t KdmPackage::getTag_Attribute() const
{
	return e4c::tag< Attribute >::get();
}
 
e4c::tag_t KdmPackage::getTag_Annotation() const
{
	return e4c::tag< Annotation >::get();
}
 
e4c::tag_t KdmPackage::getTag_TagDefinition() const
{
	return e4c::tag< TagDefinition >::get();
}
 
e4c::tag_t KdmPackage::getTag_ExtendedValue() const
{
	return e4c::tag< ExtendedValue >::get();
}
 
e4c::tag_t KdmPackage::getTag_Stereotype() const
{
	return e4c::tag< Stereotype >::get();
}
 
e4c::tag_t KdmPackage::getTag_ExtensionFamily() const
{
	return e4c::tag< ExtensionFamily >::get();
}
 
e4c::tag_t KdmPackage::getTag_TaggedRef() const
{
	return e4c::tag< TaggedRef >::get();
}
 
e4c::tag_t KdmPackage::getTag_TaggedValue() const
{
	return e4c::tag< TaggedValue >::get();
}
 
e4c::tag_t KdmPackage::getTag_KDMFramework__audit() const
{
	return e4c::tag< KDMFramework__audit_tag >::get();
}

e4c::tag_t KdmPackage::getTag_KDMFramework__extensionFamily() const
{
	return e4c::tag< KDMFramework__extensionFamily_tag >::get();
}

e4c::tag_t KdmPackage::getTag_KDMFramework__name() const
{
	return e4c::tag< KDMFramework__name_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Audit__description() const
{
	return e4c::tag< Audit__description_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Audit__author() const
{
	return e4c::tag< Audit__author_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Audit__date() const
{
	return e4c::tag< Audit__date_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Segment__segment() const
{
	return e4c::tag< Segment__segment_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Segment__model() const
{
	return e4c::tag< Segment__model_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Attribute__tag() const
{
	return e4c::tag< Attribute__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Attribute__value() const
{
	return e4c::tag< Attribute__value_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Annotation__text() const
{
	return e4c::tag< Annotation__text_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TagDefinition__tag() const
{
	return e4c::tag< TagDefinition__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TagDefinition__type() const
{
	return e4c::tag< TagDefinition__type_tag >::get();
}

e4c::tag_t KdmPackage::getTag_ExtendedValue__tag() const
{
	return e4c::tag< ExtendedValue__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Stereotype__tag() const
{
	return e4c::tag< Stereotype__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Stereotype__name() const
{
	return e4c::tag< Stereotype__name_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Stereotype__type() const
{
	return e4c::tag< Stereotype__type_tag >::get();
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily__stereotype() const
{
	return e4c::tag< ExtensionFamily__stereotype_tag >::get();
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily__name() const
{
	return e4c::tag< ExtensionFamily__name_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TaggedRef__reference() const
{
	return e4c::tag< TaggedRef__reference_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TaggedValue__value() const
{
	return e4c::tag< TaggedValue__value_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_kdm()
{
	return ::kdm::kdm::KdmPackage::_instance();
}
