#include "KdmPackage.hpp"
#include "KdmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::kdm;

KdmPackage::KdmPackage()
{
	m_eFactoryInstance = KdmFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
