#include "StructurePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::structure;

StructurePackage::StructurePackage()
{
}

StructurePackage_ptr StructurePackage::_instance()
{
	static StructurePackage __instance;
	return &__instance;
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement()
{
	return e4c::tag< AbstractStructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_Subsystem()
{
	return e4c::tag< Subsystem >::get();
}
 
e4c::tag_t StructurePackage::getTag_Layer()
{
	return e4c::tag< Layer >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureModel()
{
	return e4c::tag< StructureModel >::get();
}
 
e4c::tag_t StructurePackage::getTag_Component()
{
	return e4c::tag< Component >::get();
}
 
e4c::tag_t StructurePackage::getTag_SoftwareSystem()
{
	return e4c::tag< SoftwareSystem >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureRelationship()
{
	return e4c::tag< AbstractStructureRelationship >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureRelationship()
{
	return e4c::tag< StructureRelationship >::get();
}
 
e4c::tag_t StructurePackage::getTag_ArchitectureView()
{
	return e4c::tag< ArchitectureView >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureElement()
{
	return e4c::tag< StructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureElement__aggregated()
{
	return e4c::tag< AbstractStructureElement__aggregated_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__implementation()
{
	return e4c::tag< AbstractStructureElement__implementation_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureElement()
{
	return e4c::tag< AbstractStructureElement__structureElement_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureRelationship()
{
	return e4c::tag< AbstractStructureElement__structureRelationship_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureModel__structureElement()
{
	return e4c::tag< StructureModel__structureElement_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__to()
{
	return e4c::tag< StructureRelationship__to_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__from()
{
	return e4c::tag< StructureRelationship__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_structure()
{
	return ::kdm::structure::StructurePackage::_instance();
}
