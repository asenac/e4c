#include "CorePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::core;

CorePackage::CorePackage()
{
}

CorePackage_ptr CorePackage::_instance()
{
	static CorePackage __instance;
	return &__instance;
}

e4c::tag_t CorePackage::getTag_Element()
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t CorePackage::getTag_ModelElement()
{
	return e4c::tag< ModelElement >::get();
}
 
e4c::tag_t CorePackage::getTag_KDMEntity()
{
	return e4c::tag< KDMEntity >::get();
}
 
e4c::tag_t CorePackage::getTag_KDMRelationship()
{
	return e4c::tag< KDMRelationship >::get();
}
 
e4c::tag_t CorePackage::getTag_AggregatedRelationship()
{
	return e4c::tag< AggregatedRelationship >::get();
}
 
e4c::tag_t CorePackage::getTag_String()
{
	return e4c::tag< String >::get();
}
 
e4c::tag_t CorePackage::getTag_Integer()
{
	return e4c::tag< Integer >::get();
}
 
e4c::tag_t CorePackage::getTag_Boolean()
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t CorePackage::getTag_Element__attribute()
{
	return e4c::tag< Element__attribute_tag >::get();
}

e4c::tag_t CorePackage::getTag_Element__annotation()
{
	return e4c::tag< Element__annotation_tag >::get();
}

e4c::tag_t CorePackage::getTag_ModelElement__stereotype()
{
	return e4c::tag< ModelElement__stereotype_tag >::get();
}

e4c::tag_t CorePackage::getTag_ModelElement__taggedValue()
{
	return e4c::tag< ModelElement__taggedValue_tag >::get();
}

e4c::tag_t CorePackage::getTag_KDMEntity__name()
{
	return e4c::tag< KDMEntity__name_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__from()
{
	return e4c::tag< AggregatedRelationship__from_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__to()
{
	return e4c::tag< AggregatedRelationship__to_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__relation()
{
	return e4c::tag< AggregatedRelationship__relation_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__density()
{
	return e4c::tag< AggregatedRelationship__density_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_core()
{
	return ::kdm::core::CorePackage::_instance();
}
