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
	
	::ecore::EClass_ptr AbstractPlatformElement_ = ecoreFactory->createEClass();
	AbstractPlatformElement_->setName("AbstractPlatformElement");
	// m_eClassifiers.push_back(AbstractPlatformElement_);
	::ecore::EClass_ptr PlatformModel_ = ecoreFactory->createEClass();
	PlatformModel_->setName("PlatformModel");
	// m_eClassifiers.push_back(PlatformModel_);
	::ecore::EClass_ptr AbstractPlatformRelationship_ = ecoreFactory->createEClass();
	AbstractPlatformRelationship_->setName("AbstractPlatformRelationship");
	// m_eClassifiers.push_back(AbstractPlatformRelationship_);
	::ecore::EClass_ptr Requires_ = ecoreFactory->createEClass();
	Requires_->setName("Requires");
	// m_eClassifiers.push_back(Requires_);
	::ecore::EClass_ptr ResourceType_ = ecoreFactory->createEClass();
	ResourceType_->setName("ResourceType");
	// m_eClassifiers.push_back(ResourceType_);
	::ecore::EClass_ptr NamingResource_ = ecoreFactory->createEClass();
	NamingResource_->setName("NamingResource");
	// m_eClassifiers.push_back(NamingResource_);
	::ecore::EClass_ptr MarshalledResource_ = ecoreFactory->createEClass();
	MarshalledResource_->setName("MarshalledResource");
	// m_eClassifiers.push_back(MarshalledResource_);
	::ecore::EClass_ptr MessagingResource_ = ecoreFactory->createEClass();
	MessagingResource_->setName("MessagingResource");
	// m_eClassifiers.push_back(MessagingResource_);
	::ecore::EClass_ptr FileResource_ = ecoreFactory->createEClass();
	FileResource_->setName("FileResource");
	// m_eClassifiers.push_back(FileResource_);
	::ecore::EClass_ptr ExecutionResource_ = ecoreFactory->createEClass();
	ExecutionResource_->setName("ExecutionResource");
	// m_eClassifiers.push_back(ExecutionResource_);
	::ecore::EClass_ptr PlatformAction_ = ecoreFactory->createEClass();
	PlatformAction_->setName("PlatformAction");
	// m_eClassifiers.push_back(PlatformAction_);
	::ecore::EClass_ptr ExternalActor_ = ecoreFactory->createEClass();
	ExternalActor_->setName("ExternalActor");
	// m_eClassifiers.push_back(ExternalActor_);
	::ecore::EClass_ptr DataManager_ = ecoreFactory->createEClass();
	DataManager_->setName("DataManager");
	// m_eClassifiers.push_back(DataManager_);
	::ecore::EClass_ptr BindsTo_ = ecoreFactory->createEClass();
	BindsTo_->setName("BindsTo");
	// m_eClassifiers.push_back(BindsTo_);
	::ecore::EClass_ptr PlatformElement_ = ecoreFactory->createEClass();
	PlatformElement_->setName("PlatformElement");
	// m_eClassifiers.push_back(PlatformElement_);
	::ecore::EClass_ptr PlatformRelationship_ = ecoreFactory->createEClass();
	PlatformRelationship_->setName("PlatformRelationship");
	// m_eClassifiers.push_back(PlatformRelationship_);
	::ecore::EClass_ptr PlatformEvent_ = ecoreFactory->createEClass();
	PlatformEvent_->setName("PlatformEvent");
	// m_eClassifiers.push_back(PlatformEvent_);
	::ecore::EClass_ptr LockResource_ = ecoreFactory->createEClass();
	LockResource_->setName("LockResource");
	// m_eClassifiers.push_back(LockResource_);
	::ecore::EClass_ptr DeployedSoftwareSystem_ = ecoreFactory->createEClass();
	DeployedSoftwareSystem_->setName("DeployedSoftwareSystem");
	// m_eClassifiers.push_back(DeployedSoftwareSystem_);
	::ecore::EClass_ptr Machine_ = ecoreFactory->createEClass();
	Machine_->setName("Machine");
	// m_eClassifiers.push_back(Machine_);
	::ecore::EClass_ptr DeployedComponent_ = ecoreFactory->createEClass();
	DeployedComponent_->setName("DeployedComponent");
	// m_eClassifiers.push_back(DeployedComponent_);
	::ecore::EClass_ptr DeployedResource_ = ecoreFactory->createEClass();
	DeployedResource_->setName("DeployedResource");
	// m_eClassifiers.push_back(DeployedResource_);
	::ecore::EClass_ptr Loads_ = ecoreFactory->createEClass();
	Loads_->setName("Loads");
	// m_eClassifiers.push_back(Loads_);
	::ecore::EClass_ptr Spawns_ = ecoreFactory->createEClass();
	Spawns_->setName("Spawns");
	// m_eClassifiers.push_back(Spawns_);
	::ecore::EClass_ptr RuntimeResource_ = ecoreFactory->createEClass();
	RuntimeResource_->setName("RuntimeResource");
	// m_eClassifiers.push_back(RuntimeResource_);
	::ecore::EClass_ptr Thread_ = ecoreFactory->createEClass();
	Thread_->setName("Thread");
	// m_eClassifiers.push_back(Thread_);
	::ecore::EClass_ptr Process_ = ecoreFactory->createEClass();
	Process_->setName("Process");
	// m_eClassifiers.push_back(Process_);
	::ecore::EClass_ptr ReadsResource_ = ecoreFactory->createEClass();
	ReadsResource_->setName("ReadsResource");
	// m_eClassifiers.push_back(ReadsResource_);
	::ecore::EClass_ptr WritesResource_ = ecoreFactory->createEClass();
	WritesResource_->setName("WritesResource");
	// m_eClassifiers.push_back(WritesResource_);
	::ecore::EClass_ptr ManagesResource_ = ecoreFactory->createEClass();
	ManagesResource_->setName("ManagesResource");
	// m_eClassifiers.push_back(ManagesResource_);
	::ecore::EClass_ptr DefinedBy_ = ecoreFactory->createEClass();
	DefinedBy_->setName("DefinedBy");
	// m_eClassifiers.push_back(DefinedBy_);
	::ecore::EClass_ptr StreamResource_ = ecoreFactory->createEClass();
	StreamResource_->setName("StreamResource");
	// m_eClassifiers.push_back(StreamResource_);
	
	
	// AbstractPlatformElement_->addESuperType(KDMEntity_);
	// PlatformModel_->addESuperType(KDMModel_);
	// AbstractPlatformRelationship_->addESuperType(KDMRelationship_);
	// Requires_->addESuperType(AbstractPlatformRelationship_);
	// ResourceType_->addESuperType(AbstractPlatformElement_);
	// NamingResource_->addESuperType(ResourceType_);
	// MarshalledResource_->addESuperType(ResourceType_);
	// MessagingResource_->addESuperType(ResourceType_);
	// FileResource_->addESuperType(ResourceType_);
	// ExecutionResource_->addESuperType(ResourceType_);
	// PlatformAction_->addESuperType(AbstractPlatformElement_);
	// ExternalActor_->addESuperType(PlatformAction_);
	// DataManager_->addESuperType(ResourceType_);
	// BindsTo_->addESuperType(AbstractPlatformRelationship_);
	// PlatformElement_->addESuperType(AbstractPlatformElement_);
	// PlatformRelationship_->addESuperType(AbstractPlatformRelationship_);
	// PlatformEvent_->addESuperType(AbstractPlatformElement_);
	// LockResource_->addESuperType(ResourceType_);
	// DeployedSoftwareSystem_->addESuperType(AbstractPlatformElement_);
	// Machine_->addESuperType(AbstractPlatformElement_);
	// DeployedComponent_->addESuperType(AbstractPlatformElement_);
	// DeployedResource_->addESuperType(AbstractPlatformElement_);
	// Loads_->addESuperType(AbstractPlatformRelationship_);
	// Spawns_->addESuperType(AbstractPlatformRelationship_);
	// RuntimeResource_->addESuperType(ResourceType_);
	// Thread_->addESuperType(RuntimeResource_);
	// Process_->addESuperType(RuntimeResource_);
	// ReadsResource_->addESuperType(AbstractActionRelationship_);
	// WritesResource_->addESuperType(AbstractActionRelationship_);
	// ManagesResource_->addESuperType(AbstractActionRelationship_);
	// DefinedBy_->addESuperType(AbstractActionRelationship_);
	// StreamResource_->addESuperType(ResourceType_);
	
	
	
	
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
