#ifndef EMF_CPP_KDM_PLATFORM_FACTORY_HPP
#define EMF_CPP_KDM_PLATFORM_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/platform/fwd.hpp>

namespace kdm
{
namespace platform
{


class PlatformFactory : public ::ecore::EFactory
{
public:

    static const PlatformFactory_ptr _instance();

    PlatformModel_ptr createPlatformModel() const;
    Requires_ptr createRequires() const;
    ResourceType_ptr createResourceType() const;
    NamingResource_ptr createNamingResource() const;
    MarshalledResource_ptr createMarshalledResource() const;
    MessagingResource_ptr createMessagingResource() const;
    FileResource_ptr createFileResource() const;
    ExecutionResource_ptr createExecutionResource() const;
    PlatformAction_ptr createPlatformAction() const;
    ExternalActor_ptr createExternalActor() const;
    DataManager_ptr createDataManager() const;
    BindsTo_ptr createBindsTo() const;
    PlatformElement_ptr createPlatformElement() const;
    PlatformRelationship_ptr createPlatformRelationship() const;
    PlatformEvent_ptr createPlatformEvent() const;
    LockResource_ptr createLockResource() const;
    DeployedSoftwareSystem_ptr createDeployedSoftwareSystem() const;
    Machine_ptr createMachine() const;
    DeployedComponent_ptr createDeployedComponent() const;
    DeployedResource_ptr createDeployedResource() const;
    Loads_ptr createLoads() const;
    Spawns_ptr createSpawns() const;
    RuntimeResource_ptr createRuntimeResource() const;
    Thread_ptr createThread() const;
    Process_ptr createProcess() const;
    ReadsResource_ptr createReadsResource() const;
    WritesResource_ptr createWritesResource() const;
    ManagesResource_ptr createManagesResource() const;
    DefinedBy_ptr createDefinedBy() const;
    StreamResource_ptr createStreamResource() const;

protected:

    PlatformFactory();
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_FACTORY_HPP
