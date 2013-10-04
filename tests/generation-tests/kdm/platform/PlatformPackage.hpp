#ifndef EMF_CPP_KDM_PLATFORM_PACKAGE_HPP
#define EMF_CPP_KDM_PLATFORM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/platform/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace platform
{


class PlatformPackage : public ::ecore::EPackage
{
public:
    static const PlatformPackage_ptr _instance();

 	::ecore::EClass_ptr getAbstractPlatformElement() const;
 	::ecore::EClass_ptr getPlatformModel() const;
 	::ecore::EClass_ptr getAbstractPlatformRelationship() const;
 	::ecore::EClass_ptr getRequires() const;
 	::ecore::EClass_ptr getResourceType() const;
 	::ecore::EClass_ptr getNamingResource() const;
 	::ecore::EClass_ptr getMarshalledResource() const;
 	::ecore::EClass_ptr getMessagingResource() const;
 	::ecore::EClass_ptr getFileResource() const;
 	::ecore::EClass_ptr getExecutionResource() const;
 	::ecore::EClass_ptr getPlatformAction() const;
 	::ecore::EClass_ptr getExternalActor() const;
 	::ecore::EClass_ptr getDataManager() const;
 	::ecore::EClass_ptr getBindsTo() const;
 	::ecore::EClass_ptr getPlatformElement() const;
 	::ecore::EClass_ptr getPlatformRelationship() const;
 	::ecore::EClass_ptr getPlatformEvent() const;
 	::ecore::EClass_ptr getLockResource() const;
 	::ecore::EClass_ptr getDeployedSoftwareSystem() const;
 	::ecore::EClass_ptr getMachine() const;
 	::ecore::EClass_ptr getDeployedComponent() const;
 	::ecore::EClass_ptr getDeployedResource() const;
 	::ecore::EClass_ptr getLoads() const;
 	::ecore::EClass_ptr getSpawns() const;
 	::ecore::EClass_ptr getRuntimeResource() const;
 	::ecore::EClass_ptr getThread() const;
 	::ecore::EClass_ptr getProcess() const;
 	::ecore::EClass_ptr getReadsResource() const;
 	::ecore::EClass_ptr getWritesResource() const;
 	::ecore::EClass_ptr getManagesResource() const;
 	::ecore::EClass_ptr getDefinedBy() const;
 	::ecore::EClass_ptr getStreamResource() const;
 	
 	::ecore::EReference_ptr getAbstractPlatformElement__source() const;
 	::ecore::EReference_ptr getAbstractPlatformElement__relation() const;
 	::ecore::EReference_ptr getAbstractPlatformElement__abstraction() const;
 	::ecore::EReference_ptr getAbstractPlatformElement__implementation() const;
 	::ecore::EReference_ptr getPlatformModel__platformElement() const;
 	::ecore::EReference_ptr getRequires__to() const;
 	::ecore::EReference_ptr getRequires__from() const;
 	::ecore::EReference_ptr getResourceType__platformElement() const;
 	::ecore::EAttribute_ptr getPlatformAction__kind() const;
 	::ecore::EReference_ptr getPlatformAction__platformElement() const;
 	::ecore::EReference_ptr getBindsTo__to() const;
 	::ecore::EReference_ptr getBindsTo__from() const;
 	::ecore::EReference_ptr getPlatformRelationship__to() const;
 	::ecore::EReference_ptr getPlatformRelationship__from() const;
 	::ecore::EAttribute_ptr getPlatformEvent__kind() const;
 	::ecore::EReference_ptr getDeployedSoftwareSystem__groupedComponent() const;
 	::ecore::EReference_ptr getMachine__deployedComponent() const;
 	::ecore::EReference_ptr getMachine__deployedResource() const;
 	::ecore::EReference_ptr getDeployedComponent__groupedCode() const;
 	::ecore::EReference_ptr getDeployedResource__platformElement() const;
 	::ecore::EReference_ptr getLoads__to() const;
 	::ecore::EReference_ptr getLoads__from() const;
 	::ecore::EReference_ptr getSpawns__to() const;
 	::ecore::EReference_ptr getSpawns__from() const;
 	::ecore::EReference_ptr getReadsResource__to() const;
 	::ecore::EReference_ptr getReadsResource__from() const;
 	::ecore::EReference_ptr getWritesResource__to() const;
 	::ecore::EReference_ptr getWritesResource__from() const;
 	::ecore::EReference_ptr getManagesResource__to() const;
 	::ecore::EReference_ptr getManagesResource__from() const;
 	::ecore::EReference_ptr getDefinedBy__to() const;
 	::ecore::EReference_ptr getDefinedBy__from() const;

 	e4c::tag_t getTag_AbstractPlatformElement() const;
 	e4c::tag_t getTag_PlatformModel() const;
 	e4c::tag_t getTag_AbstractPlatformRelationship() const;
 	e4c::tag_t getTag_Requires() const;
 	e4c::tag_t getTag_ResourceType() const;
 	e4c::tag_t getTag_NamingResource() const;
 	e4c::tag_t getTag_MarshalledResource() const;
 	e4c::tag_t getTag_MessagingResource() const;
 	e4c::tag_t getTag_FileResource() const;
 	e4c::tag_t getTag_ExecutionResource() const;
 	e4c::tag_t getTag_PlatformAction() const;
 	e4c::tag_t getTag_ExternalActor() const;
 	e4c::tag_t getTag_DataManager() const;
 	e4c::tag_t getTag_BindsTo() const;
 	e4c::tag_t getTag_PlatformElement() const;
 	e4c::tag_t getTag_PlatformRelationship() const;
 	e4c::tag_t getTag_PlatformEvent() const;
 	e4c::tag_t getTag_LockResource() const;
 	e4c::tag_t getTag_DeployedSoftwareSystem() const;
 	e4c::tag_t getTag_Machine() const;
 	e4c::tag_t getTag_DeployedComponent() const;
 	e4c::tag_t getTag_DeployedResource() const;
 	e4c::tag_t getTag_Loads() const;
 	e4c::tag_t getTag_Spawns() const;
 	e4c::tag_t getTag_RuntimeResource() const;
 	e4c::tag_t getTag_Thread() const;
 	e4c::tag_t getTag_Process() const;
 	e4c::tag_t getTag_ReadsResource() const;
 	e4c::tag_t getTag_WritesResource() const;
 	e4c::tag_t getTag_ManagesResource() const;
 	e4c::tag_t getTag_DefinedBy() const;
 	e4c::tag_t getTag_StreamResource() const;
 
 	e4c::tag_t getTag_AbstractPlatformElement__source() const;
 	e4c::tag_t getTag_AbstractPlatformElement__relation() const;
 	e4c::tag_t getTag_AbstractPlatformElement__abstraction() const;
 	e4c::tag_t getTag_AbstractPlatformElement__implementation() const;
 	e4c::tag_t getTag_PlatformModel__platformElement() const;
 	e4c::tag_t getTag_Requires__to() const;
 	e4c::tag_t getTag_Requires__from() const;
 	e4c::tag_t getTag_ResourceType__platformElement() const;
 	e4c::tag_t getTag_PlatformAction__kind() const;
 	e4c::tag_t getTag_PlatformAction__platformElement() const;
 	e4c::tag_t getTag_BindsTo__to() const;
 	e4c::tag_t getTag_BindsTo__from() const;
 	e4c::tag_t getTag_PlatformRelationship__to() const;
 	e4c::tag_t getTag_PlatformRelationship__from() const;
 	e4c::tag_t getTag_PlatformEvent__kind() const;
 	e4c::tag_t getTag_DeployedSoftwareSystem__groupedComponent() const;
 	e4c::tag_t getTag_Machine__deployedComponent() const;
 	e4c::tag_t getTag_Machine__deployedResource() const;
 	e4c::tag_t getTag_DeployedComponent__groupedCode() const;
 	e4c::tag_t getTag_DeployedResource__platformElement() const;
 	e4c::tag_t getTag_Loads__to() const;
 	e4c::tag_t getTag_Loads__from() const;
 	e4c::tag_t getTag_Spawns__to() const;
 	e4c::tag_t getTag_Spawns__from() const;
 	e4c::tag_t getTag_ReadsResource__to() const;
 	e4c::tag_t getTag_ReadsResource__from() const;
 	e4c::tag_t getTag_WritesResource__to() const;
 	e4c::tag_t getTag_WritesResource__from() const;
 	e4c::tag_t getTag_ManagesResource__to() const;
 	e4c::tag_t getTag_ManagesResource__from() const;
 	e4c::tag_t getTag_DefinedBy__to() const;
 	e4c::tag_t getTag_DefinedBy__from() const;

protected:
    PlatformPackage();
    
 	::ecore::EClass_ptr m_AbstractPlatformElement;
 	::ecore::EClass_ptr m_PlatformModel;
 	::ecore::EClass_ptr m_AbstractPlatformRelationship;
 	::ecore::EClass_ptr m_Requires;
 	::ecore::EClass_ptr m_ResourceType;
 	::ecore::EClass_ptr m_NamingResource;
 	::ecore::EClass_ptr m_MarshalledResource;
 	::ecore::EClass_ptr m_MessagingResource;
 	::ecore::EClass_ptr m_FileResource;
 	::ecore::EClass_ptr m_ExecutionResource;
 	::ecore::EClass_ptr m_PlatformAction;
 	::ecore::EClass_ptr m_ExternalActor;
 	::ecore::EClass_ptr m_DataManager;
 	::ecore::EClass_ptr m_BindsTo;
 	::ecore::EClass_ptr m_PlatformElement;
 	::ecore::EClass_ptr m_PlatformRelationship;
 	::ecore::EClass_ptr m_PlatformEvent;
 	::ecore::EClass_ptr m_LockResource;
 	::ecore::EClass_ptr m_DeployedSoftwareSystem;
 	::ecore::EClass_ptr m_Machine;
 	::ecore::EClass_ptr m_DeployedComponent;
 	::ecore::EClass_ptr m_DeployedResource;
 	::ecore::EClass_ptr m_Loads;
 	::ecore::EClass_ptr m_Spawns;
 	::ecore::EClass_ptr m_RuntimeResource;
 	::ecore::EClass_ptr m_Thread;
 	::ecore::EClass_ptr m_Process;
 	::ecore::EClass_ptr m_ReadsResource;
 	::ecore::EClass_ptr m_WritesResource;
 	::ecore::EClass_ptr m_ManagesResource;
 	::ecore::EClass_ptr m_DefinedBy;
 	::ecore::EClass_ptr m_StreamResource;
 	::ecore::EReference_ptr m_AbstractPlatformElement__source;
 	::ecore::EReference_ptr m_AbstractPlatformElement__relation;
 	::ecore::EReference_ptr m_AbstractPlatformElement__abstraction;
 	::ecore::EReference_ptr m_AbstractPlatformElement__implementation;
 	::ecore::EReference_ptr m_PlatformModel__platformElement;
 	::ecore::EReference_ptr m_Requires__to;
 	::ecore::EReference_ptr m_Requires__from;
 	::ecore::EReference_ptr m_ResourceType__platformElement;
 	::ecore::EAttribute_ptr m_PlatformAction__kind;
 	::ecore::EReference_ptr m_PlatformAction__platformElement;
 	::ecore::EReference_ptr m_BindsTo__to;
 	::ecore::EReference_ptr m_BindsTo__from;
 	::ecore::EReference_ptr m_PlatformRelationship__to;
 	::ecore::EReference_ptr m_PlatformRelationship__from;
 	::ecore::EAttribute_ptr m_PlatformEvent__kind;
 	::ecore::EReference_ptr m_DeployedSoftwareSystem__groupedComponent;
 	::ecore::EReference_ptr m_Machine__deployedComponent;
 	::ecore::EReference_ptr m_Machine__deployedResource;
 	::ecore::EReference_ptr m_DeployedComponent__groupedCode;
 	::ecore::EReference_ptr m_DeployedResource__platformElement;
 	::ecore::EReference_ptr m_Loads__to;
 	::ecore::EReference_ptr m_Loads__from;
 	::ecore::EReference_ptr m_Spawns__to;
 	::ecore::EReference_ptr m_Spawns__from;
 	::ecore::EReference_ptr m_ReadsResource__to;
 	::ecore::EReference_ptr m_ReadsResource__from;
 	::ecore::EReference_ptr m_WritesResource__to;
 	::ecore::EReference_ptr m_WritesResource__from;
 	::ecore::EReference_ptr m_ManagesResource__to;
 	::ecore::EReference_ptr m_ManagesResource__from;
 	::ecore::EReference_ptr m_DefinedBy__to;
 	::ecore::EReference_ptr m_DefinedBy__from;
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PACKAGE_HPP
