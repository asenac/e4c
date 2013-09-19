#include "PlatformPackage.hpp"
#include "PlatformFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::platform;

PlatformPackage::PlatformPackage()
{
	m_eFactoryInstance = PlatformFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const PlatformPackage_ptr PlatformPackage::_instance()
{
	static PlatformPackage __instance;
	return &__instance;
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement() const
{
	return e4c::tag< AbstractPlatformElement >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformModel() const
{
	return e4c::tag< PlatformModel >::get();
}
 
e4c::tag_t PlatformPackage::getTag_AbstractPlatformRelationship() const
{
	return e4c::tag< AbstractPlatformRelationship >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Requires() const
{
	return e4c::tag< Requires >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ResourceType() const
{
	return e4c::tag< ResourceType >::get();
}
 
e4c::tag_t PlatformPackage::getTag_NamingResource() const
{
	return e4c::tag< NamingResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_MarshalledResource() const
{
	return e4c::tag< MarshalledResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_MessagingResource() const
{
	return e4c::tag< MessagingResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_FileResource() const
{
	return e4c::tag< FileResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ExecutionResource() const
{
	return e4c::tag< ExecutionResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformAction() const
{
	return e4c::tag< PlatformAction >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ExternalActor() const
{
	return e4c::tag< ExternalActor >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DataManager() const
{
	return e4c::tag< DataManager >::get();
}
 
e4c::tag_t PlatformPackage::getTag_BindsTo() const
{
	return e4c::tag< BindsTo >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformElement() const
{
	return e4c::tag< PlatformElement >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformRelationship() const
{
	return e4c::tag< PlatformRelationship >::get();
}
 
e4c::tag_t PlatformPackage::getTag_PlatformEvent() const
{
	return e4c::tag< PlatformEvent >::get();
}
 
e4c::tag_t PlatformPackage::getTag_LockResource() const
{
	return e4c::tag< LockResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DeployedSoftwareSystem() const
{
	return e4c::tag< DeployedSoftwareSystem >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Machine() const
{
	return e4c::tag< Machine >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DeployedComponent() const
{
	return e4c::tag< DeployedComponent >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DeployedResource() const
{
	return e4c::tag< DeployedResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Loads() const
{
	return e4c::tag< Loads >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Spawns() const
{
	return e4c::tag< Spawns >::get();
}
 
e4c::tag_t PlatformPackage::getTag_RuntimeResource() const
{
	return e4c::tag< RuntimeResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Thread() const
{
	return e4c::tag< Thread >::get();
}
 
e4c::tag_t PlatformPackage::getTag_Process() const
{
	return e4c::tag< Process >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ReadsResource() const
{
	return e4c::tag< ReadsResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_WritesResource() const
{
	return e4c::tag< WritesResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_ManagesResource() const
{
	return e4c::tag< ManagesResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_DefinedBy() const
{
	return e4c::tag< DefinedBy >::get();
}
 
e4c::tag_t PlatformPackage::getTag_StreamResource() const
{
	return e4c::tag< StreamResource >::get();
}
 
e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__source() const
{
	return e4c::tag< AbstractPlatformElement__source_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__relation() const
{
	return e4c::tag< AbstractPlatformElement__relation_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__abstraction() const
{
	return e4c::tag< AbstractPlatformElement__abstraction_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_AbstractPlatformElement__implementation() const
{
	return e4c::tag< AbstractPlatformElement__implementation_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformModel__platformElement() const
{
	return e4c::tag< PlatformModel__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Requires__to() const
{
	return e4c::tag< Requires__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Requires__from() const
{
	return e4c::tag< Requires__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ResourceType__platformElement() const
{
	return e4c::tag< ResourceType__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformAction__kind() const
{
	return e4c::tag< PlatformAction__kind_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformAction__platformElement() const
{
	return e4c::tag< PlatformAction__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_BindsTo__to() const
{
	return e4c::tag< BindsTo__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_BindsTo__from() const
{
	return e4c::tag< BindsTo__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship__to() const
{
	return e4c::tag< PlatformRelationship__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformRelationship__from() const
{
	return e4c::tag< PlatformRelationship__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_PlatformEvent__kind() const
{
	return e4c::tag< PlatformEvent__kind_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DeployedSoftwareSystem__groupedComponent() const
{
	return e4c::tag< DeployedSoftwareSystem__groupedComponent_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Machine__deployedComponent() const
{
	return e4c::tag< Machine__deployedComponent_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Machine__deployedResource() const
{
	return e4c::tag< Machine__deployedResource_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DeployedComponent__groupedCode() const
{
	return e4c::tag< DeployedComponent__groupedCode_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DeployedResource__platformElement() const
{
	return e4c::tag< DeployedResource__platformElement_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Loads__to() const
{
	return e4c::tag< Loads__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Loads__from() const
{
	return e4c::tag< Loads__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Spawns__to() const
{
	return e4c::tag< Spawns__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_Spawns__from() const
{
	return e4c::tag< Spawns__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ReadsResource__to() const
{
	return e4c::tag< ReadsResource__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ReadsResource__from() const
{
	return e4c::tag< ReadsResource__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_WritesResource__to() const
{
	return e4c::tag< WritesResource__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_WritesResource__from() const
{
	return e4c::tag< WritesResource__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ManagesResource__to() const
{
	return e4c::tag< ManagesResource__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_ManagesResource__from() const
{
	return e4c::tag< ManagesResource__from_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DefinedBy__to() const
{
	return e4c::tag< DefinedBy__to_tag >::get();
}

e4c::tag_t PlatformPackage::getTag_DefinedBy__from() const
{
	return e4c::tag< DefinedBy__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_platform()
{
	return ::kdm::platform::PlatformPackage::_instance();
}
