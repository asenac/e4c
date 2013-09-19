#ifndef EMF_CPP_KDM_SOURCE_PACKAGE_HPP
#define EMF_CPP_KDM_SOURCE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/source/fwd.hpp>

namespace kdm
{
namespace source
{


class SourcePackage : public ::ecore::EPackage
{
public:
    static const SourcePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_SourceRef() const;
 	e4c::tag_t getTag_SourceRegion() const;
 	e4c::tag_t getTag_InventoryModel() const;
 	e4c::tag_t getTag_AbstractInventoryElement() const;
 	e4c::tag_t getTag_InventoryItem() const;
 	e4c::tag_t getTag_SourceFile() const;
 	e4c::tag_t getTag_Image() const;
 	e4c::tag_t getTag_ResourceDescription() const;
 	e4c::tag_t getTag_Configuration() const;
 	e4c::tag_t getTag_InventoryContainer() const;
 	e4c::tag_t getTag_Directory() const;
 	e4c::tag_t getTag_Project() const;
 	e4c::tag_t getTag_AbstractInventoryRelationship() const;
 	e4c::tag_t getTag_BinaryFile() const;
 	e4c::tag_t getTag_ExecutableFile() const;
 	e4c::tag_t getTag_DependsOn() const;
 	e4c::tag_t getTag_InventoryElement() const;
 	e4c::tag_t getTag_InventoryRelationship() const;
 
 	// Structural features
 	e4c::tag_t getTag_SourceRef__region() const;
 	e4c::tag_t getTag_SourceRef__language() const;
 	e4c::tag_t getTag_SourceRef__snippet() const;
 	e4c::tag_t getTag_SourceRegion__file() const;
 	e4c::tag_t getTag_SourceRegion__startLine() const;
 	e4c::tag_t getTag_SourceRegion__startPosition() const;
 	e4c::tag_t getTag_SourceRegion__endLine() const;
 	e4c::tag_t getTag_SourceRegion__endPosition() const;
 	e4c::tag_t getTag_SourceRegion__language() const;
 	e4c::tag_t getTag_SourceRegion__path() const;
 	e4c::tag_t getTag_InventoryModel__inventoryElement() const;
 	e4c::tag_t getTag_AbstractInventoryElement__inventoryRelation() const;
 	e4c::tag_t getTag_InventoryItem__version() const;
 	e4c::tag_t getTag_InventoryItem__path() const;
 	e4c::tag_t getTag_SourceFile__language() const;
 	e4c::tag_t getTag_SourceFile__encoding() const;
 	e4c::tag_t getTag_InventoryContainer__inventoryElement() const;
 	e4c::tag_t getTag_Directory__path() const;
 	e4c::tag_t getTag_DependsOn__to() const;
 	e4c::tag_t getTag_DependsOn__from() const;
 	e4c::tag_t getTag_InventoryRelationship__to() const;
 	e4c::tag_t getTag_InventoryRelationship__from() const;

protected:
    SourcePackage();
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_PACKAGE_HPP
