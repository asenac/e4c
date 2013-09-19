#include "SourceFactory.hpp"
#include "SourcePackage.hpp"
#include "include.hpp"

using namespace kdm::source;

SourceFactory::SourceFactory()
{
	m_ePackage = SourcePackage::_instance();
	// std::bind(&SourceFactory::createSourceRef, this);
	// m_ePackage->getTag_SourceRef();
	// std::bind(&SourceFactory::createSourceRegion, this);
	// m_ePackage->getTag_SourceRegion();
	// std::bind(&SourceFactory::createInventoryModel, this);
	// m_ePackage->getTag_InventoryModel();
	// std::bind(&SourceFactory::createInventoryItem, this);
	// m_ePackage->getTag_InventoryItem();
	// std::bind(&SourceFactory::createSourceFile, this);
	// m_ePackage->getTag_SourceFile();
	// std::bind(&SourceFactory::createImage, this);
	// m_ePackage->getTag_Image();
	// std::bind(&SourceFactory::createResourceDescription, this);
	// m_ePackage->getTag_ResourceDescription();
	// std::bind(&SourceFactory::createConfiguration, this);
	// m_ePackage->getTag_Configuration();
	// std::bind(&SourceFactory::createInventoryContainer, this);
	// m_ePackage->getTag_InventoryContainer();
	// std::bind(&SourceFactory::createDirectory, this);
	// m_ePackage->getTag_Directory();
	// std::bind(&SourceFactory::createProject, this);
	// m_ePackage->getTag_Project();
	// std::bind(&SourceFactory::createBinaryFile, this);
	// m_ePackage->getTag_BinaryFile();
	// std::bind(&SourceFactory::createExecutableFile, this);
	// m_ePackage->getTag_ExecutableFile();
	// std::bind(&SourceFactory::createDependsOn, this);
	// m_ePackage->getTag_DependsOn();
	// std::bind(&SourceFactory::createInventoryElement, this);
	// m_ePackage->getTag_InventoryElement();
	// std::bind(&SourceFactory::createInventoryRelationship, this);
	// m_ePackage->getTag_InventoryRelationship();
}

const SourceFactory_ptr SourceFactory::_instance()
{
	static SourceFactory __instance;
	return &__instance;
}

SourceRef_ptr SourceFactory::createSourceRef() const
{
	return new SourceRef();
}

SourceRegion_ptr SourceFactory::createSourceRegion() const
{
	return new SourceRegion();
}

InventoryModel_ptr SourceFactory::createInventoryModel() const
{
	return new InventoryModel();
}

InventoryItem_ptr SourceFactory::createInventoryItem() const
{
	return new InventoryItem();
}

SourceFile_ptr SourceFactory::createSourceFile() const
{
	return new SourceFile();
}

Image_ptr SourceFactory::createImage() const
{
	return new Image();
}

ResourceDescription_ptr SourceFactory::createResourceDescription() const
{
	return new ResourceDescription();
}

Configuration_ptr SourceFactory::createConfiguration() const
{
	return new Configuration();
}

InventoryContainer_ptr SourceFactory::createInventoryContainer() const
{
	return new InventoryContainer();
}

Directory_ptr SourceFactory::createDirectory() const
{
	return new Directory();
}

Project_ptr SourceFactory::createProject() const
{
	return new Project();
}

BinaryFile_ptr SourceFactory::createBinaryFile() const
{
	return new BinaryFile();
}

ExecutableFile_ptr SourceFactory::createExecutableFile() const
{
	return new ExecutableFile();
}

DependsOn_ptr SourceFactory::createDependsOn() const
{
	return new DependsOn();
}

InventoryElement_ptr SourceFactory::createInventoryElement() const
{
	return new InventoryElement();
}

InventoryRelationship_ptr SourceFactory::createInventoryRelationship() const
{
	return new InventoryRelationship();
}

