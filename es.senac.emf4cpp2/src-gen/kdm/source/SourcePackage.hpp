#ifndef EMF_CPP_KDM_SOURCE_PACKAGE_HPP
#define EMF_CPP_KDM_SOURCE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/source/fwd.hpp>

namespace kdm
{
namespace source
{


class SourcePackage : public ::ecore::EPackage
{
public:
    static SourcePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_SourceRef();
 	e4c::tag_t getTag_SourceRegion();
 	e4c::tag_t getTag_InventoryModel();
 	e4c::tag_t getTag_AbstractInventoryElement();
 	e4c::tag_t getTag_InventoryItem();
 	e4c::tag_t getTag_SourceFile();
 	e4c::tag_t getTag_Image();
 	e4c::tag_t getTag_ResourceDescription();
 	e4c::tag_t getTag_Configuration();
 	e4c::tag_t getTag_InventoryContainer();
 	e4c::tag_t getTag_Directory();
 	e4c::tag_t getTag_Project();
 	e4c::tag_t getTag_AbstractInventoryRelationship();
 	e4c::tag_t getTag_BinaryFile();
 	e4c::tag_t getTag_ExecutableFile();
 	e4c::tag_t getTag_DependsOn();
 	e4c::tag_t getTag_InventoryElement();
 	e4c::tag_t getTag_InventoryRelationship();
 
 	// Structural features
 	e4c::tag_t getTag_SourceRef__region();
 	e4c::tag_t getTag_SourceRef__language();
 	e4c::tag_t getTag_SourceRef__snippet();
 	e4c::tag_t getTag_SourceRegion__file();
 	e4c::tag_t getTag_SourceRegion__startLine();
 	e4c::tag_t getTag_SourceRegion__startPosition();
 	e4c::tag_t getTag_SourceRegion__endLine();
 	e4c::tag_t getTag_SourceRegion__endPosition();
 	e4c::tag_t getTag_SourceRegion__language();
 	e4c::tag_t getTag_SourceRegion__path();
 	e4c::tag_t getTag_InventoryModel__inventoryElement();
 	e4c::tag_t getTag_AbstractInventoryElement__inventoryRelation();
 	e4c::tag_t getTag_InventoryItem__version();
 	e4c::tag_t getTag_InventoryItem__path();
 	e4c::tag_t getTag_SourceFile__language();
 	e4c::tag_t getTag_SourceFile__encoding();
 	e4c::tag_t getTag_InventoryContainer__inventoryElement();
 	e4c::tag_t getTag_Directory__path();
 	e4c::tag_t getTag_DependsOn__to();
 	e4c::tag_t getTag_DependsOn__from();
 	e4c::tag_t getTag_InventoryRelationship__to();
 	e4c::tag_t getTag_InventoryRelationship__from();

protected:
    SourcePackage();
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_PACKAGE_HPP
