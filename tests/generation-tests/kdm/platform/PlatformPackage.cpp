#include "PlatformPackage.hpp"
#include "PlatformFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::platform;

PlatformPackage::PlatformPackage()
{
    m_eFactoryInstance = PlatformFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_AbstractPlatformElement = ecoreFactory->createEClass();
    m_AbstractPlatformElement->setName("AbstractPlatformElement");
    addEClassifiers(m_AbstractPlatformElement);
    m_PlatformModel = ecoreFactory->createEClass();
    m_PlatformModel->setName("PlatformModel");
    addEClassifiers(m_PlatformModel);
    m_AbstractPlatformRelationship = ecoreFactory->createEClass();
    m_AbstractPlatformRelationship->setName("AbstractPlatformRelationship");
    addEClassifiers(m_AbstractPlatformRelationship);
    m_Requires = ecoreFactory->createEClass();
    m_Requires->setName("Requires");
    addEClassifiers(m_Requires);
    m_ResourceType = ecoreFactory->createEClass();
    m_ResourceType->setName("ResourceType");
    addEClassifiers(m_ResourceType);
    m_NamingResource = ecoreFactory->createEClass();
    m_NamingResource->setName("NamingResource");
    addEClassifiers(m_NamingResource);
    m_MarshalledResource = ecoreFactory->createEClass();
    m_MarshalledResource->setName("MarshalledResource");
    addEClassifiers(m_MarshalledResource);
    m_MessagingResource = ecoreFactory->createEClass();
    m_MessagingResource->setName("MessagingResource");
    addEClassifiers(m_MessagingResource);
    m_FileResource = ecoreFactory->createEClass();
    m_FileResource->setName("FileResource");
    addEClassifiers(m_FileResource);
    m_ExecutionResource = ecoreFactory->createEClass();
    m_ExecutionResource->setName("ExecutionResource");
    addEClassifiers(m_ExecutionResource);
    m_PlatformAction = ecoreFactory->createEClass();
    m_PlatformAction->setName("PlatformAction");
    addEClassifiers(m_PlatformAction);
    m_ExternalActor = ecoreFactory->createEClass();
    m_ExternalActor->setName("ExternalActor");
    addEClassifiers(m_ExternalActor);
    m_DataManager = ecoreFactory->createEClass();
    m_DataManager->setName("DataManager");
    addEClassifiers(m_DataManager);
    m_BindsTo = ecoreFactory->createEClass();
    m_BindsTo->setName("BindsTo");
    addEClassifiers(m_BindsTo);
    m_PlatformElement = ecoreFactory->createEClass();
    m_PlatformElement->setName("PlatformElement");
    addEClassifiers(m_PlatformElement);
    m_PlatformRelationship = ecoreFactory->createEClass();
    m_PlatformRelationship->setName("PlatformRelationship");
    addEClassifiers(m_PlatformRelationship);
    m_PlatformEvent = ecoreFactory->createEClass();
    m_PlatformEvent->setName("PlatformEvent");
    addEClassifiers(m_PlatformEvent);
    m_LockResource = ecoreFactory->createEClass();
    m_LockResource->setName("LockResource");
    addEClassifiers(m_LockResource);
    m_DeployedSoftwareSystem = ecoreFactory->createEClass();
    m_DeployedSoftwareSystem->setName("DeployedSoftwareSystem");
    addEClassifiers(m_DeployedSoftwareSystem);
    m_Machine = ecoreFactory->createEClass();
    m_Machine->setName("Machine");
    addEClassifiers(m_Machine);
    m_DeployedComponent = ecoreFactory->createEClass();
    m_DeployedComponent->setName("DeployedComponent");
    addEClassifiers(m_DeployedComponent);
    m_DeployedResource = ecoreFactory->createEClass();
    m_DeployedResource->setName("DeployedResource");
    addEClassifiers(m_DeployedResource);
    m_Loads = ecoreFactory->createEClass();
    m_Loads->setName("Loads");
    addEClassifiers(m_Loads);
    m_Spawns = ecoreFactory->createEClass();
    m_Spawns->setName("Spawns");
    addEClassifiers(m_Spawns);
    m_RuntimeResource = ecoreFactory->createEClass();
    m_RuntimeResource->setName("RuntimeResource");
    addEClassifiers(m_RuntimeResource);
    m_Thread = ecoreFactory->createEClass();
    m_Thread->setName("Thread");
    addEClassifiers(m_Thread);
    m_Process = ecoreFactory->createEClass();
    m_Process->setName("Process");
    addEClassifiers(m_Process);
    m_ReadsResource = ecoreFactory->createEClass();
    m_ReadsResource->setName("ReadsResource");
    addEClassifiers(m_ReadsResource);
    m_WritesResource = ecoreFactory->createEClass();
    m_WritesResource->setName("WritesResource");
    addEClassifiers(m_WritesResource);
    m_ManagesResource = ecoreFactory->createEClass();
    m_ManagesResource->setName("ManagesResource");
    addEClassifiers(m_ManagesResource);
    m_DefinedBy = ecoreFactory->createEClass();
    m_DefinedBy->setName("DefinedBy");
    addEClassifiers(m_DefinedBy);
    m_StreamResource = ecoreFactory->createEClass();
    m_StreamResource->setName("StreamResource");
    addEClassifiers(m_StreamResource);


    {
        m_AbstractPlatformElement__source = ecoreFactory->createEReference();
        m_AbstractPlatformElement__source->setName("source");
        m_AbstractPlatformElement->addEStructuralFeatures(m_AbstractPlatformElement__source);
        m_AbstractPlatformElement->addEAllStructuralFeatures(m_AbstractPlatformElement__source);
        m_AbstractPlatformElement->addEReferences(m_AbstractPlatformElement__source);
        m_AbstractPlatformElement->addEAllReferences(m_AbstractPlatformElement__source);
    }
    {
        m_AbstractPlatformElement__relation = ecoreFactory->createEReference();
        m_AbstractPlatformElement__relation->setName("relation");
        m_AbstractPlatformElement->addEStructuralFeatures(m_AbstractPlatformElement__relation);
        m_AbstractPlatformElement->addEAllStructuralFeatures(m_AbstractPlatformElement__relation);
        m_AbstractPlatformElement->addEReferences(m_AbstractPlatformElement__relation);
        m_AbstractPlatformElement->addEAllReferences(m_AbstractPlatformElement__relation);
    }
    {
        m_AbstractPlatformElement__abstraction = ecoreFactory->createEReference();
        m_AbstractPlatformElement__abstraction->setName("abstraction");
        m_AbstractPlatformElement->addEStructuralFeatures(m_AbstractPlatformElement__abstraction);
        m_AbstractPlatformElement->addEAllStructuralFeatures(m_AbstractPlatformElement__abstraction);
        m_AbstractPlatformElement->addEReferences(m_AbstractPlatformElement__abstraction);
        m_AbstractPlatformElement->addEAllReferences(m_AbstractPlatformElement__abstraction);
    }
    {
        m_AbstractPlatformElement__implementation = ecoreFactory->createEReference();
        m_AbstractPlatformElement__implementation->setName("implementation");
        m_AbstractPlatformElement->addEStructuralFeatures(m_AbstractPlatformElement__implementation);
        m_AbstractPlatformElement->addEAllStructuralFeatures(m_AbstractPlatformElement__implementation);
        m_AbstractPlatformElement->addEReferences(m_AbstractPlatformElement__implementation);
        m_AbstractPlatformElement->addEAllReferences(m_AbstractPlatformElement__implementation);
    }
    {
        m_PlatformModel__platformElement = ecoreFactory->createEReference();
        m_PlatformModel__platformElement->setName("platformElement");
        m_PlatformModel->addEStructuralFeatures(m_PlatformModel__platformElement);
        m_PlatformModel->addEAllStructuralFeatures(m_PlatformModel__platformElement);
        m_PlatformModel->addEReferences(m_PlatformModel__platformElement);
        m_PlatformModel->addEAllReferences(m_PlatformModel__platformElement);
    }
    {
        m_Requires__to = ecoreFactory->createEReference();
        m_Requires__to->setName("to");
        m_Requires->addEStructuralFeatures(m_Requires__to);
        m_Requires->addEAllStructuralFeatures(m_Requires__to);
        m_Requires->addEReferences(m_Requires__to);
        m_Requires->addEAllReferences(m_Requires__to);
    }
    {
        m_Requires__from = ecoreFactory->createEReference();
        m_Requires__from->setName("from");
        m_Requires->addEStructuralFeatures(m_Requires__from);
        m_Requires->addEAllStructuralFeatures(m_Requires__from);
        m_Requires->addEReferences(m_Requires__from);
        m_Requires->addEAllReferences(m_Requires__from);
    }
    {
        m_ResourceType__platformElement = ecoreFactory->createEReference();
        m_ResourceType__platformElement->setName("platformElement");
        m_ResourceType->addEStructuralFeatures(m_ResourceType__platformElement);
        m_ResourceType->addEAllStructuralFeatures(m_ResourceType__platformElement);
        m_ResourceType->addEReferences(m_ResourceType__platformElement);
        m_ResourceType->addEAllReferences(m_ResourceType__platformElement);
    }
    {
        m_PlatformAction__kind = ecoreFactory->createEAttribute();
        m_PlatformAction__kind->setName("kind");
        m_PlatformAction->addEStructuralFeatures(m_PlatformAction__kind);
        m_PlatformAction->addEAllStructuralFeatures(m_PlatformAction__kind);
        m_PlatformAction->addEAttributes(m_PlatformAction__kind);
        m_PlatformAction->addEAllAttributes(m_PlatformAction__kind);
    }
    {
        m_PlatformAction__platformElement = ecoreFactory->createEReference();
        m_PlatformAction__platformElement->setName("platformElement");
        m_PlatformAction->addEStructuralFeatures(m_PlatformAction__platformElement);
        m_PlatformAction->addEAllStructuralFeatures(m_PlatformAction__platformElement);
        m_PlatformAction->addEReferences(m_PlatformAction__platformElement);
        m_PlatformAction->addEAllReferences(m_PlatformAction__platformElement);
    }
    {
        m_BindsTo__to = ecoreFactory->createEReference();
        m_BindsTo__to->setName("to");
        m_BindsTo->addEStructuralFeatures(m_BindsTo__to);
        m_BindsTo->addEAllStructuralFeatures(m_BindsTo__to);
        m_BindsTo->addEReferences(m_BindsTo__to);
        m_BindsTo->addEAllReferences(m_BindsTo__to);
    }
    {
        m_BindsTo__from = ecoreFactory->createEReference();
        m_BindsTo__from->setName("from");
        m_BindsTo->addEStructuralFeatures(m_BindsTo__from);
        m_BindsTo->addEAllStructuralFeatures(m_BindsTo__from);
        m_BindsTo->addEReferences(m_BindsTo__from);
        m_BindsTo->addEAllReferences(m_BindsTo__from);
    }
    {
        m_PlatformRelationship__to = ecoreFactory->createEReference();
        m_PlatformRelationship__to->setName("to");
        m_PlatformRelationship->addEStructuralFeatures(m_PlatformRelationship__to);
        m_PlatformRelationship->addEAllStructuralFeatures(m_PlatformRelationship__to);
        m_PlatformRelationship->addEReferences(m_PlatformRelationship__to);
        m_PlatformRelationship->addEAllReferences(m_PlatformRelationship__to);
    }
    {
        m_PlatformRelationship__from = ecoreFactory->createEReference();
        m_PlatformRelationship__from->setName("from");
        m_PlatformRelationship->addEStructuralFeatures(m_PlatformRelationship__from);
        m_PlatformRelationship->addEAllStructuralFeatures(m_PlatformRelationship__from);
        m_PlatformRelationship->addEReferences(m_PlatformRelationship__from);
        m_PlatformRelationship->addEAllReferences(m_PlatformRelationship__from);
    }
    {
        m_PlatformEvent__kind = ecoreFactory->createEAttribute();
        m_PlatformEvent__kind->setName("kind");
        m_PlatformEvent->addEStructuralFeatures(m_PlatformEvent__kind);
        m_PlatformEvent->addEAllStructuralFeatures(m_PlatformEvent__kind);
        m_PlatformEvent->addEAttributes(m_PlatformEvent__kind);
        m_PlatformEvent->addEAllAttributes(m_PlatformEvent__kind);
    }
    {
        m_DeployedSoftwareSystem__groupedComponent = ecoreFactory->createEReference();
        m_DeployedSoftwareSystem__groupedComponent->setName("groupedComponent");
        m_DeployedSoftwareSystem->addEStructuralFeatures(m_DeployedSoftwareSystem__groupedComponent);
        m_DeployedSoftwareSystem->addEAllStructuralFeatures(m_DeployedSoftwareSystem__groupedComponent);
        m_DeployedSoftwareSystem->addEReferences(m_DeployedSoftwareSystem__groupedComponent);
        m_DeployedSoftwareSystem->addEAllReferences(m_DeployedSoftwareSystem__groupedComponent);
    }
    {
        m_Machine__deployedComponent = ecoreFactory->createEReference();
        m_Machine__deployedComponent->setName("deployedComponent");
        m_Machine->addEStructuralFeatures(m_Machine__deployedComponent);
        m_Machine->addEAllStructuralFeatures(m_Machine__deployedComponent);
        m_Machine->addEReferences(m_Machine__deployedComponent);
        m_Machine->addEAllReferences(m_Machine__deployedComponent);
    }
    {
        m_Machine__deployedResource = ecoreFactory->createEReference();
        m_Machine__deployedResource->setName("deployedResource");
        m_Machine->addEStructuralFeatures(m_Machine__deployedResource);
        m_Machine->addEAllStructuralFeatures(m_Machine__deployedResource);
        m_Machine->addEReferences(m_Machine__deployedResource);
        m_Machine->addEAllReferences(m_Machine__deployedResource);
    }
    {
        m_DeployedComponent__groupedCode = ecoreFactory->createEReference();
        m_DeployedComponent__groupedCode->setName("groupedCode");
        m_DeployedComponent->addEStructuralFeatures(m_DeployedComponent__groupedCode);
        m_DeployedComponent->addEAllStructuralFeatures(m_DeployedComponent__groupedCode);
        m_DeployedComponent->addEReferences(m_DeployedComponent__groupedCode);
        m_DeployedComponent->addEAllReferences(m_DeployedComponent__groupedCode);
    }
    {
        m_DeployedResource__platformElement = ecoreFactory->createEReference();
        m_DeployedResource__platformElement->setName("platformElement");
        m_DeployedResource->addEStructuralFeatures(m_DeployedResource__platformElement);
        m_DeployedResource->addEAllStructuralFeatures(m_DeployedResource__platformElement);
        m_DeployedResource->addEReferences(m_DeployedResource__platformElement);
        m_DeployedResource->addEAllReferences(m_DeployedResource__platformElement);
    }
    {
        m_Loads__to = ecoreFactory->createEReference();
        m_Loads__to->setName("to");
        m_Loads->addEStructuralFeatures(m_Loads__to);
        m_Loads->addEAllStructuralFeatures(m_Loads__to);
        m_Loads->addEReferences(m_Loads__to);
        m_Loads->addEAllReferences(m_Loads__to);
    }
    {
        m_Loads__from = ecoreFactory->createEReference();
        m_Loads__from->setName("from");
        m_Loads->addEStructuralFeatures(m_Loads__from);
        m_Loads->addEAllStructuralFeatures(m_Loads__from);
        m_Loads->addEReferences(m_Loads__from);
        m_Loads->addEAllReferences(m_Loads__from);
    }
    {
        m_Spawns__to = ecoreFactory->createEReference();
        m_Spawns__to->setName("to");
        m_Spawns->addEStructuralFeatures(m_Spawns__to);
        m_Spawns->addEAllStructuralFeatures(m_Spawns__to);
        m_Spawns->addEReferences(m_Spawns__to);
        m_Spawns->addEAllReferences(m_Spawns__to);
    }
    {
        m_Spawns__from = ecoreFactory->createEReference();
        m_Spawns__from->setName("from");
        m_Spawns->addEStructuralFeatures(m_Spawns__from);
        m_Spawns->addEAllStructuralFeatures(m_Spawns__from);
        m_Spawns->addEReferences(m_Spawns__from);
        m_Spawns->addEAllReferences(m_Spawns__from);
    }
    {
        m_ReadsResource__to = ecoreFactory->createEReference();
        m_ReadsResource__to->setName("to");
        m_ReadsResource->addEStructuralFeatures(m_ReadsResource__to);
        m_ReadsResource->addEAllStructuralFeatures(m_ReadsResource__to);
        m_ReadsResource->addEReferences(m_ReadsResource__to);
        m_ReadsResource->addEAllReferences(m_ReadsResource__to);
    }
    {
        m_ReadsResource__from = ecoreFactory->createEReference();
        m_ReadsResource__from->setName("from");
        m_ReadsResource->addEStructuralFeatures(m_ReadsResource__from);
        m_ReadsResource->addEAllStructuralFeatures(m_ReadsResource__from);
        m_ReadsResource->addEReferences(m_ReadsResource__from);
        m_ReadsResource->addEAllReferences(m_ReadsResource__from);
    }
    {
        m_WritesResource__to = ecoreFactory->createEReference();
        m_WritesResource__to->setName("to");
        m_WritesResource->addEStructuralFeatures(m_WritesResource__to);
        m_WritesResource->addEAllStructuralFeatures(m_WritesResource__to);
        m_WritesResource->addEReferences(m_WritesResource__to);
        m_WritesResource->addEAllReferences(m_WritesResource__to);
    }
    {
        m_WritesResource__from = ecoreFactory->createEReference();
        m_WritesResource__from->setName("from");
        m_WritesResource->addEStructuralFeatures(m_WritesResource__from);
        m_WritesResource->addEAllStructuralFeatures(m_WritesResource__from);
        m_WritesResource->addEReferences(m_WritesResource__from);
        m_WritesResource->addEAllReferences(m_WritesResource__from);
    }
    {
        m_ManagesResource__to = ecoreFactory->createEReference();
        m_ManagesResource__to->setName("to");
        m_ManagesResource->addEStructuralFeatures(m_ManagesResource__to);
        m_ManagesResource->addEAllStructuralFeatures(m_ManagesResource__to);
        m_ManagesResource->addEReferences(m_ManagesResource__to);
        m_ManagesResource->addEAllReferences(m_ManagesResource__to);
    }
    {
        m_ManagesResource__from = ecoreFactory->createEReference();
        m_ManagesResource__from->setName("from");
        m_ManagesResource->addEStructuralFeatures(m_ManagesResource__from);
        m_ManagesResource->addEAllStructuralFeatures(m_ManagesResource__from);
        m_ManagesResource->addEReferences(m_ManagesResource__from);
        m_ManagesResource->addEAllReferences(m_ManagesResource__from);
    }
    {
        m_DefinedBy__to = ecoreFactory->createEReference();
        m_DefinedBy__to->setName("to");
        m_DefinedBy->addEStructuralFeatures(m_DefinedBy__to);
        m_DefinedBy->addEAllStructuralFeatures(m_DefinedBy__to);
        m_DefinedBy->addEReferences(m_DefinedBy__to);
        m_DefinedBy->addEAllReferences(m_DefinedBy__to);
    }
    {
        m_DefinedBy__from = ecoreFactory->createEReference();
        m_DefinedBy__from->setName("from");
        m_DefinedBy->addEStructuralFeatures(m_DefinedBy__from);
        m_DefinedBy->addEAllStructuralFeatures(m_DefinedBy__from);
        m_DefinedBy->addEReferences(m_DefinedBy__from);
        m_DefinedBy->addEAllReferences(m_DefinedBy__from);
    }

    m_AbstractPlatformElement->addESuperTypes(m_KDMEntity);
    m_AbstractPlatformElement->addAllEAllOperations(m_KDMEntity->getEOperations());
    m_AbstractPlatformElement->addAllEAllReferences(m_KDMEntity->getEReferences());
    m_AbstractPlatformElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
    m_AbstractPlatformElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
    m_PlatformModel->addESuperTypes(m_KDMModel);
    m_PlatformModel->addAllEAllOperations(m_KDMModel->getEOperations());
    m_PlatformModel->addAllEAllReferences(m_KDMModel->getEReferences());
    m_PlatformModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
    m_PlatformModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
    m_AbstractPlatformRelationship->addESuperTypes(m_KDMRelationship);
    m_AbstractPlatformRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
    m_AbstractPlatformRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
    m_AbstractPlatformRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
    m_AbstractPlatformRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
    m_Requires->addESuperTypes(m_AbstractPlatformRelationship);
    m_Requires->addAllEAllOperations(m_AbstractPlatformRelationship->getEOperations());
    m_Requires->addAllEAllReferences(m_AbstractPlatformRelationship->getEReferences());
    m_Requires->addAllEAllAttributes(m_AbstractPlatformRelationship->getEAttributes());
    m_Requires->addAllEAllStructuralFeatures(m_AbstractPlatformRelationship->getEStructuralFeatures());
    m_ResourceType->addESuperTypes(m_AbstractPlatformElement);
    m_ResourceType->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_ResourceType->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_ResourceType->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_ResourceType->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_NamingResource->addESuperTypes(m_ResourceType);
    m_NamingResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_NamingResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_NamingResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_NamingResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_MarshalledResource->addESuperTypes(m_ResourceType);
    m_MarshalledResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_MarshalledResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_MarshalledResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_MarshalledResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_MessagingResource->addESuperTypes(m_ResourceType);
    m_MessagingResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_MessagingResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_MessagingResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_MessagingResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_FileResource->addESuperTypes(m_ResourceType);
    m_FileResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_FileResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_FileResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_FileResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_ExecutionResource->addESuperTypes(m_ResourceType);
    m_ExecutionResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_ExecutionResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_ExecutionResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_ExecutionResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_PlatformAction->addESuperTypes(m_AbstractPlatformElement);
    m_PlatformAction->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_PlatformAction->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_PlatformAction->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_PlatformAction->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_ExternalActor->addESuperTypes(m_PlatformAction);
    m_ExternalActor->addAllEAllOperations(m_PlatformAction->getEOperations());
    m_ExternalActor->addAllEAllReferences(m_PlatformAction->getEReferences());
    m_ExternalActor->addAllEAllAttributes(m_PlatformAction->getEAttributes());
    m_ExternalActor->addAllEAllStructuralFeatures(m_PlatformAction->getEStructuralFeatures());
    m_DataManager->addESuperTypes(m_ResourceType);
    m_DataManager->addAllEAllOperations(m_ResourceType->getEOperations());
    m_DataManager->addAllEAllReferences(m_ResourceType->getEReferences());
    m_DataManager->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_DataManager->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_BindsTo->addESuperTypes(m_AbstractPlatformRelationship);
    m_BindsTo->addAllEAllOperations(m_AbstractPlatformRelationship->getEOperations());
    m_BindsTo->addAllEAllReferences(m_AbstractPlatformRelationship->getEReferences());
    m_BindsTo->addAllEAllAttributes(m_AbstractPlatformRelationship->getEAttributes());
    m_BindsTo->addAllEAllStructuralFeatures(m_AbstractPlatformRelationship->getEStructuralFeatures());
    m_PlatformElement->addESuperTypes(m_AbstractPlatformElement);
    m_PlatformElement->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_PlatformElement->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_PlatformElement->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_PlatformElement->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_PlatformRelationship->addESuperTypes(m_AbstractPlatformRelationship);
    m_PlatformRelationship->addAllEAllOperations(m_AbstractPlatformRelationship->getEOperations());
    m_PlatformRelationship->addAllEAllReferences(m_AbstractPlatformRelationship->getEReferences());
    m_PlatformRelationship->addAllEAllAttributes(m_AbstractPlatformRelationship->getEAttributes());
    m_PlatformRelationship->addAllEAllStructuralFeatures(m_AbstractPlatformRelationship->getEStructuralFeatures());
    m_PlatformEvent->addESuperTypes(m_AbstractPlatformElement);
    m_PlatformEvent->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_PlatformEvent->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_PlatformEvent->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_PlatformEvent->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_LockResource->addESuperTypes(m_ResourceType);
    m_LockResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_LockResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_LockResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_LockResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_DeployedSoftwareSystem->addESuperTypes(m_AbstractPlatformElement);
    m_DeployedSoftwareSystem->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_DeployedSoftwareSystem->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_DeployedSoftwareSystem->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_DeployedSoftwareSystem->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_Machine->addESuperTypes(m_AbstractPlatformElement);
    m_Machine->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_Machine->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_Machine->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_Machine->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_DeployedComponent->addESuperTypes(m_AbstractPlatformElement);
    m_DeployedComponent->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_DeployedComponent->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_DeployedComponent->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_DeployedComponent->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_DeployedResource->addESuperTypes(m_AbstractPlatformElement);
    m_DeployedResource->addAllEAllOperations(m_AbstractPlatformElement->getEOperations());
    m_DeployedResource->addAllEAllReferences(m_AbstractPlatformElement->getEReferences());
    m_DeployedResource->addAllEAllAttributes(m_AbstractPlatformElement->getEAttributes());
    m_DeployedResource->addAllEAllStructuralFeatures(m_AbstractPlatformElement->getEStructuralFeatures());
    m_Loads->addESuperTypes(m_AbstractPlatformRelationship);
    m_Loads->addAllEAllOperations(m_AbstractPlatformRelationship->getEOperations());
    m_Loads->addAllEAllReferences(m_AbstractPlatformRelationship->getEReferences());
    m_Loads->addAllEAllAttributes(m_AbstractPlatformRelationship->getEAttributes());
    m_Loads->addAllEAllStructuralFeatures(m_AbstractPlatformRelationship->getEStructuralFeatures());
    m_Spawns->addESuperTypes(m_AbstractPlatformRelationship);
    m_Spawns->addAllEAllOperations(m_AbstractPlatformRelationship->getEOperations());
    m_Spawns->addAllEAllReferences(m_AbstractPlatformRelationship->getEReferences());
    m_Spawns->addAllEAllAttributes(m_AbstractPlatformRelationship->getEAttributes());
    m_Spawns->addAllEAllStructuralFeatures(m_AbstractPlatformRelationship->getEStructuralFeatures());
    m_RuntimeResource->addESuperTypes(m_ResourceType);
    m_RuntimeResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_RuntimeResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_RuntimeResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_RuntimeResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());
    m_Thread->addESuperTypes(m_RuntimeResource);
    m_Thread->addAllEAllOperations(m_RuntimeResource->getEOperations());
    m_Thread->addAllEAllReferences(m_RuntimeResource->getEReferences());
    m_Thread->addAllEAllAttributes(m_RuntimeResource->getEAttributes());
    m_Thread->addAllEAllStructuralFeatures(m_RuntimeResource->getEStructuralFeatures());
    m_Process->addESuperTypes(m_RuntimeResource);
    m_Process->addAllEAllOperations(m_RuntimeResource->getEOperations());
    m_Process->addAllEAllReferences(m_RuntimeResource->getEReferences());
    m_Process->addAllEAllAttributes(m_RuntimeResource->getEAttributes());
    m_Process->addAllEAllStructuralFeatures(m_RuntimeResource->getEStructuralFeatures());
    m_ReadsResource->addESuperTypes(m_AbstractActionRelationship);
    m_ReadsResource->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_ReadsResource->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_ReadsResource->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_ReadsResource->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_WritesResource->addESuperTypes(m_AbstractActionRelationship);
    m_WritesResource->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_WritesResource->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_WritesResource->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_WritesResource->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_ManagesResource->addESuperTypes(m_AbstractActionRelationship);
    m_ManagesResource->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_ManagesResource->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_ManagesResource->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_ManagesResource->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_DefinedBy->addESuperTypes(m_AbstractActionRelationship);
    m_DefinedBy->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_DefinedBy->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_DefinedBy->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_DefinedBy->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_StreamResource->addESuperTypes(m_ResourceType);
    m_StreamResource->addAllEAllOperations(m_ResourceType->getEOperations());
    m_StreamResource->addAllEAllReferences(m_ResourceType->getEReferences());
    m_StreamResource->addAllEAllAttributes(m_ResourceType->getEAttributes());
    m_StreamResource->addAllEAllStructuralFeatures(m_ResourceType->getEStructuralFeatures());


    m_AbstractPlatformElement->addFeatureAccesors(m_AbstractPlatformElement__source,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::AbstractPlatformElement_ptr >(o)->getSource()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractPlatformElement->addFeatureAccesors(m_AbstractPlatformElement__relation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::AbstractPlatformElement_ptr >(o)->getRelation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractPlatformElement->addFeatureAccesors(m_AbstractPlatformElement__abstraction,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::AbstractPlatformElement_ptr >(o)->getAbstraction()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractPlatformElement->addFeatureAccesors(m_AbstractPlatformElement__implementation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::AbstractPlatformElement_ptr >(o)->getImplementation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_PlatformModel->addFeatureAccesors(m_PlatformModel__platformElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::PlatformModel_ptr >(o)->getPlatformElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Requires->addFeatureAccesors(m_Requires__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Requires_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Requires->addFeatureAccesors(m_Requires__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Requires_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ResourceType->addFeatureAccesors(m_ResourceType__platformElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::ResourceType_ptr >(o)->getPlatformElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_PlatformAction->addFeatureAccesors(m_PlatformAction__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::PlatformAction_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_PlatformAction->addFeatureAccesors(m_PlatformAction__platformElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::PlatformAction_ptr >(o)->getPlatformElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_BindsTo->addFeatureAccesors(m_BindsTo__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::BindsTo_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_BindsTo->addFeatureAccesors(m_BindsTo__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::BindsTo_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_PlatformRelationship->addFeatureAccesors(m_PlatformRelationship__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::PlatformRelationship_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_PlatformRelationship->addFeatureAccesors(m_PlatformRelationship__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::PlatformRelationship_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_PlatformEvent->addFeatureAccesors(m_PlatformEvent__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::PlatformEvent_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DeployedSoftwareSystem->addFeatureAccesors(m_DeployedSoftwareSystem__groupedComponent,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::DeployedSoftwareSystem_ptr >(o)->getGroupedComponent()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Machine->addFeatureAccesors(m_Machine__deployedComponent,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Machine_ptr >(o)->getDeployedComponent()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Machine->addFeatureAccesors(m_Machine__deployedResource,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Machine_ptr >(o)->getDeployedResource()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DeployedComponent->addFeatureAccesors(m_DeployedComponent__groupedCode,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::DeployedComponent_ptr >(o)->getGroupedCode()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DeployedResource->addFeatureAccesors(m_DeployedResource__platformElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::DeployedResource_ptr >(o)->getPlatformElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Loads->addFeatureAccesors(m_Loads__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Loads_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Loads->addFeatureAccesors(m_Loads__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Loads_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Spawns->addFeatureAccesors(m_Spawns__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Spawns_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Spawns->addFeatureAccesors(m_Spawns__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::Spawns_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ReadsResource->addFeatureAccesors(m_ReadsResource__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::ReadsResource_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ReadsResource->addFeatureAccesors(m_ReadsResource__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::ReadsResource_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_WritesResource->addFeatureAccesors(m_WritesResource__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::WritesResource_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_WritesResource->addFeatureAccesors(m_WritesResource__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::WritesResource_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ManagesResource->addFeatureAccesors(m_ManagesResource__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::ManagesResource_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ManagesResource->addFeatureAccesors(m_ManagesResource__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::ManagesResource_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DefinedBy->addFeatureAccesors(m_DefinedBy__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::DefinedBy_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DefinedBy->addFeatureAccesors(m_DefinedBy__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::platform::DefinedBy_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const PlatformPackage_ptr PlatformPackage::_instance()
{
    static PlatformPackage __instance;
    return &__instance;
}

ecore::EClass_ptr PlatformPackage::getAbstractPlatformElement() const
{
    return m_AbstractPlatformElement;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement() const
{
    return e4c::tag< AbstractPlatformElement >::get();
}

ecore::EClass_ptr PlatformPackage::getPlatformModel() const
{
    return m_PlatformModel;
}

e4c::tag_t PlatformPackage::getTag_PlatformModel() const
{
    return e4c::tag< PlatformModel >::get();
}

ecore::EClass_ptr PlatformPackage::getAbstractPlatformRelationship() const
{
    return m_AbstractPlatformRelationship;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformRelationship() const
{
    return e4c::tag< AbstractPlatformRelationship >::get();
}

ecore::EClass_ptr PlatformPackage::getRequires() const
{
    return m_Requires;
}

e4c::tag_t PlatformPackage::getTag_Requires() const
{
    return e4c::tag< Requires >::get();
}

ecore::EClass_ptr PlatformPackage::getResourceType() const
{
    return m_ResourceType;
}

e4c::tag_t PlatformPackage::getTag_ResourceType() const
{
    return e4c::tag< ResourceType >::get();
}

ecore::EClass_ptr PlatformPackage::getNamingResource() const
{
    return m_NamingResource;
}

e4c::tag_t PlatformPackage::getTag_NamingResource() const
{
    return e4c::tag< NamingResource >::get();
}

ecore::EClass_ptr PlatformPackage::getMarshalledResource() const
{
    return m_MarshalledResource;
}

e4c::tag_t PlatformPackage::getTag_MarshalledResource() const
{
    return e4c::tag< MarshalledResource >::get();
}

ecore::EClass_ptr PlatformPackage::getMessagingResource() const
{
    return m_MessagingResource;
}

e4c::tag_t PlatformPackage::getTag_MessagingResource() const
{
    return e4c::tag< MessagingResource >::get();
}

ecore::EClass_ptr PlatformPackage::getFileResource() const
{
    return m_FileResource;
}

e4c::tag_t PlatformPackage::getTag_FileResource() const
{
    return e4c::tag< FileResource >::get();
}

ecore::EClass_ptr PlatformPackage::getExecutionResource() const
{
    return m_ExecutionResource;
}

e4c::tag_t PlatformPackage::getTag_ExecutionResource() const
{
    return e4c::tag< ExecutionResource >::get();
}

ecore::EClass_ptr PlatformPackage::getPlatformAction() const
{
    return m_PlatformAction;
}

e4c::tag_t PlatformPackage::getTag_PlatformAction() const
{
    return e4c::tag< PlatformAction >::get();
}

ecore::EClass_ptr PlatformPackage::getExternalActor() const
{
    return m_ExternalActor;
}

e4c::tag_t PlatformPackage::getTag_ExternalActor() const
{
    return e4c::tag< ExternalActor >::get();
}

ecore::EClass_ptr PlatformPackage::getDataManager() const
{
    return m_DataManager;
}

e4c::tag_t PlatformPackage::getTag_DataManager() const
{
    return e4c::tag< DataManager >::get();
}

ecore::EClass_ptr PlatformPackage::getBindsTo() const
{
    return m_BindsTo;
}

e4c::tag_t PlatformPackage::getTag_BindsTo() const
{
    return e4c::tag< BindsTo >::get();
}

ecore::EClass_ptr PlatformPackage::getPlatformElement() const
{
    return m_PlatformElement;
}

e4c::tag_t PlatformPackage::getTag_PlatformElement() const
{
    return e4c::tag< PlatformElement >::get();
}

ecore::EClass_ptr PlatformPackage::getPlatformRelationship() const
{
    return m_PlatformRelationship;
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship() const
{
    return e4c::tag< PlatformRelationship >::get();
}

ecore::EClass_ptr PlatformPackage::getPlatformEvent() const
{
    return m_PlatformEvent;
}

e4c::tag_t PlatformPackage::getTag_PlatformEvent() const
{
    return e4c::tag< PlatformEvent >::get();
}

ecore::EClass_ptr PlatformPackage::getLockResource() const
{
    return m_LockResource;
}

e4c::tag_t PlatformPackage::getTag_LockResource() const
{
    return e4c::tag< LockResource >::get();
}

ecore::EClass_ptr PlatformPackage::getDeployedSoftwareSystem() const
{
    return m_DeployedSoftwareSystem;
}

e4c::tag_t PlatformPackage::getTag_DeployedSoftwareSystem() const
{
    return e4c::tag< DeployedSoftwareSystem >::get();
}

ecore::EClass_ptr PlatformPackage::getMachine() const
{
    return m_Machine;
}

e4c::tag_t PlatformPackage::getTag_Machine() const
{
    return e4c::tag< Machine >::get();
}

ecore::EClass_ptr PlatformPackage::getDeployedComponent() const
{
    return m_DeployedComponent;
}

e4c::tag_t PlatformPackage::getTag_DeployedComponent() const
{
    return e4c::tag< DeployedComponent >::get();
}

ecore::EClass_ptr PlatformPackage::getDeployedResource() const
{
    return m_DeployedResource;
}

e4c::tag_t PlatformPackage::getTag_DeployedResource() const
{
    return e4c::tag< DeployedResource >::get();
}

ecore::EClass_ptr PlatformPackage::getLoads() const
{
    return m_Loads;
}

e4c::tag_t PlatformPackage::getTag_Loads() const
{
    return e4c::tag< Loads >::get();
}

ecore::EClass_ptr PlatformPackage::getSpawns() const
{
    return m_Spawns;
}

e4c::tag_t PlatformPackage::getTag_Spawns() const
{
    return e4c::tag< Spawns >::get();
}

ecore::EClass_ptr PlatformPackage::getRuntimeResource() const
{
    return m_RuntimeResource;
}

e4c::tag_t PlatformPackage::getTag_RuntimeResource() const
{
    return e4c::tag< RuntimeResource >::get();
}

ecore::EClass_ptr PlatformPackage::getThread() const
{
    return m_Thread;
}

e4c::tag_t PlatformPackage::getTag_Thread() const
{
    return e4c::tag< Thread >::get();
}

ecore::EClass_ptr PlatformPackage::getProcess() const
{
    return m_Process;
}

e4c::tag_t PlatformPackage::getTag_Process() const
{
    return e4c::tag< Process >::get();
}

ecore::EClass_ptr PlatformPackage::getReadsResource() const
{
    return m_ReadsResource;
}

e4c::tag_t PlatformPackage::getTag_ReadsResource() const
{
    return e4c::tag< ReadsResource >::get();
}

ecore::EClass_ptr PlatformPackage::getWritesResource() const
{
    return m_WritesResource;
}

e4c::tag_t PlatformPackage::getTag_WritesResource() const
{
    return e4c::tag< WritesResource >::get();
}

ecore::EClass_ptr PlatformPackage::getManagesResource() const
{
    return m_ManagesResource;
}

e4c::tag_t PlatformPackage::getTag_ManagesResource() const
{
    return e4c::tag< ManagesResource >::get();
}

ecore::EClass_ptr PlatformPackage::getDefinedBy() const
{
    return m_DefinedBy;
}

e4c::tag_t PlatformPackage::getTag_DefinedBy() const
{
    return e4c::tag< DefinedBy >::get();
}

ecore::EClass_ptr PlatformPackage::getStreamResource() const
{
    return m_StreamResource;
}

e4c::tag_t PlatformPackage::getTag_StreamResource() const
{
    return e4c::tag< StreamResource >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__source() const
{
    return e4c::tag< AbstractPlatformElement__source_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__source() const
{
    return m_AbstractPlatformElement__source;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__relation() const
{
    return e4c::tag< AbstractPlatformElement__relation_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__relation() const
{
    return m_AbstractPlatformElement__relation;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__abstraction() const
{
    return e4c::tag< AbstractPlatformElement__abstraction_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__abstraction() const
{
    return m_AbstractPlatformElement__abstraction;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__implementation() const
{
    return e4c::tag< AbstractPlatformElement__implementation_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getAbstractPlatformElement__implementation() const
{
    return m_AbstractPlatformElement__implementation;
}

e4c::tag_t PlatformPackage::getTag_PlatformModel__platformElement() const
{
    return e4c::tag< PlatformModel__platformElement_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getPlatformModel__platformElement() const
{
    return m_PlatformModel__platformElement;
}

e4c::tag_t PlatformPackage::getTag_Requires__to() const
{
    return e4c::tag< Requires__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getRequires__to() const
{
    return m_Requires__to;
}

e4c::tag_t PlatformPackage::getTag_Requires__from() const
{
    return e4c::tag< Requires__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getRequires__from() const
{
    return m_Requires__from;
}

e4c::tag_t PlatformPackage::getTag_ResourceType__platformElement() const
{
    return e4c::tag< ResourceType__platformElement_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getResourceType__platformElement() const
{
    return m_ResourceType__platformElement;
}

e4c::tag_t PlatformPackage::getTag_PlatformAction__kind() const
{
    return e4c::tag< PlatformAction__kind_tag >::get();
}

ecore::EAttribute_ptr PlatformPackage::getPlatformAction__kind() const
{
    return m_PlatformAction__kind;
}

e4c::tag_t PlatformPackage::getTag_PlatformAction__platformElement() const
{
    return e4c::tag< PlatformAction__platformElement_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getPlatformAction__platformElement() const
{
    return m_PlatformAction__platformElement;
}

e4c::tag_t PlatformPackage::getTag_BindsTo__to() const
{
    return e4c::tag< BindsTo__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getBindsTo__to() const
{
    return m_BindsTo__to;
}

e4c::tag_t PlatformPackage::getTag_BindsTo__from() const
{
    return e4c::tag< BindsTo__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getBindsTo__from() const
{
    return m_BindsTo__from;
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship__to() const
{
    return e4c::tag< PlatformRelationship__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getPlatformRelationship__to() const
{
    return m_PlatformRelationship__to;
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship__from() const
{
    return e4c::tag< PlatformRelationship__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getPlatformRelationship__from() const
{
    return m_PlatformRelationship__from;
}

e4c::tag_t PlatformPackage::getTag_PlatformEvent__kind() const
{
    return e4c::tag< PlatformEvent__kind_tag >::get();
}

ecore::EAttribute_ptr PlatformPackage::getPlatformEvent__kind() const
{
    return m_PlatformEvent__kind;
}

e4c::tag_t PlatformPackage::getTag_DeployedSoftwareSystem__groupedComponent() const
{
    return e4c::tag< DeployedSoftwareSystem__groupedComponent_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getDeployedSoftwareSystem__groupedComponent() const
{
    return m_DeployedSoftwareSystem__groupedComponent;
}

e4c::tag_t PlatformPackage::getTag_Machine__deployedComponent() const
{
    return e4c::tag< Machine__deployedComponent_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getMachine__deployedComponent() const
{
    return m_Machine__deployedComponent;
}

e4c::tag_t PlatformPackage::getTag_Machine__deployedResource() const
{
    return e4c::tag< Machine__deployedResource_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getMachine__deployedResource() const
{
    return m_Machine__deployedResource;
}

e4c::tag_t PlatformPackage::getTag_DeployedComponent__groupedCode() const
{
    return e4c::tag< DeployedComponent__groupedCode_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getDeployedComponent__groupedCode() const
{
    return m_DeployedComponent__groupedCode;
}

e4c::tag_t PlatformPackage::getTag_DeployedResource__platformElement() const
{
    return e4c::tag< DeployedResource__platformElement_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getDeployedResource__platformElement() const
{
    return m_DeployedResource__platformElement;
}

e4c::tag_t PlatformPackage::getTag_Loads__to() const
{
    return e4c::tag< Loads__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getLoads__to() const
{
    return m_Loads__to;
}

e4c::tag_t PlatformPackage::getTag_Loads__from() const
{
    return e4c::tag< Loads__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getLoads__from() const
{
    return m_Loads__from;
}

e4c::tag_t PlatformPackage::getTag_Spawns__to() const
{
    return e4c::tag< Spawns__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getSpawns__to() const
{
    return m_Spawns__to;
}

e4c::tag_t PlatformPackage::getTag_Spawns__from() const
{
    return e4c::tag< Spawns__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getSpawns__from() const
{
    return m_Spawns__from;
}

e4c::tag_t PlatformPackage::getTag_ReadsResource__to() const
{
    return e4c::tag< ReadsResource__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getReadsResource__to() const
{
    return m_ReadsResource__to;
}

e4c::tag_t PlatformPackage::getTag_ReadsResource__from() const
{
    return e4c::tag< ReadsResource__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getReadsResource__from() const
{
    return m_ReadsResource__from;
}

e4c::tag_t PlatformPackage::getTag_WritesResource__to() const
{
    return e4c::tag< WritesResource__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getWritesResource__to() const
{
    return m_WritesResource__to;
}

e4c::tag_t PlatformPackage::getTag_WritesResource__from() const
{
    return e4c::tag< WritesResource__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getWritesResource__from() const
{
    return m_WritesResource__from;
}

e4c::tag_t PlatformPackage::getTag_ManagesResource__to() const
{
    return e4c::tag< ManagesResource__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getManagesResource__to() const
{
    return m_ManagesResource__to;
}

e4c::tag_t PlatformPackage::getTag_ManagesResource__from() const
{
    return e4c::tag< ManagesResource__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getManagesResource__from() const
{
    return m_ManagesResource__from;
}

e4c::tag_t PlatformPackage::getTag_DefinedBy__to() const
{
    return e4c::tag< DefinedBy__to_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getDefinedBy__to() const
{
    return m_DefinedBy__to;
}

e4c::tag_t PlatformPackage::getTag_DefinedBy__from() const
{
    return e4c::tag< DefinedBy__from_tag >::get();
}

ecore::EReference_ptr PlatformPackage::getDefinedBy__from() const
{
    return m_DefinedBy__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_platform()
{
    return ::kdm::platform::PlatformPackage::_instance();
}
