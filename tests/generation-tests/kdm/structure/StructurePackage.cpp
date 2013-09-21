#include "StructurePackage.hpp"
#include "StructureFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::structure;

StructurePackage::StructurePackage()
{
	m_eFactoryInstance = StructureFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr AbstractStructureElement_ = ecoreFactory->createEClass();
	AbstractStructureElement_->setName("AbstractStructureElement");
	// m_eClassifiers.push_back(AbstractStructureElement_);
	::ecore::EClass_ptr Subsystem_ = ecoreFactory->createEClass();
	Subsystem_->setName("Subsystem");
	// m_eClassifiers.push_back(Subsystem_);
	::ecore::EClass_ptr Layer_ = ecoreFactory->createEClass();
	Layer_->setName("Layer");
	// m_eClassifiers.push_back(Layer_);
	::ecore::EClass_ptr StructureModel_ = ecoreFactory->createEClass();
	StructureModel_->setName("StructureModel");
	// m_eClassifiers.push_back(StructureModel_);
	::ecore::EClass_ptr Component_ = ecoreFactory->createEClass();
	Component_->setName("Component");
	// m_eClassifiers.push_back(Component_);
	::ecore::EClass_ptr SoftwareSystem_ = ecoreFactory->createEClass();
	SoftwareSystem_->setName("SoftwareSystem");
	// m_eClassifiers.push_back(SoftwareSystem_);
	::ecore::EClass_ptr AbstractStructureRelationship_ = ecoreFactory->createEClass();
	AbstractStructureRelationship_->setName("AbstractStructureRelationship");
	// m_eClassifiers.push_back(AbstractStructureRelationship_);
	::ecore::EClass_ptr StructureRelationship_ = ecoreFactory->createEClass();
	StructureRelationship_->setName("StructureRelationship");
	// m_eClassifiers.push_back(StructureRelationship_);
	::ecore::EClass_ptr ArchitectureView_ = ecoreFactory->createEClass();
	ArchitectureView_->setName("ArchitectureView");
	// m_eClassifiers.push_back(ArchitectureView_);
	::ecore::EClass_ptr StructureElement_ = ecoreFactory->createEClass();
	StructureElement_->setName("StructureElement");
	// m_eClassifiers.push_back(StructureElement_);
	
	
	// AbstractStructureElement_->addESuperType(KDMEntity_);
	// Subsystem_->addESuperType(AbstractStructureElement_);
	// Layer_->addESuperType(AbstractStructureElement_);
	// StructureModel_->addESuperType(KDMModel_);
	// Component_->addESuperType(AbstractStructureElement_);
	// SoftwareSystem_->addESuperType(AbstractStructureElement_);
	// AbstractStructureRelationship_->addESuperType(KDMRelationship_);
	// StructureRelationship_->addESuperType(AbstractStructureRelationship_);
	// ArchitectureView_->addESuperType(AbstractStructureElement_);
	// StructureElement_->addESuperType(AbstractStructureElement_);
	
	
	
	
}

const StructurePackage_ptr StructurePackage::_instance()
{
	static StructurePackage __instance;
	return &__instance;
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement() const
{
	return e4c::tag< AbstractStructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_Subsystem() const
{
	return e4c::tag< Subsystem >::get();
}
 
e4c::tag_t StructurePackage::getTag_Layer() const
{
	return e4c::tag< Layer >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureModel() const
{
	return e4c::tag< StructureModel >::get();
}
 
e4c::tag_t StructurePackage::getTag_Component() const
{
	return e4c::tag< Component >::get();
}
 
e4c::tag_t StructurePackage::getTag_SoftwareSystem() const
{
	return e4c::tag< SoftwareSystem >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureRelationship() const
{
	return e4c::tag< AbstractStructureRelationship >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureRelationship() const
{
	return e4c::tag< StructureRelationship >::get();
}
 
e4c::tag_t StructurePackage::getTag_ArchitectureView() const
{
	return e4c::tag< ArchitectureView >::get();
}
 
e4c::tag_t StructurePackage::getTag_StructureElement() const
{
	return e4c::tag< StructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureElement__aggregated() const
{
	return e4c::tag< AbstractStructureElement__aggregated_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__implementation() const
{
	return e4c::tag< AbstractStructureElement__implementation_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureElement() const
{
	return e4c::tag< AbstractStructureElement__structureElement_tag >::get();
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureRelationship() const
{
	return e4c::tag< AbstractStructureElement__structureRelationship_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureModel__structureElement() const
{
	return e4c::tag< StructureModel__structureElement_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__to() const
{
	return e4c::tag< StructureRelationship__to_tag >::get();
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__from() const
{
	return e4c::tag< StructureRelationship__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_structure()
{
	return ::kdm::structure::StructurePackage::_instance();
}
