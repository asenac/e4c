#include "SourcePackage.hpp"
#include "SourceFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::source;

SourcePackage::SourcePackage()
{
	m_eFactoryInstance = SourceFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr SourceRef_ = ecoreFactory->createEClass();
	SourceRef_->setName("SourceRef");
	// m_eClassifiers.push_back(SourceRef_);
	::ecore::EClass_ptr SourceRegion_ = ecoreFactory->createEClass();
	SourceRegion_->setName("SourceRegion");
	// m_eClassifiers.push_back(SourceRegion_);
	::ecore::EClass_ptr InventoryModel_ = ecoreFactory->createEClass();
	InventoryModel_->setName("InventoryModel");
	// m_eClassifiers.push_back(InventoryModel_);
	::ecore::EClass_ptr AbstractInventoryElement_ = ecoreFactory->createEClass();
	AbstractInventoryElement_->setName("AbstractInventoryElement");
	// m_eClassifiers.push_back(AbstractInventoryElement_);
	::ecore::EClass_ptr InventoryItem_ = ecoreFactory->createEClass();
	InventoryItem_->setName("InventoryItem");
	// m_eClassifiers.push_back(InventoryItem_);
	::ecore::EClass_ptr SourceFile_ = ecoreFactory->createEClass();
	SourceFile_->setName("SourceFile");
	// m_eClassifiers.push_back(SourceFile_);
	::ecore::EClass_ptr Image_ = ecoreFactory->createEClass();
	Image_->setName("Image");
	// m_eClassifiers.push_back(Image_);
	::ecore::EClass_ptr ResourceDescription_ = ecoreFactory->createEClass();
	ResourceDescription_->setName("ResourceDescription");
	// m_eClassifiers.push_back(ResourceDescription_);
	::ecore::EClass_ptr Configuration_ = ecoreFactory->createEClass();
	Configuration_->setName("Configuration");
	// m_eClassifiers.push_back(Configuration_);
	::ecore::EClass_ptr InventoryContainer_ = ecoreFactory->createEClass();
	InventoryContainer_->setName("InventoryContainer");
	// m_eClassifiers.push_back(InventoryContainer_);
	::ecore::EClass_ptr Directory_ = ecoreFactory->createEClass();
	Directory_->setName("Directory");
	// m_eClassifiers.push_back(Directory_);
	::ecore::EClass_ptr Project_ = ecoreFactory->createEClass();
	Project_->setName("Project");
	// m_eClassifiers.push_back(Project_);
	::ecore::EClass_ptr AbstractInventoryRelationship_ = ecoreFactory->createEClass();
	AbstractInventoryRelationship_->setName("AbstractInventoryRelationship");
	// m_eClassifiers.push_back(AbstractInventoryRelationship_);
	::ecore::EClass_ptr BinaryFile_ = ecoreFactory->createEClass();
	BinaryFile_->setName("BinaryFile");
	// m_eClassifiers.push_back(BinaryFile_);
	::ecore::EClass_ptr ExecutableFile_ = ecoreFactory->createEClass();
	ExecutableFile_->setName("ExecutableFile");
	// m_eClassifiers.push_back(ExecutableFile_);
	::ecore::EClass_ptr DependsOn_ = ecoreFactory->createEClass();
	DependsOn_->setName("DependsOn");
	// m_eClassifiers.push_back(DependsOn_);
	::ecore::EClass_ptr InventoryElement_ = ecoreFactory->createEClass();
	InventoryElement_->setName("InventoryElement");
	// m_eClassifiers.push_back(InventoryElement_);
	::ecore::EClass_ptr InventoryRelationship_ = ecoreFactory->createEClass();
	InventoryRelationship_->setName("InventoryRelationship");
	// m_eClassifiers.push_back(InventoryRelationship_);
	
	
	// SourceRef_->addESuperType(Element_);
	// SourceRegion_->addESuperType(Element_);
	// InventoryModel_->addESuperType(KDMModel_);
	// AbstractInventoryElement_->addESuperType(KDMEntity_);
	// InventoryItem_->addESuperType(AbstractInventoryElement_);
	// SourceFile_->addESuperType(InventoryItem_);
	// Image_->addESuperType(InventoryItem_);
	// ResourceDescription_->addESuperType(InventoryItem_);
	// Configuration_->addESuperType(InventoryItem_);
	// InventoryContainer_->addESuperType(AbstractInventoryElement_);
	// Directory_->addESuperType(InventoryContainer_);
	// Project_->addESuperType(InventoryContainer_);
	// AbstractInventoryRelationship_->addESuperType(KDMRelationship_);
	// BinaryFile_->addESuperType(InventoryItem_);
	// ExecutableFile_->addESuperType(InventoryItem_);
	// DependsOn_->addESuperType(AbstractInventoryRelationship_);
	// InventoryElement_->addESuperType(AbstractInventoryElement_);
	// InventoryRelationship_->addESuperType(AbstractInventoryRelationship_);
	
	
	
	
}

