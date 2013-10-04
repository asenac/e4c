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
	
	
	
	m_SourceRef = ecoreFactory->createEClass();
	m_SourceRef->setName("SourceRef");
	addEClassifiers(m_SourceRef);
	m_SourceRegion = ecoreFactory->createEClass();
	m_SourceRegion->setName("SourceRegion");
	addEClassifiers(m_SourceRegion);
	m_InventoryModel = ecoreFactory->createEClass();
	m_InventoryModel->setName("InventoryModel");
	addEClassifiers(m_InventoryModel);
	m_AbstractInventoryElement = ecoreFactory->createEClass();
	m_AbstractInventoryElement->setName("AbstractInventoryElement");
	addEClassifiers(m_AbstractInventoryElement);
	m_InventoryItem = ecoreFactory->createEClass();
	m_InventoryItem->setName("InventoryItem");
	addEClassifiers(m_InventoryItem);
	m_SourceFile = ecoreFactory->createEClass();
	m_SourceFile->setName("SourceFile");
	addEClassifiers(m_SourceFile);
	m_Image = ecoreFactory->createEClass();
	m_Image->setName("Image");
	addEClassifiers(m_Image);
	m_ResourceDescription = ecoreFactory->createEClass();
	m_ResourceDescription->setName("ResourceDescription");
	addEClassifiers(m_ResourceDescription);
	m_Configuration = ecoreFactory->createEClass();
	m_Configuration->setName("Configuration");
	addEClassifiers(m_Configuration);
	m_InventoryContainer = ecoreFactory->createEClass();
	m_InventoryContainer->setName("InventoryContainer");
	addEClassifiers(m_InventoryContainer);
	m_Directory = ecoreFactory->createEClass();
	m_Directory->setName("Directory");
	addEClassifiers(m_Directory);
	m_Project = ecoreFactory->createEClass();
	m_Project->setName("Project");
	addEClassifiers(m_Project);
	m_AbstractInventoryRelationship = ecoreFactory->createEClass();
	m_AbstractInventoryRelationship->setName("AbstractInventoryRelationship");
	addEClassifiers(m_AbstractInventoryRelationship);
	m_BinaryFile = ecoreFactory->createEClass();
	m_BinaryFile->setName("BinaryFile");
	addEClassifiers(m_BinaryFile);
	m_ExecutableFile = ecoreFactory->createEClass();
	m_ExecutableFile->setName("ExecutableFile");
	addEClassifiers(m_ExecutableFile);
	m_DependsOn = ecoreFactory->createEClass();
	m_DependsOn->setName("DependsOn");
	addEClassifiers(m_DependsOn);
	m_InventoryElement = ecoreFactory->createEClass();
	m_InventoryElement->setName("InventoryElement");
	addEClassifiers(m_InventoryElement);
	m_InventoryRelationship = ecoreFactory->createEClass();
	m_InventoryRelationship->setName("InventoryRelationship");
	addEClassifiers(m_InventoryRelationship);

	
    {
        m_SourceRef__region = ecoreFactory->createEReference();
        m_SourceRef__region->setName("region");
        m_SourceRef->addEStructuralFeatures(m_SourceRef__region);
        m_SourceRef->addEAllStructuralFeatures(m_SourceRef__region);
        m_SourceRef->addEReferences(m_SourceRef__region);
        m_SourceRef->addEAllReferences(m_SourceRef__region);
    }
    {
        m_SourceRef__language = ecoreFactory->createEAttribute();
        m_SourceRef__language->setName("language");
        m_SourceRef->addEStructuralFeatures(m_SourceRef__language);
        m_SourceRef->addEAllStructuralFeatures(m_SourceRef__language);
        m_SourceRef->addEAttributes(m_SourceRef__language);
        m_SourceRef->addEAllAttributes(m_SourceRef__language);
    }
    {
        m_SourceRef__snippet = ecoreFactory->createEAttribute();
        m_SourceRef__snippet->setName("snippet");
        m_SourceRef->addEStructuralFeatures(m_SourceRef__snippet);
        m_SourceRef->addEAllStructuralFeatures(m_SourceRef__snippet);
        m_SourceRef->addEAttributes(m_SourceRef__snippet);
        m_SourceRef->addEAllAttributes(m_SourceRef__snippet);
    }
    {
        m_SourceRegion__file = ecoreFactory->createEReference();
        m_SourceRegion__file->setName("file");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__file);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__file);
        m_SourceRegion->addEReferences(m_SourceRegion__file);
        m_SourceRegion->addEAllReferences(m_SourceRegion__file);
    }
    {
        m_SourceRegion__startLine = ecoreFactory->createEAttribute();
        m_SourceRegion__startLine->setName("startLine");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__startLine);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__startLine);
        m_SourceRegion->addEAttributes(m_SourceRegion__startLine);
        m_SourceRegion->addEAllAttributes(m_SourceRegion__startLine);
    }
    {
        m_SourceRegion__startPosition = ecoreFactory->createEAttribute();
        m_SourceRegion__startPosition->setName("startPosition");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__startPosition);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__startPosition);
        m_SourceRegion->addEAttributes(m_SourceRegion__startPosition);
        m_SourceRegion->addEAllAttributes(m_SourceRegion__startPosition);
    }
    {
        m_SourceRegion__endLine = ecoreFactory->createEAttribute();
        m_SourceRegion__endLine->setName("endLine");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__endLine);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__endLine);
        m_SourceRegion->addEAttributes(m_SourceRegion__endLine);
        m_SourceRegion->addEAllAttributes(m_SourceRegion__endLine);
    }
    {
        m_SourceRegion__endPosition = ecoreFactory->createEAttribute();
        m_SourceRegion__endPosition->setName("endPosition");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__endPosition);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__endPosition);
        m_SourceRegion->addEAttributes(m_SourceRegion__endPosition);
        m_SourceRegion->addEAllAttributes(m_SourceRegion__endPosition);
    }
    {
        m_SourceRegion__language = ecoreFactory->createEAttribute();
        m_SourceRegion__language->setName("language");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__language);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__language);
        m_SourceRegion->addEAttributes(m_SourceRegion__language);
        m_SourceRegion->addEAllAttributes(m_SourceRegion__language);
    }
    {
        m_SourceRegion__path = ecoreFactory->createEAttribute();
        m_SourceRegion__path->setName("path");
        m_SourceRegion->addEStructuralFeatures(m_SourceRegion__path);
        m_SourceRegion->addEAllStructuralFeatures(m_SourceRegion__path);
        m_SourceRegion->addEAttributes(m_SourceRegion__path);
        m_SourceRegion->addEAllAttributes(m_SourceRegion__path);
    }
    {
        m_InventoryModel__inventoryElement = ecoreFactory->createEReference();
        m_InventoryModel__inventoryElement->setName("inventoryElement");
        m_InventoryModel->addEStructuralFeatures(m_InventoryModel__inventoryElement);
        m_InventoryModel->addEAllStructuralFeatures(m_InventoryModel__inventoryElement);
        m_InventoryModel->addEReferences(m_InventoryModel__inventoryElement);
        m_InventoryModel->addEAllReferences(m_InventoryModel__inventoryElement);
    }
    {
        m_AbstractInventoryElement__inventoryRelation = ecoreFactory->createEReference();
        m_AbstractInventoryElement__inventoryRelation->setName("inventoryRelation");
        m_AbstractInventoryElement->addEStructuralFeatures(m_AbstractInventoryElement__inventoryRelation);
        m_AbstractInventoryElement->addEAllStructuralFeatures(m_AbstractInventoryElement__inventoryRelation);
        m_AbstractInventoryElement->addEReferences(m_AbstractInventoryElement__inventoryRelation);
        m_AbstractInventoryElement->addEAllReferences(m_AbstractInventoryElement__inventoryRelation);
    }
    {
        m_InventoryItem__version = ecoreFactory->createEAttribute();
        m_InventoryItem__version->setName("version");
        m_InventoryItem->addEStructuralFeatures(m_InventoryItem__version);
        m_InventoryItem->addEAllStructuralFeatures(m_InventoryItem__version);
        m_InventoryItem->addEAttributes(m_InventoryItem__version);
        m_InventoryItem->addEAllAttributes(m_InventoryItem__version);
    }
    {
        m_InventoryItem__path = ecoreFactory->createEAttribute();
        m_InventoryItem__path->setName("path");
        m_InventoryItem->addEStructuralFeatures(m_InventoryItem__path);
        m_InventoryItem->addEAllStructuralFeatures(m_InventoryItem__path);
        m_InventoryItem->addEAttributes(m_InventoryItem__path);
        m_InventoryItem->addEAllAttributes(m_InventoryItem__path);
    }
    {
        m_SourceFile__language = ecoreFactory->createEAttribute();
        m_SourceFile__language->setName("language");
        m_SourceFile->addEStructuralFeatures(m_SourceFile__language);
        m_SourceFile->addEAllStructuralFeatures(m_SourceFile__language);
        m_SourceFile->addEAttributes(m_SourceFile__language);
        m_SourceFile->addEAllAttributes(m_SourceFile__language);
    }
    {
        m_SourceFile__encoding = ecoreFactory->createEAttribute();
        m_SourceFile__encoding->setName("encoding");
        m_SourceFile->addEStructuralFeatures(m_SourceFile__encoding);
        m_SourceFile->addEAllStructuralFeatures(m_SourceFile__encoding);
        m_SourceFile->addEAttributes(m_SourceFile__encoding);
        m_SourceFile->addEAllAttributes(m_SourceFile__encoding);
    }
    {
        m_InventoryContainer__inventoryElement = ecoreFactory->createEReference();
        m_InventoryContainer__inventoryElement->setName("inventoryElement");
        m_InventoryContainer->addEStructuralFeatures(m_InventoryContainer__inventoryElement);
        m_InventoryContainer->addEAllStructuralFeatures(m_InventoryContainer__inventoryElement);
        m_InventoryContainer->addEReferences(m_InventoryContainer__inventoryElement);
        m_InventoryContainer->addEAllReferences(m_InventoryContainer__inventoryElement);
    }
    {
        m_Directory__path = ecoreFactory->createEAttribute();
        m_Directory__path->setName("path");
        m_Directory->addEStructuralFeatures(m_Directory__path);
        m_Directory->addEAllStructuralFeatures(m_Directory__path);
        m_Directory->addEAttributes(m_Directory__path);
        m_Directory->addEAllAttributes(m_Directory__path);
    }
    {
        m_DependsOn__to = ecoreFactory->createEReference();
        m_DependsOn__to->setName("to");
        m_DependsOn->addEStructuralFeatures(m_DependsOn__to);
        m_DependsOn->addEAllStructuralFeatures(m_DependsOn__to);
        m_DependsOn->addEReferences(m_DependsOn__to);
        m_DependsOn->addEAllReferences(m_DependsOn__to);
    }
    {
        m_DependsOn__from = ecoreFactory->createEReference();
        m_DependsOn__from->setName("from");
        m_DependsOn->addEStructuralFeatures(m_DependsOn__from);
        m_DependsOn->addEAllStructuralFeatures(m_DependsOn__from);
        m_DependsOn->addEReferences(m_DependsOn__from);
        m_DependsOn->addEAllReferences(m_DependsOn__from);
    }
    {
        m_InventoryRelationship__to = ecoreFactory->createEReference();
        m_InventoryRelationship__to->setName("to");
        m_InventoryRelationship->addEStructuralFeatures(m_InventoryRelationship__to);
        m_InventoryRelationship->addEAllStructuralFeatures(m_InventoryRelationship__to);
        m_InventoryRelationship->addEReferences(m_InventoryRelationship__to);
        m_InventoryRelationship->addEAllReferences(m_InventoryRelationship__to);
    }
    {
        m_InventoryRelationship__from = ecoreFactory->createEReference();
        m_InventoryRelationship__from->setName("from");
        m_InventoryRelationship->addEStructuralFeatures(m_InventoryRelationship__from);
        m_InventoryRelationship->addEAllStructuralFeatures(m_InventoryRelationship__from);
        m_InventoryRelationship->addEReferences(m_InventoryRelationship__from);
        m_InventoryRelationship->addEAllReferences(m_InventoryRelationship__from);
    }
	
	m_SourceRef->addESuperTypes(m_Element);
	m_SourceRef->addAllEAllOperations(m_Element->getEOperations());
	m_SourceRef->addAllEAllReferences(m_Element->getEReferences());
	m_SourceRef->addAllEAllAttributes(m_Element->getEAttributes());
	m_SourceRef->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_SourceRegion->addESuperTypes(m_Element);
	m_SourceRegion->addAllEAllOperations(m_Element->getEOperations());
	m_SourceRegion->addAllEAllReferences(m_Element->getEReferences());
	m_SourceRegion->addAllEAllAttributes(m_Element->getEAttributes());
	m_SourceRegion->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
	m_InventoryModel->addESuperTypes(m_KDMModel);
	m_InventoryModel->addAllEAllOperations(m_KDMModel->getEOperations());
	m_InventoryModel->addAllEAllReferences(m_KDMModel->getEReferences());
	m_InventoryModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
	m_InventoryModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
	m_AbstractInventoryElement->addESuperTypes(m_KDMEntity);
	m_AbstractInventoryElement->addAllEAllOperations(m_KDMEntity->getEOperations());
	m_AbstractInventoryElement->addAllEAllReferences(m_KDMEntity->getEReferences());
	m_AbstractInventoryElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
	m_AbstractInventoryElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
	m_InventoryItem->addESuperTypes(m_AbstractInventoryElement);
	m_InventoryItem->addAllEAllOperations(m_AbstractInventoryElement->getEOperations());
	m_InventoryItem->addAllEAllReferences(m_AbstractInventoryElement->getEReferences());
	m_InventoryItem->addAllEAllAttributes(m_AbstractInventoryElement->getEAttributes());
	m_InventoryItem->addAllEAllStructuralFeatures(m_AbstractInventoryElement->getEStructuralFeatures());
	m_SourceFile->addESuperTypes(m_InventoryItem);
	m_SourceFile->addAllEAllOperations(m_InventoryItem->getEOperations());
	m_SourceFile->addAllEAllReferences(m_InventoryItem->getEReferences());
	m_SourceFile->addAllEAllAttributes(m_InventoryItem->getEAttributes());
	m_SourceFile->addAllEAllStructuralFeatures(m_InventoryItem->getEStructuralFeatures());
	m_Image->addESuperTypes(m_InventoryItem);
	m_Image->addAllEAllOperations(m_InventoryItem->getEOperations());
	m_Image->addAllEAllReferences(m_InventoryItem->getEReferences());
	m_Image->addAllEAllAttributes(m_InventoryItem->getEAttributes());
	m_Image->addAllEAllStructuralFeatures(m_InventoryItem->getEStructuralFeatures());
	m_ResourceDescription->addESuperTypes(m_InventoryItem);
	m_ResourceDescription->addAllEAllOperations(m_InventoryItem->getEOperations());
	m_ResourceDescription->addAllEAllReferences(m_InventoryItem->getEReferences());
	m_ResourceDescription->addAllEAllAttributes(m_InventoryItem->getEAttributes());
	m_ResourceDescription->addAllEAllStructuralFeatures(m_InventoryItem->getEStructuralFeatures());
	m_Configuration->addESuperTypes(m_InventoryItem);
	m_Configuration->addAllEAllOperations(m_InventoryItem->getEOperations());
	m_Configuration->addAllEAllReferences(m_InventoryItem->getEReferences());
	m_Configuration->addAllEAllAttributes(m_InventoryItem->getEAttributes());
	m_Configuration->addAllEAllStructuralFeatures(m_InventoryItem->getEStructuralFeatures());
	m_InventoryContainer->addESuperTypes(m_AbstractInventoryElement);
	m_InventoryContainer->addAllEAllOperations(m_AbstractInventoryElement->getEOperations());
	m_InventoryContainer->addAllEAllReferences(m_AbstractInventoryElement->getEReferences());
	m_InventoryContainer->addAllEAllAttributes(m_AbstractInventoryElement->getEAttributes());
	m_InventoryContainer->addAllEAllStructuralFeatures(m_AbstractInventoryElement->getEStructuralFeatures());
	m_Directory->addESuperTypes(m_InventoryContainer);
	m_Directory->addAllEAllOperations(m_InventoryContainer->getEOperations());
	m_Directory->addAllEAllReferences(m_InventoryContainer->getEReferences());
	m_Directory->addAllEAllAttributes(m_InventoryContainer->getEAttributes());
	m_Directory->addAllEAllStructuralFeatures(m_InventoryContainer->getEStructuralFeatures());
	m_Project->addESuperTypes(m_InventoryContainer);
	m_Project->addAllEAllOperations(m_InventoryContainer->getEOperations());
	m_Project->addAllEAllReferences(m_InventoryContainer->getEReferences());
	m_Project->addAllEAllAttributes(m_InventoryContainer->getEAttributes());
	m_Project->addAllEAllStructuralFeatures(m_InventoryContainer->getEStructuralFeatures());
	m_AbstractInventoryRelationship->addESuperTypes(m_KDMRelationship);
	m_AbstractInventoryRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
	m_AbstractInventoryRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
	m_AbstractInventoryRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
	m_AbstractInventoryRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
	m_BinaryFile->addESuperTypes(m_InventoryItem);
	m_BinaryFile->addAllEAllOperations(m_InventoryItem->getEOperations());
	m_BinaryFile->addAllEAllReferences(m_InventoryItem->getEReferences());
	m_BinaryFile->addAllEAllAttributes(m_InventoryItem->getEAttributes());
	m_BinaryFile->addAllEAllStructuralFeatures(m_InventoryItem->getEStructuralFeatures());
	m_ExecutableFile->addESuperTypes(m_InventoryItem);
	m_ExecutableFile->addAllEAllOperations(m_InventoryItem->getEOperations());
	m_ExecutableFile->addAllEAllReferences(m_InventoryItem->getEReferences());
	m_ExecutableFile->addAllEAllAttributes(m_InventoryItem->getEAttributes());
	m_ExecutableFile->addAllEAllStructuralFeatures(m_InventoryItem->getEStructuralFeatures());
	m_DependsOn->addESuperTypes(m_AbstractInventoryRelationship);
	m_DependsOn->addAllEAllOperations(m_AbstractInventoryRelationship->getEOperations());
	m_DependsOn->addAllEAllReferences(m_AbstractInventoryRelationship->getEReferences());
	m_DependsOn->addAllEAllAttributes(m_AbstractInventoryRelationship->getEAttributes());
	m_DependsOn->addAllEAllStructuralFeatures(m_AbstractInventoryRelationship->getEStructuralFeatures());
	m_InventoryElement->addESuperTypes(m_AbstractInventoryElement);
	m_InventoryElement->addAllEAllOperations(m_AbstractInventoryElement->getEOperations());
	m_InventoryElement->addAllEAllReferences(m_AbstractInventoryElement->getEReferences());
	m_InventoryElement->addAllEAllAttributes(m_AbstractInventoryElement->getEAttributes());
	m_InventoryElement->addAllEAllStructuralFeatures(m_AbstractInventoryElement->getEStructuralFeatures());
	m_InventoryRelationship->addESuperTypes(m_AbstractInventoryRelationship);
	m_InventoryRelationship->addAllEAllOperations(m_AbstractInventoryRelationship->getEOperations());
	m_InventoryRelationship->addAllEAllReferences(m_AbstractInventoryRelationship->getEReferences());
	m_InventoryRelationship->addAllEAllAttributes(m_AbstractInventoryRelationship->getEAttributes());
	m_InventoryRelationship->addAllEAllStructuralFeatures(m_AbstractInventoryRelationship->getEStructuralFeatures());
	
	
	m_SourceRef->addFeatureAccesors(m_SourceRef__region, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRef_ptr >(o)->getRegion()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRef->addFeatureAccesors(m_SourceRef__language, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRef_ptr >(o)->getLanguage()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRef->addFeatureAccesors(m_SourceRef__snippet, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRef_ptr >(o)->getSnippet()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__file, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getFile()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__startLine, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getStartLine()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__startPosition, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getStartPosition()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__endLine, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getEndLine()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__endPosition, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getEndPosition()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__language, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getLanguage()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceRegion->addFeatureAccesors(m_SourceRegion__path, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceRegion_ptr >(o)->getPath()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InventoryModel->addFeatureAccesors(m_InventoryModel__inventoryElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::InventoryModel_ptr >(o)->getInventoryElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractInventoryElement->addFeatureAccesors(m_AbstractInventoryElement__inventoryRelation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::AbstractInventoryElement_ptr >(o)->getInventoryRelation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InventoryItem->addFeatureAccesors(m_InventoryItem__version, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::InventoryItem_ptr >(o)->getVersion()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InventoryItem->addFeatureAccesors(m_InventoryItem__path, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::InventoryItem_ptr >(o)->getPath()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceFile->addFeatureAccesors(m_SourceFile__language, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceFile_ptr >(o)->getLanguage()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_SourceFile->addFeatureAccesors(m_SourceFile__encoding, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::SourceFile_ptr >(o)->getEncoding()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InventoryContainer->addFeatureAccesors(m_InventoryContainer__inventoryElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::InventoryContainer_ptr >(o)->getInventoryElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Directory->addFeatureAccesors(m_Directory__path, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::Directory_ptr >(o)->getPath()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DependsOn->addFeatureAccesors(m_DependsOn__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::DependsOn_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DependsOn->addFeatureAccesors(m_DependsOn__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::DependsOn_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InventoryRelationship->addFeatureAccesors(m_InventoryRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::InventoryRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_InventoryRelationship->addFeatureAccesors(m_InventoryRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::source::InventoryRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const SourcePackage_ptr SourcePackage::_instance()
{
	static SourcePackage __instance;
	return &__instance;
}

ecore::EClass_ptr SourcePackage::getSourceRef() const
{
	return m_SourceRef;
}
  	
e4c::tag_t SourcePackage::getTag_SourceRef() const
{
	return e4c::tag< SourceRef >::get();
}
 
ecore::EClass_ptr SourcePackage::getSourceRegion() const
{
	return m_SourceRegion;
}
  	
e4c::tag_t SourcePackage::getTag_SourceRegion() const
{
	return e4c::tag< SourceRegion >::get();
}
 
ecore::EClass_ptr SourcePackage::getInventoryModel() const
{
	return m_InventoryModel;
}
  	
e4c::tag_t SourcePackage::getTag_InventoryModel() const
{
	return e4c::tag< InventoryModel >::get();
}
 
ecore::EClass_ptr SourcePackage::getAbstractInventoryElement() const
{
	return m_AbstractInventoryElement;
}
  	
e4c::tag_t SourcePackage::getTag_AbstractInventoryElement() const
{
	return e4c::tag< AbstractInventoryElement >::get();
}
 
ecore::EClass_ptr SourcePackage::getInventoryItem() const
{
	return m_InventoryItem;
}
  	
e4c::tag_t SourcePackage::getTag_InventoryItem() const
{
	return e4c::tag< InventoryItem >::get();
}
 
ecore::EClass_ptr SourcePackage::getSourceFile() const
{
	return m_SourceFile;
}
  	
e4c::tag_t SourcePackage::getTag_SourceFile() const
{
	return e4c::tag< SourceFile >::get();
}
 
ecore::EClass_ptr SourcePackage::getImage() const
{
	return m_Image;
}
  	
e4c::tag_t SourcePackage::getTag_Image() const
{
	return e4c::tag< Image >::get();
}
 
ecore::EClass_ptr SourcePackage::getResourceDescription() const
{
	return m_ResourceDescription;
}
  	
e4c::tag_t SourcePackage::getTag_ResourceDescription() const
{
	return e4c::tag< ResourceDescription >::get();
}
 
ecore::EClass_ptr SourcePackage::getConfiguration() const
{
	return m_Configuration;
}
  	
e4c::tag_t SourcePackage::getTag_Configuration() const
{
	return e4c::tag< Configuration >::get();
}
 
ecore::EClass_ptr SourcePackage::getInventoryContainer() const
{
	return m_InventoryContainer;
}
  	
e4c::tag_t SourcePackage::getTag_InventoryContainer() const
{
	return e4c::tag< InventoryContainer >::get();
}
 
ecore::EClass_ptr SourcePackage::getDirectory() const
{
	return m_Directory;
}
  	
e4c::tag_t SourcePackage::getTag_Directory() const
{
	return e4c::tag< Directory >::get();
}
 
ecore::EClass_ptr SourcePackage::getProject() const
{
	return m_Project;
}
  	
e4c::tag_t SourcePackage::getTag_Project() const
{
	return e4c::tag< Project >::get();
}
 
ecore::EClass_ptr SourcePackage::getAbstractInventoryRelationship() const
{
	return m_AbstractInventoryRelationship;
}
  	
e4c::tag_t SourcePackage::getTag_AbstractInventoryRelationship() const
{
	return e4c::tag< AbstractInventoryRelationship >::get();
}
 
ecore::EClass_ptr SourcePackage::getBinaryFile() const
{
	return m_BinaryFile;
}
  	
e4c::tag_t SourcePackage::getTag_BinaryFile() const
{
	return e4c::tag< BinaryFile >::get();
}
 
ecore::EClass_ptr SourcePackage::getExecutableFile() const
{
	return m_ExecutableFile;
}
  	
e4c::tag_t SourcePackage::getTag_ExecutableFile() const
{
	return e4c::tag< ExecutableFile >::get();
}
 
ecore::EClass_ptr SourcePackage::getDependsOn() const
{
	return m_DependsOn;
}
  	
e4c::tag_t SourcePackage::getTag_DependsOn() const
{
	return e4c::tag< DependsOn >::get();
}
 
ecore::EClass_ptr SourcePackage::getInventoryElement() const
{
	return m_InventoryElement;
}
  	
e4c::tag_t SourcePackage::getTag_InventoryElement() const
{
	return e4c::tag< InventoryElement >::get();
}
 
ecore::EClass_ptr SourcePackage::getInventoryRelationship() const
{
	return m_InventoryRelationship;
}
  	
e4c::tag_t SourcePackage::getTag_InventoryRelationship() const
{
	return e4c::tag< InventoryRelationship >::get();
}
 
e4c::tag_t SourcePackage::getTag_SourceRef__region() const
{
	return e4c::tag< SourceRef__region_tag >::get();
}

ecore::EReference_ptr SourcePackage::getSourceRef__region() const
{
	return m_SourceRef__region;
}

e4c::tag_t SourcePackage::getTag_SourceRef__language() const
{
	return e4c::tag< SourceRef__language_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRef__language() const
{
	return m_SourceRef__language;
}

e4c::tag_t SourcePackage::getTag_SourceRef__snippet() const
{
	return e4c::tag< SourceRef__snippet_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRef__snippet() const
{
	return m_SourceRef__snippet;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__file() const
{
	return e4c::tag< SourceRegion__file_tag >::get();
}

ecore::EReference_ptr SourcePackage::getSourceRegion__file() const
{
	return m_SourceRegion__file;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__startLine() const
{
	return e4c::tag< SourceRegion__startLine_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRegion__startLine() const
{
	return m_SourceRegion__startLine;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__startPosition() const
{
	return e4c::tag< SourceRegion__startPosition_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRegion__startPosition() const
{
	return m_SourceRegion__startPosition;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__endLine() const
{
	return e4c::tag< SourceRegion__endLine_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRegion__endLine() const
{
	return m_SourceRegion__endLine;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__endPosition() const
{
	return e4c::tag< SourceRegion__endPosition_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRegion__endPosition() const
{
	return m_SourceRegion__endPosition;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__language() const
{
	return e4c::tag< SourceRegion__language_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRegion__language() const
{
	return m_SourceRegion__language;
}

e4c::tag_t SourcePackage::getTag_SourceRegion__path() const
{
	return e4c::tag< SourceRegion__path_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceRegion__path() const
{
	return m_SourceRegion__path;
}

e4c::tag_t SourcePackage::getTag_InventoryModel__inventoryElement() const
{
	return e4c::tag< InventoryModel__inventoryElement_tag >::get();
}

ecore::EReference_ptr SourcePackage::getInventoryModel__inventoryElement() const
{
	return m_InventoryModel__inventoryElement;
}

e4c::tag_t SourcePackage::getTag_AbstractInventoryElement__inventoryRelation() const
{
	return e4c::tag< AbstractInventoryElement__inventoryRelation_tag >::get();
}

ecore::EReference_ptr SourcePackage::getAbstractInventoryElement__inventoryRelation() const
{
	return m_AbstractInventoryElement__inventoryRelation;
}

e4c::tag_t SourcePackage::getTag_InventoryItem__version() const
{
	return e4c::tag< InventoryItem__version_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getInventoryItem__version() const
{
	return m_InventoryItem__version;
}

e4c::tag_t SourcePackage::getTag_InventoryItem__path() const
{
	return e4c::tag< InventoryItem__path_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getInventoryItem__path() const
{
	return m_InventoryItem__path;
}

e4c::tag_t SourcePackage::getTag_SourceFile__language() const
{
	return e4c::tag< SourceFile__language_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceFile__language() const
{
	return m_SourceFile__language;
}

e4c::tag_t SourcePackage::getTag_SourceFile__encoding() const
{
	return e4c::tag< SourceFile__encoding_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getSourceFile__encoding() const
{
	return m_SourceFile__encoding;
}

e4c::tag_t SourcePackage::getTag_InventoryContainer__inventoryElement() const
{
	return e4c::tag< InventoryContainer__inventoryElement_tag >::get();
}

ecore::EReference_ptr SourcePackage::getInventoryContainer__inventoryElement() const
{
	return m_InventoryContainer__inventoryElement;
}

e4c::tag_t SourcePackage::getTag_Directory__path() const
{
	return e4c::tag< Directory__path_tag >::get();
}

ecore::EAttribute_ptr SourcePackage::getDirectory__path() const
{
	return m_Directory__path;
}

e4c::tag_t SourcePackage::getTag_DependsOn__to() const
{
	return e4c::tag< DependsOn__to_tag >::get();
}

ecore::EReference_ptr SourcePackage::getDependsOn__to() const
{
	return m_DependsOn__to;
}

e4c::tag_t SourcePackage::getTag_DependsOn__from() const
{
	return e4c::tag< DependsOn__from_tag >::get();
}

ecore::EReference_ptr SourcePackage::getDependsOn__from() const
{
	return m_DependsOn__from;
}

e4c::tag_t SourcePackage::getTag_InventoryRelationship__to() const
{
	return e4c::tag< InventoryRelationship__to_tag >::get();
}

ecore::EReference_ptr SourcePackage::getInventoryRelationship__to() const
{
	return m_InventoryRelationship__to;
}

e4c::tag_t SourcePackage::getTag_InventoryRelationship__from() const
{
	return e4c::tag< InventoryRelationship__from_tag >::get();
}

ecore::EReference_ptr SourcePackage::getInventoryRelationship__from() const
{
	return m_InventoryRelationship__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_source()
{
	return ::kdm::source::SourcePackage::_instance();
}
