#ifndef EMF_CPP_KDM_PLATFORM_FWD_HPP
#define EMF_CPP_KDM_PLATFORM_FWD_HPP


namespace kdm
{
namespace platform
{


class PlatformPackage;
typedef PlatformPackage * PlatformPackage_ptr;
class PlatformFactory;
typedef PlatformFactory * PlatformFactory_ptr;

// Data types


// Classes
class AbstractPlatformElement;
typedef AbstractPlatformElement* AbstractPlatformElement_ptr;
class PlatformModel;
typedef PlatformModel* PlatformModel_ptr;
class AbstractPlatformRelationship;
typedef AbstractPlatformRelationship* AbstractPlatformRelationship_ptr;
class Requires;
typedef Requires* Requires_ptr;
class ResourceType;
typedef ResourceType* ResourceType_ptr;
class NamingResource;
typedef NamingResource* NamingResource_ptr;
class MarshalledResource;
typedef MarshalledResource* MarshalledResource_ptr;
class MessagingResource;
typedef MessagingResource* MessagingResource_ptr;
class FileResource;
typedef FileResource* FileResource_ptr;
class ExecutionResource;
typedef ExecutionResource* ExecutionResource_ptr;
class PlatformAction;
typedef PlatformAction* PlatformAction_ptr;
class ExternalActor;
typedef ExternalActor* ExternalActor_ptr;
class DataManager;
typedef DataManager* DataManager_ptr;
class BindsTo;
typedef BindsTo* BindsTo_ptr;
class PlatformElement;
typedef PlatformElement* PlatformElement_ptr;
class PlatformRelationship;
typedef PlatformRelationship* PlatformRelationship_ptr;
class PlatformEvent;
typedef PlatformEvent* PlatformEvent_ptr;
class LockResource;
typedef LockResource* LockResource_ptr;
class DeployedSoftwareSystem;
typedef DeployedSoftwareSystem* DeployedSoftwareSystem_ptr;
class Machine;
typedef Machine* Machine_ptr;
class DeployedComponent;
typedef DeployedComponent* DeployedComponent_ptr;
class DeployedResource;
typedef DeployedResource* DeployedResource_ptr;
class Loads;
typedef Loads* Loads_ptr;
class Spawns;
typedef Spawns* Spawns_ptr;
class RuntimeResource;
typedef RuntimeResource* RuntimeResource_ptr;
class Thread;
typedef Thread* Thread_ptr;
class Process;
typedef Process* Process_ptr;
class ReadsResource;
typedef ReadsResource* ReadsResource_ptr;
class WritesResource;
typedef WritesResource* WritesResource_ptr;
class ManagesResource;
typedef ManagesResource* ManagesResource_ptr;
class DefinedBy;
typedef DefinedBy* DefinedBy_ptr;
class StreamResource;
typedef StreamResource* StreamResource_ptr;


// Structural features
struct AbstractPlatformElement__source_tag;
struct AbstractPlatformElement__relation_tag;
struct AbstractPlatformElement__abstraction_tag;
struct AbstractPlatformElement__implementation_tag;
struct PlatformModel__platformElement_tag;
struct Requires__to_tag;
struct Requires__from_tag;
struct ResourceType__platformElement_tag;
struct PlatformAction__kind_tag;
struct PlatformAction__platformElement_tag;
struct BindsTo__to_tag;
struct BindsTo__from_tag;
struct PlatformRelationship__to_tag;
struct PlatformRelationship__from_tag;
struct PlatformEvent__kind_tag;
struct DeployedSoftwareSystem__groupedComponent_tag;
struct Machine__deployedComponent_tag;
struct Machine__deployedResource_tag;
struct DeployedComponent__groupedCode_tag;
struct DeployedResource__platformElement_tag;
struct Loads__to_tag;
struct Loads__from_tag;
struct Spawns__to_tag;
struct Spawns__from_tag;
struct ReadsResource__to_tag;
struct ReadsResource__from_tag;
struct WritesResource__to_tag;
struct WritesResource__from_tag;
struct ManagesResource__to_tag;
struct ManagesResource__from_tag;
struct DefinedBy__to_tag;
struct DefinedBy__from_tag;


} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_FWD_HPP
