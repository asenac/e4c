#include "PlatformFactory.hpp"
#include "PlatformPackage.hpp"
#include "include.hpp"

using namespace kdm::platform;

PlatformFactory::PlatformFactory()
{
    // m_ePackage = PlatformPackage::_instance();
    // std::bind(&PlatformFactory::createPlatformModel, this);
    // m_ePackage->getTag_PlatformModel();
    // std::bind(&PlatformFactory::createRequires, this);
    // m_ePackage->getTag_Requires();
    // std::bind(&PlatformFactory::createResourceType, this);
    // m_ePackage->getTag_ResourceType();
    // std::bind(&PlatformFactory::createNamingResource, this);
    // m_ePackage->getTag_NamingResource();
    // std::bind(&PlatformFactory::createMarshalledResource, this);
    // m_ePackage->getTag_MarshalledResource();
    // std::bind(&PlatformFactory::createMessagingResource, this);
    // m_ePackage->getTag_MessagingResource();
    // std::bind(&PlatformFactory::createFileResource, this);
    // m_ePackage->getTag_FileResource();
    // std::bind(&PlatformFactory::createExecutionResource, this);
    // m_ePackage->getTag_ExecutionResource();
    // std::bind(&PlatformFactory::createPlatformAction, this);
    // m_ePackage->getTag_PlatformAction();
    // std::bind(&PlatformFactory::createExternalActor, this);
    // m_ePackage->getTag_ExternalActor();
    // std::bind(&PlatformFactory::createDataManager, this);
    // m_ePackage->getTag_DataManager();
    // std::bind(&PlatformFactory::createBindsTo, this);
    // m_ePackage->getTag_BindsTo();
    // std::bind(&PlatformFactory::createPlatformElement, this);
    // m_ePackage->getTag_PlatformElement();
    // std::bind(&PlatformFactory::createPlatformRelationship, this);
    // m_ePackage->getTag_PlatformRelationship();
    // std::bind(&PlatformFactory::createPlatformEvent, this);
    // m_ePackage->getTag_PlatformEvent();
    // std::bind(&PlatformFactory::createLockResource, this);
    // m_ePackage->getTag_LockResource();
    // std::bind(&PlatformFactory::createDeployedSoftwareSystem, this);
    // m_ePackage->getTag_DeployedSoftwareSystem();
    // std::bind(&PlatformFactory::createMachine, this);
    // m_ePackage->getTag_Machine();
    // std::bind(&PlatformFactory::createDeployedComponent, this);
    // m_ePackage->getTag_DeployedComponent();
    // std::bind(&PlatformFactory::createDeployedResource, this);
    // m_ePackage->getTag_DeployedResource();
    // std::bind(&PlatformFactory::createLoads, this);
    // m_ePackage->getTag_Loads();
    // std::bind(&PlatformFactory::createSpawns, this);
    // m_ePackage->getTag_Spawns();
    // std::bind(&PlatformFactory::createRuntimeResource, this);
    // m_ePackage->getTag_RuntimeResource();
    // std::bind(&PlatformFactory::createThread, this);
    // m_ePackage->getTag_Thread();
    // std::bind(&PlatformFactory::createProcess, this);
    // m_ePackage->getTag_Process();
    // std::bind(&PlatformFactory::createReadsResource, this);
    // m_ePackage->getTag_ReadsResource();
    // std::bind(&PlatformFactory::createWritesResource, this);
    // m_ePackage->getTag_WritesResource();
    // std::bind(&PlatformFactory::createManagesResource, this);
    // m_ePackage->getTag_ManagesResource();
    // std::bind(&PlatformFactory::createDefinedBy, this);
    // m_ePackage->getTag_DefinedBy();
    // std::bind(&PlatformFactory::createStreamResource, this);
    // m_ePackage->getTag_StreamResource();
}

const PlatformFactory_ptr PlatformFactory::_instance()
{
    static PlatformFactory __instance;
    return &__instance;
}

PlatformModel_ptr PlatformFactory::createPlatformModel() const
{
    return new PlatformModel();
}

Requires_ptr PlatformFactory::createRequires() const
{
    return new Requires();
}

ResourceType_ptr PlatformFactory::createResourceType() const
{
    return new ResourceType();
}

NamingResource_ptr PlatformFactory::createNamingResource() const
{
    return new NamingResource();
}

MarshalledResource_ptr PlatformFactory::createMarshalledResource() const
{
    return new MarshalledResource();
}

MessagingResource_ptr PlatformFactory::createMessagingResource() const
{
    return new MessagingResource();
}

FileResource_ptr PlatformFactory::createFileResource() const
{
    return new FileResource();
}

ExecutionResource_ptr PlatformFactory::createExecutionResource() const
{
    return new ExecutionResource();
}

PlatformAction_ptr PlatformFactory::createPlatformAction() const
{
    return new PlatformAction();
}

ExternalActor_ptr PlatformFactory::createExternalActor() const
{
    return new ExternalActor();
}

DataManager_ptr PlatformFactory::createDataManager() const
{
    return new DataManager();
}

BindsTo_ptr PlatformFactory::createBindsTo() const
{
    return new BindsTo();
}

PlatformElement_ptr PlatformFactory::createPlatformElement() const
{
    return new PlatformElement();
}

PlatformRelationship_ptr PlatformFactory::createPlatformRelationship() const
{
    return new PlatformRelationship();
}

PlatformEvent_ptr PlatformFactory::createPlatformEvent() const
{
    return new PlatformEvent();
}

LockResource_ptr PlatformFactory::createLockResource() const
{
    return new LockResource();
}

DeployedSoftwareSystem_ptr PlatformFactory::createDeployedSoftwareSystem() const
{
    return new DeployedSoftwareSystem();
}

Machine_ptr PlatformFactory::createMachine() const
{
    return new Machine();
}

DeployedComponent_ptr PlatformFactory::createDeployedComponent() const
{
    return new DeployedComponent();
}

DeployedResource_ptr PlatformFactory::createDeployedResource() const
{
    return new DeployedResource();
}

Loads_ptr PlatformFactory::createLoads() const
{
    return new Loads();
}

Spawns_ptr PlatformFactory::createSpawns() const
{
    return new Spawns();
}

RuntimeResource_ptr PlatformFactory::createRuntimeResource() const
{
    return new RuntimeResource();
}

Thread_ptr PlatformFactory::createThread() const
{
    return new Thread();
}

Process_ptr PlatformFactory::createProcess() const
{
    return new Process();
}

ReadsResource_ptr PlatformFactory::createReadsResource() const
{
    return new ReadsResource();
}

WritesResource_ptr PlatformFactory::createWritesResource() const
{
    return new WritesResource();
}

ManagesResource_ptr PlatformFactory::createManagesResource() const
{
    return new ManagesResource();
}

DefinedBy_ptr PlatformFactory::createDefinedBy() const
{
    return new DefinedBy();
}

StreamResource_ptr PlatformFactory::createStreamResource() const
{
    return new StreamResource();
}

