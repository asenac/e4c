#ifndef EMF_CPP_KDM_PLATFORM_PACKAGE_HPP
#define EMF_CPP_KDM_PLATFORM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/platform/fwd.hpp>

namespace kdm
{
namespace platform
{


class PlatformPackage : public ::ecore::EPackage
{
public:
    static const PlatformPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PACKAGE_HPP
