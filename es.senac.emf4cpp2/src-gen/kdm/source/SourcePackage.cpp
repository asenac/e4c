#include "SourcePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::source;

SourcePackage::SourcePackage()
{
}

SourcePackage_ptr SourcePackage::_instance()
{
	static SourcePackage __instance;
	return &__instance;
}

e4c::tag_t SourcePackage::getTag_SourceRef()
{
	return e4c::tag< SourceRef >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceRegion()
{
	return e4c::tag< SourceRegion >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryModel()
{
	return e4c::tag< InventoryModel >::get();
}
 
e4c::tag_t SourcePackage::getTag_AbstractInventoryElement()
{
	return e4c::tag< AbstractInventoryElement >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryItem()
{
	return e4c::tag< InventoryItem >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceFile()
{
	return e4c::tag< SourceFile >::get();
}
 
e4c::tag_t SourcePackage::getTag_Image()
{
	return e4c::tag< Image >::get();
}
 
e4c::tag_t SourcePackage::getTag_ResourceDescription()
{
	return e4c::tag< ResourceDescription >::get();
}
 
e4c::tag_t SourcePackage::getTag_Configuration()
{
	return e4c::tag< Configuration >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryContainer()
{
	return e4c::tag< InventoryContainer >::get();
}
 
e4c::tag_t SourcePackage::getTag_Directory()
{
	return e4c::tag< Directory >::get();
}
 
e4c::tag_t SourcePackage::getTag_Project()
{
	return e4c::tag< Project >::get();
}
 
e4c::tag_t SourcePackage::getTag_AbstractInventoryRelationship()
{
	return e4c::tag< AbstractInventoryRelationship >::get();
}
 
e4c::tag_t SourcePackage::getTag_BinaryFile()
{
	return e4c::tag< BinaryFile >::get();
}
 
e4c::tag_t SourcePackage::getTag_ExecutableFile()
{
	return e4c::tag< ExecutableFile >::get();
}
 
e4c::tag_t SourcePackage::getTag_DependsOn()
{
	return e4c::tag< DependsOn >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryElement()
{
	return e4c::tag< InventoryElement >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryRelationship()
{
	return e4c::tag< InventoryRelationship >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceRef__region()
{
	return e4c::tag< SourceRef__region_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRef__language()
{
	return e4c::tag< SourceRef__language_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRef__snippet()
{
	return e4c::tag< SourceRef__snippet_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__file()
{
	return e4c::tag< SourceRegion__file_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__startLine()
{
	return e4c::tag< SourceRegion__startLine_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__startPosition()
{
	return e4c::tag< SourceRegion__startPosition_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__endLine()
{
	return e4c::tag< SourceRegion__endLine_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__endPosition()
{
	return e4c::tag< SourceRegion__endPosition_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__language()
{
	return e4c::tag< SourceRegion__language_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__path()
{
	return e4c::tag< SourceRegion__path_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryModel__inventoryElement()
{
	return e4c::tag< InventoryModel__inventoryElement_tag >::get();
}

e4c::tag_t SourcePackage::getTag_AbstractInventoryElement__inventoryRelation()
{
	return e4c::tag< AbstractInventoryElement__inventoryRelation_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryItem__version()
{
	return e4c::tag< InventoryItem__version_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryItem__path()
{
	return e4c::tag< InventoryItem__path_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceFile__language()
{
	return e4c::tag< SourceFile__language_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceFile__encoding()
{
	return e4c::tag< SourceFile__encoding_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryContainer__inventoryElement()
{
	return e4c::tag< InventoryContainer__inventoryElement_tag >::get();
}

e4c::tag_t SourcePackage::getTag_Directory__path()
{
	return e4c::tag< Directory__path_tag >::get();
}

e4c::tag_t SourcePackage::getTag_DependsOn__to()
{
	return e4c::tag< DependsOn__to_tag >::get();
}

e4c::tag_t SourcePackage::getTag_DependsOn__from()
{
	return e4c::tag< DependsOn__from_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryRelationship__to()
{
	return e4c::tag< InventoryRelationship__to_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryRelationship__from()
{
	return e4c::tag< InventoryRelationship__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_source()
{
	return ::kdm::source::SourcePackage::_instance();
}
