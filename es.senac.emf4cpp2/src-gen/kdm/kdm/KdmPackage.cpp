#include "KdmPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::kdm;

KdmPackage::KdmPackage()
{
}

KdmPackage_ptr KdmPackage::_instance()
{
	static KdmPackage __instance;
	return &__instance;
}

e4c::tag_t KdmPackage::getTag_KDMFramework()
{
	return e4c::tag< KDMFramework >::get();
}
 
e4c::tag_t KdmPackage::getTag_KDMModel()
{
	return e4c::tag< KDMModel >::get();
}
 
e4c::tag_t KdmPackage::getTag_Audit()
{
	return e4c::tag< Audit >::get();
}
 
e4c::tag_t KdmPackage::getTag_Segment()
{
	return e4c::tag< Segment >::get();
}
 
e4c::tag_t KdmPackage::getTag_Attribute()
{
	return e4c::tag< Attribute >::get();
}
 
e4c::tag_t KdmPackage::getTag_Annotation()
{
	return e4c::tag< Annotation >::get();
}
 
e4c::tag_t KdmPackage::getTag_TagDefinition()
{
	return e4c::tag< TagDefinition >::get();
}
 
e4c::tag_t KdmPackage::getTag_ExtendedValue()
{
	return e4c::tag< ExtendedValue >::get();
}
 
e4c::tag_t KdmPackage::getTag_Stereotype()
{
	return e4c::tag< Stereotype >::get();
}
 
e4c::tag_t KdmPackage::getTag_ExtensionFamily()
{
	return e4c::tag< ExtensionFamily >::get();
}
 
e4c::tag_t KdmPackage::getTag_TaggedRef()
{
	return e4c::tag< TaggedRef >::get();
}
 
e4c::tag_t KdmPackage::getTag_TaggedValue()
{
	return e4c::tag< TaggedValue >::get();
}
 
e4c::tag_t KdmPackage::getTag_KDMFramework__audit()
{
	return e4c::tag< KDMFramework__audit_tag >::get();
}

e4c::tag_t KdmPackage::getTag_KDMFramework__extensionFamily()
{
	return e4c::tag< KDMFramework__extensionFamily_tag >::get();
}

e4c::tag_t KdmPackage::getTag_KDMFramework__name()
{
	return e4c::tag< KDMFramework__name_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Audit__description()
{
	return e4c::tag< Audit__description_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Audit__author()
{
	return e4c::tag< Audit__author_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Audit__date()
{
	return e4c::tag< Audit__date_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Segment__segment()
{
	return e4c::tag< Segment__segment_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Segment__model()
{
	return e4c::tag< Segment__model_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Attribute__tag()
{
	return e4c::tag< Attribute__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Attribute__value()
{
	return e4c::tag< Attribute__value_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Annotation__text()
{
	return e4c::tag< Annotation__text_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TagDefinition__tag()
{
	return e4c::tag< TagDefinition__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TagDefinition__type()
{
	return e4c::tag< TagDefinition__type_tag >::get();
}

e4c::tag_t KdmPackage::getTag_ExtendedValue__tag()
{
	return e4c::tag< ExtendedValue__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Stereotype__tag()
{
	return e4c::tag< Stereotype__tag_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Stereotype__name()
{
	return e4c::tag< Stereotype__name_tag >::get();
}

e4c::tag_t KdmPackage::getTag_Stereotype__type()
{
	return e4c::tag< Stereotype__type_tag >::get();
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily__stereotype()
{
	return e4c::tag< ExtensionFamily__stereotype_tag >::get();
}

e4c::tag_t KdmPackage::getTag_ExtensionFamily__name()
{
	return e4c::tag< ExtensionFamily__name_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TaggedRef__reference()
{
	return e4c::tag< TaggedRef__reference_tag >::get();
}

e4c::tag_t KdmPackage::getTag_TaggedValue__value()
{
	return e4c::tag< TaggedValue__value_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_kdm()
{
	return ::kdm::kdm::KdmPackage::_instance();
}
