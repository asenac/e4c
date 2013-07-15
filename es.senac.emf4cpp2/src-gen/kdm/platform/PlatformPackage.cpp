#include "PlatformPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::platform;

PlatformPackage::PlatformPackage()
{
}

PlatformPackage_ptr PlatformPackage::_instance()
{
	static PlatformPackage __instance;
	return &__instance;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement()
{
	return e4c::tag< AbstractPlatformElement >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformModel()
{
	return e4c::tag< PlatformModel >::get();
}
 
e4c::tag_t PlatformPackage::getTag_AbstractPlatformRelationship()
{
	return e4c::tag< AbstractPlatformRelationship >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Requires()
{
	return e4c::tag< Requires >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ResourceType()
{
	return e4c::tag< ResourceType >::get();
}
 
e4c::tag_t PlatformPackage::getTag_NamingResource()
{
	return e4c::tag< NamingResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_MarshalledResource()
{
	return e4c::tag< MarshalledResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_MessagingResource()
{
	return e4c::tag< MessagingResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_FileResource()
{
	return e4c::tag< FileResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ExecutionResource()
{
	return e4c::tag< ExecutionResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformAction()
{
	return e4c::tag< PlatformAction >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ExternalActor()
{
	return e4c::tag< ExternalActor >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DataManager()
{
	return e4c::tag< DataManager >::get();
}
 
e4c::tag_t PlatformPackage::getTag_BindsTo()
{
	return e4c::tag< BindsTo >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformElement()
{
	return e4c::tag< PlatformElement >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformRelationship()
{
	return e4c::tag< PlatformRelationship >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformEvent()
{
	return e4c::tag< PlatformEvent >::get();
}
 
e4c::tag_t PlatformPackage::getTag_LockResource()
{
	return e4c::tag< LockResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DeployedSoftwareSystem()
{
	return e4c::tag< DeployedSoftwareSystem >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Machine()
{
	return e4c::tag< Machine >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DeployedComponent()
{
	return e4c::tag< DeployedComponent >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DeployedResource()
{
	return e4c::tag< DeployedResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Loads()
{
	return e4c::tag< Loads >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Spawns()
{
	return e4c::tag< Spawns >::get();
}
 
e4c::tag_t PlatformPackage::getTag_RuntimeResource()
{
	return e4c::tag< RuntimeResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Thread()
{
	return e4c::tag< Thread >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Process()
{
	return e4c::tag< Process >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ReadsResource()
{
	return e4c::tag< ReadsResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_WritesResource()
{
	return e4c::tag< WritesResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ManagesResource()
{
	return e4c::tag< ManagesResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DefinedBy()
{
	return e4c::tag< DefinedBy >::get();
}
 
e4c::tag_t PlatformPackage::getTag_StreamResource()
{
	return e4c::tag< StreamResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__source()
{
	return e4c::tag< AbstractPlatformElement__source_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__relation()
{
	return e4c::tag< AbstractPlatformElement__relation_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__abstraction()
{
	return e4c::tag< AbstractPlatformElement__abstraction_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__implementation()
{
	return e4c::tag< AbstractPlatformElement__implementation_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformModel__platformElement()
{
	return e4c::tag< PlatformModel__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Requires__to()
{
	return e4c::tag< Requires__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Requires__from()
{
	return e4c::tag< Requires__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ResourceType__platformElement()
{
	return e4c::tag< ResourceType__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformAction__kind()
{
	return e4c::tag< PlatformAction__kind_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformAction__platformElement()
{
	return e4c::tag< PlatformAction__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_BindsTo__to()
{
	return e4c::tag< BindsTo__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_BindsTo__from()
{
	return e4c::tag< BindsTo__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship__to()
{
	return e4c::tag< PlatformRelationship__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship__from()
{
	return e4c::tag< PlatformRelationship__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformEvent__kind()
{
	return e4c::tag< PlatformEvent__kind_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DeployedSoftwareSystem__groupedComponent()
{
	return e4c::tag< DeployedSoftwareSystem__groupedComponent_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Machine__deployedComponent()
{
	return e4c::tag< Machine__deployedComponent_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Machine__deployedResource()
{
	return e4c::tag< Machine__deployedResource_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DeployedComponent__groupedCode()
{
	return e4c::tag< DeployedComponent__groupedCode_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DeployedResource__platformElement()
{
	return e4c::tag< DeployedResource__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Loads__to()
{
	return e4c::tag< Loads__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Loads__from()
{
	return e4c::tag< Loads__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Spawns__to()
{
	return e4c::tag< Spawns__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Spawns__from()
{
	return e4c::tag< Spawns__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ReadsResource__to()
{
	return e4c::tag< ReadsResource__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ReadsResource__from()
{
	return e4c::tag< ReadsResource__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_WritesResource__to()
{
	return e4c::tag< WritesResource__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_WritesResource__from()
{
	return e4c::tag< WritesResource__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ManagesResource__to()
{
	return e4c::tag< ManagesResource__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ManagesResource__from()
{
	return e4c::tag< ManagesResource__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DefinedBy__to()
{
	return e4c::tag< DefinedBy__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DefinedBy__from()
{
	return e4c::tag< DefinedBy__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_platform()
{
	return ::kdm::platform::PlatformPackage::_instance();
}