const SourcePackage_ptr SourcePackage::_instance()
{
	static SourcePackage __instance;
	return &__instance;
}

e4c::tag_t SourcePackage::getTag_SourceRef() const
{
	return e4c::tag< SourceRef >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceRegion() const
{
	return e4c::tag< SourceRegion >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryModel() const
{
	return e4c::tag< InventoryModel >::get();
}
 
e4c::tag_t SourcePackage::getTag_AbstractInventoryElement() const
{
	return e4c::tag< AbstractInventoryElement >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryItem() const
{
	return e4c::tag< InventoryItem >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceFile() const
{
	return e4c::tag< SourceFile >::get();
}
 
e4c::tag_t SourcePackage::getTag_Image() const
{
	return e4c::tag< Image >::get();
}
 
e4c::tag_t SourcePackage::getTag_ResourceDescription() const
{
	return e4c::tag< ResourceDescription >::get();
}
 
e4c::tag_t SourcePackage::getTag_Configuration() const
{
	return e4c::tag< Configuration >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryContainer() const
{
	return e4c::tag< InventoryContainer >::get();
}
 
e4c::tag_t SourcePackage::getTag_Directory() const
{
	return e4c::tag< Directory >::get();
}
 
e4c::tag_t SourcePackage::getTag_Project() const
{
	return e4c::tag< Project >::get();
}
 
e4c::tag_t SourcePackage::getTag_AbstractInventoryRelationship() const
{
	return e4c::tag< AbstractInventoryRelationship >::get();
}
 
e4c::tag_t SourcePackage::getTag_BinaryFile() const
{
	return e4c::tag< BinaryFile >::get();
}
 
e4c::tag_t SourcePackage::getTag_ExecutableFile() const
{
	return e4c::tag< ExecutableFile >::get();
}
 
e4c::tag_t SourcePackage::getTag_DependsOn() const
{
	return e4c::tag< DependsOn >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryElement() const
{
	return e4c::tag< InventoryElement >::get();
}
 
e4c::tag_t SourcePackage::getTag_InventoryRelationship() const
{
	return e4c::tag< InventoryRelationship >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceRef__region() const
{
	return e4c::tag< SourceRef__region_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRef__language() const
{
	return e4c::tag< SourceRef__language_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRef__snippet() const
{
	return e4c::tag< SourceRef__snippet_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__file() const
{
	return e4c::tag< SourceRegion__file_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__startLine() const
{
	return e4c::tag< SourceRegion__startLine_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__startPosition() const
{
	return e4c::tag< SourceRegion__startPosition_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__endLine() const
{
	return e4c::tag< SourceRegion__endLine_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__endPosition() const
{
	return e4c::tag< SourceRegion__endPosition_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__language() const
{
	return e4c::tag< SourceRegion__language_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceRegion__path() const
{
	return e4c::tag< SourceRegion__path_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryModel__inventoryElement() const
{
	return e4c::tag< InventoryModel__inventoryElement_tag >::get();
}

e4c::tag_t SourcePackage::getTag_AbstractInventoryElement__inventoryRelation() const
{
	return e4c::tag< AbstractInventoryElement__inventoryRelation_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryItem__version() const
{
	return e4c::tag< InventoryItem__version_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryItem__path() const
{
	return e4c::tag< InventoryItem__path_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceFile__language() const
{
	return e4c::tag< SourceFile__language_tag >::get();
}

e4c::tag_t SourcePackage::getTag_SourceFile__encoding() const
{
	return e4c::tag< SourceFile__encoding_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryContainer__inventoryElement() const
{
	return e4c::tag< InventoryContainer__inventoryElement_tag >::get();
}

e4c::tag_t SourcePackage::getTag_Directory__path() const
{
	return e4c::tag< Directory__path_tag >::get();
}

e4c::tag_t SourcePackage::getTag_DependsOn__to() const
{
	return e4c::tag< DependsOn__to_tag >::get();
}

e4c::tag_t SourcePackage::getTag_DependsOn__from() const
{
	return e4c::tag< DependsOn__from_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryRelationship__to() const
{
	return e4c::tag< InventoryRelationship__to_tag >::get();
}

e4c::tag_t SourcePackage::getTag_InventoryRelationship__from() const
{
	return e4c::tag< InventoryRelationship__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_source()
{
	return ::kdm::source::SourcePackage::_instance();
}
