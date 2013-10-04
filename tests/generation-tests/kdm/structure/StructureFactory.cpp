#include "StructureFactory.hpp"
#include "StructurePackage.hpp"
#include "include.hpp"

using namespace kdm::structure;

StructureFactory::StructureFactory()
{
	// m_ePackage = StructurePackage::_instance();
	// std::bind(&StructureFactory::createSubsystem, this);
	// m_ePackage->getTag_Subsystem();
	// std::bind(&StructureFactory::createLayer, this);
	// m_ePackage->getTag_Layer();
	// std::bind(&StructureFactory::createStructureModel, this);
	// m_ePackage->getTag_StructureModel();
	// std::bind(&StructureFactory::createComponent, this);
	// m_ePackage->getTag_Component();
	// std::bind(&StructureFactory::createSoftwareSystem, this);
	// m_ePackage->getTag_SoftwareSystem();
	// std::bind(&StructureFactory::createStructureRelationship, this);
	// m_ePackage->getTag_StructureRelationship();
	// std::bind(&StructureFactory::createArchitectureView, this);
	// m_ePackage->getTag_ArchitectureView();
	// std::bind(&StructureFactory::createStructureElement, this);
	// m_ePackage->getTag_StructureElement();
}

const StructureFactory_ptr StructureFactory::_instance()
{
	static StructureFactory __instance;
	return &__instance;
}

Subsystem_ptr StructureFactory::createSubsystem() const
{
	return new Subsystem();
}

Layer_ptr StructureFactory::createLayer() const
{
	return new Layer();
}

StructureModel_ptr StructureFactory::createStructureModel() const
{
	return new StructureModel();
}

Component_ptr StructureFactory::createComponent() const
{
	return new Component();
}

SoftwareSystem_ptr StructureFactory::createSoftwareSystem() const
{
	return new SoftwareSystem();
}

StructureRelationship_ptr StructureFactory::createStructureRelationship() const
{
	return new StructureRelationship();
}

ArchitectureView_ptr StructureFactory::createArchitectureView() const
{
	return new ArchitectureView();
}

StructureElement_ptr StructureFactory::createStructureElement() const
{
	return new StructureElement();
}

