#include "CorePackage.hpp"
#include "CoreFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::core;

CorePackage::CorePackage()
{
	m_eFactoryInstance = CoreFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const CorePackage_ptr CorePackage::_instance()
{
	static CorePackage __instance;
	return &__instance;
}

e4c::tag_t CorePackage::getTag_Element() const
{
	return e4c::tag< Element >::get();
}
 
e4c::tag_t CorePackage::getTag_ModelElement() const
{
	return e4c::tag< ModelElement >::get();
}
 
e4c::tag_t CorePackage::getTag_KDMEntity() const
{
	return e4c::tag< KDMEntity >::get();
}
 
e4c::tag_t CorePackage::getTag_KDMRelationship() const
{
	return e4c::tag< KDMRelationship >::get();
}
 
e4c::tag_t CorePackage::getTag_AggregatedRelationship() const
{
	return e4c::tag< AggregatedRelationship >::get();
}
 
e4c::tag_t CorePackage::getTag_String() const
{
	return e4c::tag< String >::get();
}
 
e4c::tag_t CorePackage::getTag_Integer() const
{
	return e4c::tag< Integer >::get();
}
 
e4c::tag_t CorePackage::getTag_Boolean() const
{
	return e4c::tag< Boolean >::get();
}
 
e4c::tag_t CorePackage::getTag_Element__attribute() const
{
	return e4c::tag< Element__attribute_tag >::get();
}

e4c::tag_t CorePackage::getTag_Element__annotation() const
{
	return e4c::tag< Element__annotation_tag >::get();
}

e4c::tag_t CorePackage::getTag_ModelElement__stereotype() const
{
	return e4c::tag< ModelElement__stereotype_tag >::get();
}

e4c::tag_t CorePackage::getTag_ModelElement__taggedValue() const
{
	return e4c::tag< ModelElement__taggedValue_tag >::get();
}

e4c::tag_t CorePackage::getTag_KDMEntity__name() const
{
	return e4c::tag< KDMEntity__name_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__from() const
{
	return e4c::tag< AggregatedRelationship__from_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__to() const
{
	return e4c::tag< AggregatedRelationship__to_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__relation() const
{
	return e4c::tag< AggregatedRelationship__relation_tag >::get();
}

e4c::tag_t CorePackage::getTag_AggregatedRelationship__density() const
{
	return e4c::tag< AggregatedRelationship__density_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_core()
{
	return ::kdm::core::CorePackage::_instance();
}
