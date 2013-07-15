#ifndef EMF_CPP_KDM_PLATFORM_PACKAGE_HPP
#define EMF_CPP_KDM_PLATFORM_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/platform/fwd.hpp>

namespace kdm
{
namespace platform
{


class PlatformPackage : public ::ecore::EPackage
{
public:
    static PlatformPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractPlatformElement();
 	e4c::tag_t getTag_PlatformModel();
 	e4c::tag_t getTag_AbstractPlatformRelationship();
 	e4c::tag_t getTag_Requires();
 	e4c::tag_t getTag_ResourceType();
 	e4c::tag_t getTag_NamingResource();
 	e4c::tag_t getTag_MarshalledResource();
 	e4c::tag_t getTag_MessagingResource();
 	e4c::tag_t getTag_FileResource();
 	e4c::tag_t getTag_ExecutionResource();
 	e4c::tag_t getTag_PlatformAction();
 	e4c::tag_t getTag_ExternalActor();
 	e4c::tag_t getTag_DataManager();
 	e4c::tag_t getTag_BindsTo();
 	e4c::tag_t getTag_PlatformElement();
 	e4c::tag_t getTag_PlatformRelationship();
 	e4c::tag_t getTag_PlatformEvent();
 	e4c::tag_t getTag_LockResource();
 	e4c::tag_t getTag_DeployedSoftwareSystem();
 	e4c::tag_t getTag_Machine();
 	e4c::tag_t getTag_DeployedComponent();
 	e4c::tag_t getTag_DeployedResource();
 	e4c::tag_t getTag_Loads();
 	e4c::tag_t getTag_Spawns();
 	e4c::tag_t getTag_RuntimeResource();
 	e4c::tag_t getTag_Thread();
 	e4c::tag_t getTag_Process();
 	e4c::tag_t getTag_ReadsResource();
 	e4c::tag_t getTag_WritesResource();
 	e4c::tag_t getTag_ManagesResource();
 	e4c::tag_t getTag_DefinedBy();
 	e4c::tag_t getTag_StreamResource();
 
 	// Structural features
 	e4c::tag_t getTag_AbstractPlatformElement__source();
 	e4c::tag_t getTag_AbstractPlatformElement__relation();
 	e4c::tag_t getTag_AbstractPlatformElement__abstraction();
 	e4c::tag_t getTag_AbstractPlatformElement__implementation();
 	e4c::tag_t getTag_PlatformModel__platformElement();
 	e4c::tag_t getTag_Requires__to();
 	e4c::tag_t getTag_Requires__from();
 	e4c::tag_t getTag_ResourceType__platformElement();
 	e4c::tag_t getTag_PlatformAction__kind();
 	e4c::tag_t getTag_PlatformAction__platformElement();
 	e4c::tag_t getTag_BindsTo__to();
 	e4c::tag_t getTag_BindsTo__from();
 	e4c::tag_t getTag_PlatformRelationship__to();
 	e4c::tag_t getTag_PlatformRelationship__from();
 	e4c::tag_t getTag_PlatformEvent__kind();
 	e4c::tag_t getTag_DeployedSoftwareSystem__groupedComponent();
 	e4c::tag_t getTag_Machine__deployedComponent();
 	e4c::tag_t getTag_Machine__deployedResource();
 	e4c::tag_t getTag_DeployedComponent__groupedCode();
 	e4c::tag_t getTag_DeployedResource__platformElement();
 	e4c::tag_t getTag_Loads__to();
 	e4c::tag_t getTag_Loads__from();
 	e4c::tag_t getTag_Spawns__to();
 	e4c::tag_t getTag_Spawns__from();
 	e4c::tag_t getTag_ReadsResource__to();
 	e4c::tag_t getTag_ReadsResource__from();
 	e4c::tag_t getTag_WritesResource__to();
 	e4c::tag_t getTag_WritesResource__from();
 	e4c::tag_t getTag_ManagesResource__to();
 	e4c::tag_t getTag_ManagesResource__from();
 	e4c::tag_t getTag_DefinedBy__to();
 	e4c::tag_t getTag_DefinedBy__from();

protected:
    PlatformPackage();
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PACKAGE_HPP
