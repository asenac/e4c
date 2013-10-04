#ifndef EMF_CPP_KDM_SOURCE_PACKAGE_HPP
#define EMF_CPP_KDM_SOURCE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/source/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace source
{


class SourcePackage : public ::ecore::EPackage
{
public:
    static const SourcePackage_ptr _instance();

 	::ecore::EClass_ptr getSourceRef() const;
 	::ecore::EClass_ptr getSourceRegion() const;
 	::ecore::EClass_ptr getInventoryModel() const;
 	::ecore::EClass_ptr getAbstractInventoryElement() const;
 	::ecore::EClass_ptr getInventoryItem() const;
 	::ecore::EClass_ptr getSourceFile() const;
 	::ecore::EClass_ptr getImage() const;
 	::ecore::EClass_ptr getResourceDescription() const;
 	::ecore::EClass_ptr getConfiguration() const;
 	::ecore::EClass_ptr getInventoryContainer() const;
 	::ecore::EClass_ptr getDirectory() const;
 	::ecore::EClass_ptr getProject() const;
 	::ecore::EClass_ptr getAbstractInventoryRelationship() const;
 	::ecore::EClass_ptr getBinaryFile() const;
 	::ecore::EClass_ptr getExecutableFile() const;
 	::ecore::EClass_ptr getDependsOn() const;
 	::ecore::EClass_ptr getInventoryElement() const;
 	::ecore::EClass_ptr getInventoryRelationship() const;
 	
 	::ecore::EReference_ptr getSourceRef__region() const;
 	::ecore::EAttribute_ptr getSourceRef__language() const;
 	::ecore::EAttribute_ptr getSourceRef__snippet() const;
 	::ecore::EReference_ptr getSourceRegion__file() const;
 	::ecore::EAttribute_ptr getSourceRegion__startLine() const;
 	::ecore::EAttribute_ptr getSourceRegion__startPosition() const;
 	::ecore::EAttribute_ptr getSourceRegion__endLine() const;
 	::ecore::EAttribute_ptr getSourceRegion__endPosition() const;
 	::ecore::EAttribute_ptr getSourceRegion__language() const;
 	::ecore::EAttribute_ptr getSourceRegion__path() const;
 	::ecore::EReference_ptr getInventoryModel__inventoryElement() const;
 	::ecore::EReference_ptr getAbstractInventoryElement__inventoryRelation() const;
 	::ecore::EAttribute_ptr getInventoryItem__version() const;
 	::ecore::EAttribute_ptr getInventoryItem__path() const;
 	::ecore::EAttribute_ptr getSourceFile__language() const;
 	::ecore::EAttribute_ptr getSourceFile__encoding() const;
 	::ecore::EReference_ptr getInventoryContainer__inventoryElement() const;
 	::ecore::EAttribute_ptr getDirectory__path() const;
 	::ecore::EReference_ptr getDependsOn__to() const;
 	::ecore::EReference_ptr getDependsOn__from() const;
 	::ecore::EReference_ptr getInventoryRelationship__to() const;
 	::ecore::EReference_ptr getInventoryRelationship__from() const;

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
    
 	::ecore::EClass_ptr m_SourceRef;
 	::ecore::EClass_ptr m_SourceRegion;
 	::ecore::EClass_ptr m_InventoryModel;
 	::ecore::EClass_ptr m_AbstractInventoryElement;
 	::ecore::EClass_ptr m_InventoryItem;
 	::ecore::EClass_ptr m_SourceFile;
 	::ecore::EClass_ptr m_Image;
 	::ecore::EClass_ptr m_ResourceDescription;
 	::ecore::EClass_ptr m_Configuration;
 	::ecore::EClass_ptr m_InventoryContainer;
 	::ecore::EClass_ptr m_Directory;
 	::ecore::EClass_ptr m_Project;
 	::ecore::EClass_ptr m_AbstractInventoryRelationship;
 	::ecore::EClass_ptr m_BinaryFile;
 	::ecore::EClass_ptr m_ExecutableFile;
 	::ecore::EClass_ptr m_DependsOn;
 	::ecore::EClass_ptr m_InventoryElement;
 	::ecore::EClass_ptr m_InventoryRelationship;
 	::ecore::EReference_ptr m_SourceRef__region;
 	::ecore::EAttribute_ptr m_SourceRef__language;
 	::ecore::EAttribute_ptr m_SourceRef__snippet;
 	::ecore::EReference_ptr m_SourceRegion__file;
 	::ecore::EAttribute_ptr m_SourceRegion__startLine;
 	::ecore::EAttribute_ptr m_SourceRegion__startPosition;
 	::ecore::EAttribute_ptr m_SourceRegion__endLine;
 	::ecore::EAttribute_ptr m_SourceRegion__endPosition;
 	::ecore::EAttribute_ptr m_SourceRegion__language;
 	::ecore::EAttribute_ptr m_SourceRegion__path;
 	::ecore::EReference_ptr m_InventoryModel__inventoryElement;
 	::ecore::EReference_ptr m_AbstractInventoryElement__inventoryRelation;
 	::ecore::EAttribute_ptr m_InventoryItem__version;
 	::ecore::EAttribute_ptr m_InventoryItem__path;
 	::ecore::EAttribute_ptr m_SourceFile__language;
 	::ecore::EAttribute_ptr m_SourceFile__encoding;
 	::ecore::EReference_ptr m_InventoryContainer__inventoryElement;
 	::ecore::EAttribute_ptr m_Directory__path;
 	::ecore::EReference_ptr m_DependsOn__to;
 	::ecore::EReference_ptr m_DependsOn__from;
 	::ecore::EReference_ptr m_InventoryRelationship__to;
 	::ecore::EReference_ptr m_InventoryRelationship__from;
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_PACKAGE_HPP
