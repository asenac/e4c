#ifndef EMF_CPP_KDM_SOURCE_FWD_HPP
#define EMF_CPP_KDM_SOURCE_FWD_HPP


namespace kdm
{
namespace source
{


class SourcePackage;
typedef SourcePackage * SourcePackage_ptr;
class SourceFactory;
typedef SourceFactory * SourceFactory_ptr;

// Data types


// Classes
class SourceRef;
typedef SourceRef* SourceRef_ptr;
class SourceRegion;
typedef SourceRegion* SourceRegion_ptr;
class InventoryModel;
typedef InventoryModel* InventoryModel_ptr;
class AbstractInventoryElement;
typedef AbstractInventoryElement* AbstractInventoryElement_ptr;
class InventoryItem;
typedef InventoryItem* InventoryItem_ptr;
class SourceFile;
typedef SourceFile* SourceFile_ptr;
class Image;
typedef Image* Image_ptr;
class ResourceDescription;
typedef ResourceDescription* ResourceDescription_ptr;
class Configuration;
typedef Configuration* Configuration_ptr;
class InventoryContainer;
typedef InventoryContainer* InventoryContainer_ptr;
class Directory;
typedef Directory* Directory_ptr;
class Project;
typedef Project* Project_ptr;
class AbstractInventoryRelationship;
typedef AbstractInventoryRelationship* AbstractInventoryRelationship_ptr;
class BinaryFile;
typedef BinaryFile* BinaryFile_ptr;
class ExecutableFile;
typedef ExecutableFile* ExecutableFile_ptr;
class DependsOn;
typedef DependsOn* DependsOn_ptr;
class InventoryElement;
typedef InventoryElement* InventoryElement_ptr;
class InventoryRelationship;
typedef InventoryRelationship* InventoryRelationship_ptr;


// Structural features
struct SourceRef__region_tag;
struct SourceRef__language_tag;
struct SourceRef__snippet_tag;
struct SourceRegion__file_tag;
struct SourceRegion__startLine_tag;
struct SourceRegion__startPosition_tag;
struct SourceRegion__endLine_tag;
struct SourceRegion__endPosition_tag;
struct SourceRegion__language_tag;
struct SourceRegion__path_tag;
struct InventoryModel__inventoryElement_tag;
struct AbstractInventoryElement__inventoryRelation_tag;
struct InventoryItem__version_tag;
struct InventoryItem__path_tag;
struct SourceFile__language_tag;
struct SourceFile__encoding_tag;
struct InventoryContainer__inventoryElement_tag;
struct Directory__path_tag;
struct DependsOn__to_tag;
struct DependsOn__from_tag;
struct InventoryRelationship__to_tag;
struct InventoryRelationship__from_tag;


} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_FWD_HPP
