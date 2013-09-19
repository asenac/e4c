#include "StructurePackage.hpp"
#include "StructureFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::structure;

StructurePackage::StructurePackage()
{
	m_eFactoryInstance = StructureFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const StructurePackage_ptr StructurePackage::_instance()
{
	static StructurePackage __instance;
	return &__instance;
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement() const
{
	return e4c::tag< AbstractStructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_Subsystem() const
{
	return e4c::tag< Subsystem >::get();
}
 
e4c::tag_t StructurePackage::getTag_Layer() const
{
	return e4c::tag< Layer >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureModel() const
{
	return e4c::tag< StructureModel >::get();
}
 
e4c::tag_t StructurePackage::getTag_Component() const
{
	return e4c::tag< Component >::get();
}
 
e4c::tag_t StructurePackage::getTag_SoftwareSystem() const
{
	return e4c::tag< SoftwareSystem >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureRelationship() const
{
	return e4c::tag< AbstractStructureRelationship >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureRelationship() const
{
	return e4c::tag< StructureRelationship >::get();
}
 
e4c::tag_t StructurePackage::getTag_ArchitectureView() const
{
	return e4c::tag< ArchitectureView >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureElement() const
{
	return e4c::tag< StructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureElement__aggregated() const
{
	return e4c::tag< AbstractStructureElement__aggregated_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__implementation() const
{
	return e4c::tag< AbstractStructureElement__implementation_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureElement() const
{
	return e4c::tag< AbstractStructureElement__structureElement_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureRelationship() const
{
	return e4c::tag< AbstractStructureElement__structureRelationship_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureModel__structureElement() const
{
	return e4c::tag< StructureModel__structureElement_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__to() const
{
	return e4c::tag< StructureRelationship__to_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__from() const
{
	return e4c::tag< StructureRelationship__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_structure()
{
	return ::kdm::structure::StructurePackage::_instance();
}
