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
	
	
	
	m_AbstractStructureElement = ecoreFactory->createEClass();
	m_AbstractStructureElement->setName("AbstractStructureElement");
	addEClassifiers(m_AbstractStructureElement);
	m_Subsystem = ecoreFactory->createEClass();
	m_Subsystem->setName("Subsystem");
	addEClassifiers(m_Subsystem);
	m_Layer = ecoreFactory->createEClass();
	m_Layer->setName("Layer");
	addEClassifiers(m_Layer);
	m_StructureModel = ecoreFactory->createEClass();
	m_StructureModel->setName("StructureModel");
	addEClassifiers(m_StructureModel);
	m_Component = ecoreFactory->createEClass();
	m_Component->setName("Component");
	addEClassifiers(m_Component);
	m_SoftwareSystem = ecoreFactory->createEClass();
	m_SoftwareSystem->setName("SoftwareSystem");
	addEClassifiers(m_SoftwareSystem);
	m_AbstractStructureRelationship = ecoreFactory->createEClass();
	m_AbstractStructureRelationship->setName("AbstractStructureRelationship");
	addEClassifiers(m_AbstractStructureRelationship);
	m_StructureRelationship = ecoreFactory->createEClass();
	m_StructureRelationship->setName("StructureRelationship");
	addEClassifiers(m_StructureRelationship);
	m_ArchitectureView = ecoreFactory->createEClass();
	m_ArchitectureView->setName("ArchitectureView");
	addEClassifiers(m_ArchitectureView);
	m_StructureElement = ecoreFactory->createEClass();
	m_StructureElement->setName("StructureElement");
	addEClassifiers(m_StructureElement);

	
    {
        m_AbstractStructureElement__aggregated = ecoreFactory->createEReference();
        m_AbstractStructureElement__aggregated->setName("aggregated");
        m_AbstractStructureElement->addEStructuralFeatures(m_AbstractStructureElement__aggregated);
        m_AbstractStructureElement->addEAllStructuralFeatures(m_AbstractStructureElement__aggregated);
        m_AbstractStructureElement->addEReferences(m_AbstractStructureElement__aggregated);
        m_AbstractStructureElement->addEAllReferences(m_AbstractStructureElement__aggregated);
    }
    {
        m_AbstractStructureElement__implementation = ecoreFactory->createEReference();
        m_AbstractStructureElement__implementation->setName("implementation");
        m_AbstractStructureElement->addEStructuralFeatures(m_AbstractStructureElement__implementation);
        m_AbstractStructureElement->addEAllStructuralFeatures(m_AbstractStructureElement__implementation);
        m_AbstractStructureElement->addEReferences(m_AbstractStructureElement__implementation);
        m_AbstractStructureElement->addEAllReferences(m_AbstractStructureElement__implementation);
    }
    {
        m_AbstractStructureElement__structureElement = ecoreFactory->createEReference();
        m_AbstractStructureElement__structureElement->setName("structureElement");
        m_AbstractStructureElement->addEStructuralFeatures(m_AbstractStructureElement__structureElement);
        m_AbstractStructureElement->addEAllStructuralFeatures(m_AbstractStructureElement__structureElement);
        m_AbstractStructureElement->addEReferences(m_AbstractStructureElement__structureElement);
        m_AbstractStructureElement->addEAllReferences(m_AbstractStructureElement__structureElement);
    }
    {
        m_AbstractStructureElement__structureRelationship = ecoreFactory->createEReference();
        m_AbstractStructureElement__structureRelationship->setName("structureRelationship");
        m_AbstractStructureElement->addEStructuralFeatures(m_AbstractStructureElement__structureRelationship);
        m_AbstractStructureElement->addEAllStructuralFeatures(m_AbstractStructureElement__structureRelationship);
        m_AbstractStructureElement->addEReferences(m_AbstractStructureElement__structureRelationship);
        m_AbstractStructureElement->addEAllReferences(m_AbstractStructureElement__structureRelationship);
    }
    {
        m_StructureModel__structureElement = ecoreFactory->createEReference();
        m_StructureModel__structureElement->setName("structureElement");
        m_StructureModel->addEStructuralFeatures(m_StructureModel__structureElement);
        m_StructureModel->addEAllStructuralFeatures(m_StructureModel__structureElement);
        m_StructureModel->addEReferences(m_StructureModel__structureElement);
        m_StructureModel->addEAllReferences(m_StructureModel__structureElement);
    }
    {
        m_StructureRelationship__to = ecoreFactory->createEReference();
        m_StructureRelationship__to->setName("to");
        m_StructureRelationship->addEStructuralFeatures(m_StructureRelationship__to);
        m_StructureRelationship->addEAllStructuralFeatures(m_StructureRelationship__to);
        m_StructureRelationship->addEReferences(m_StructureRelationship__to);
        m_StructureRelationship->addEAllReferences(m_StructureRelationship__to);
    }
    {
        m_StructureRelationship__from = ecoreFactory->createEReference();
        m_StructureRelationship__from->setName("from");
        m_StructureRelationship->addEStructuralFeatures(m_StructureRelationship__from);
        m_StructureRelationship->addEAllStructuralFeatures(m_StructureRelationship__from);
        m_StructureRelationship->addEReferences(m_StructureRelationship__from);
        m_StructureRelationship->addEAllReferences(m_StructureRelationship__from);
    }
	
	m_AbstractStructureElement->addESuperTypes(m_KDMEntity);
	m_AbstractStructureElement->addAllEAllOperations(m_KDMEntity->getEOperations());
	m_AbstractStructureElement->addAllEAllReferences(m_KDMEntity->getEReferences());
	m_AbstractStructureElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
	m_AbstractStructureElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
	m_Subsystem->addESuperTypes(m_AbstractStructureElement);
	m_Subsystem->addAllEAllOperations(m_AbstractStructureElement->getEOperations());
	m_Subsystem->addAllEAllReferences(m_AbstractStructureElement->getEReferences());
	m_Subsystem->addAllEAllAttributes(m_AbstractStructureElement->getEAttributes());
	m_Subsystem->addAllEAllStructuralFeatures(m_AbstractStructureElement->getEStructuralFeatures());
	m_Layer->addESuperTypes(m_AbstractStructureElement);
	m_Layer->addAllEAllOperations(m_AbstractStructureElement->getEOperations());
	m_Layer->addAllEAllReferences(m_AbstractStructureElement->getEReferences());
	m_Layer->addAllEAllAttributes(m_AbstractStructureElement->getEAttributes());
	m_Layer->addAllEAllStructuralFeatures(m_AbstractStructureElement->getEStructuralFeatures());
	m_StructureModel->addESuperTypes(m_KDMModel);
	m_StructureModel->addAllEAllOperations(m_KDMModel->getEOperations());
	m_StructureModel->addAllEAllReferences(m_KDMModel->getEReferences());
	m_StructureModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
	m_StructureModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
	m_Component->addESuperTypes(m_AbstractStructureElement);
	m_Component->addAllEAllOperations(m_AbstractStructureElement->getEOperations());
	m_Component->addAllEAllReferences(m_AbstractStructureElement->getEReferences());
	m_Component->addAllEAllAttributes(m_AbstractStructureElement->getEAttributes());
	m_Component->addAllEAllStructuralFeatures(m_AbstractStructureElement->getEStructuralFeatures());
	m_SoftwareSystem->addESuperTypes(m_AbstractStructureElement);
	m_SoftwareSystem->addAllEAllOperations(m_AbstractStructureElement->getEOperations());
	m_SoftwareSystem->addAllEAllReferences(m_AbstractStructureElement->getEReferences());
	m_SoftwareSystem->addAllEAllAttributes(m_AbstractStructureElement->getEAttributes());
	m_SoftwareSystem->addAllEAllStructuralFeatures(m_AbstractStructureElement->getEStructuralFeatures());
	m_AbstractStructureRelationship->addESuperTypes(m_KDMRelationship);
	m_AbstractStructureRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
	m_AbstractStructureRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
	m_AbstractStructureRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
	m_AbstractStructureRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
	m_StructureRelationship->addESuperTypes(m_AbstractStructureRelationship);
	m_StructureRelationship->addAllEAllOperations(m_AbstractStructureRelationship->getEOperations());
	m_StructureRelationship->addAllEAllReferences(m_AbstractStructureRelationship->getEReferences());
	m_StructureRelationship->addAllEAllAttributes(m_AbstractStructureRelationship->getEAttributes());
	m_StructureRelationship->addAllEAllStructuralFeatures(m_AbstractStructureRelationship->getEStructuralFeatures());
	m_ArchitectureView->addESuperTypes(m_AbstractStructureElement);
	m_ArchitectureView->addAllEAllOperations(m_AbstractStructureElement->getEOperations());
	m_ArchitectureView->addAllEAllReferences(m_AbstractStructureElement->getEReferences());
	m_ArchitectureView->addAllEAllAttributes(m_AbstractStructureElement->getEAttributes());
	m_ArchitectureView->addAllEAllStructuralFeatures(m_AbstractStructureElement->getEStructuralFeatures());
	m_StructureElement->addESuperTypes(m_AbstractStructureElement);
	m_StructureElement->addAllEAllOperations(m_AbstractStructureElement->getEOperations());
	m_StructureElement->addAllEAllReferences(m_AbstractStructureElement->getEReferences());
	m_StructureElement->addAllEAllAttributes(m_AbstractStructureElement->getEAttributes());
	m_StructureElement->addAllEAllStructuralFeatures(m_AbstractStructureElement->getEStructuralFeatures());
	
	
	m_AbstractStructureElement->addFeatureAccesors(m_AbstractStructureElement__aggregated, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::AbstractStructureElement_ptr >(o)->getAggregated()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractStructureElement->addFeatureAccesors(m_AbstractStructureElement__implementation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::AbstractStructureElement_ptr >(o)->getImplementation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractStructureElement->addFeatureAccesors(m_AbstractStructureElement__structureElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::AbstractStructureElement_ptr >(o)->getStructureElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractStructureElement->addFeatureAccesors(m_AbstractStructureElement__structureRelationship, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::AbstractStructureElement_ptr >(o)->getStructureRelationship()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_StructureModel->addFeatureAccesors(m_StructureModel__structureElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::StructureModel_ptr >(o)->getStructureElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_StructureRelationship->addFeatureAccesors(m_StructureRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::StructureRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_StructureRelationship->addFeatureAccesors(m_StructureRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::structure::StructureRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const StructurePackage_ptr StructurePackage::_instance()
{
	static StructurePackage __instance;
	return &__instance;
}

ecore::EClass_ptr StructurePackage::getAbstractStructureElement() const
{
	return m_AbstractStructureElement;
}
  	
e4c::tag_t StructurePackage::getTag_AbstractStructureElement() const
{
	return e4c::tag< AbstractStructureElement >::get();
}
 
ecore::EClass_ptr StructurePackage::getSubsystem() const
{
	return m_Subsystem;
}
  	
e4c::tag_t StructurePackage::getTag_Subsystem() const
{
	return e4c::tag< Subsystem >::get();
}
 
ecore::EClass_ptr StructurePackage::getLayer() const
{
	return m_Layer;
}
  	
e4c::tag_t StructurePackage::getTag_Layer() const
{
	return e4c::tag< Layer >::get();
}
 
ecore::EClass_ptr StructurePackage::getStructureModel() const
{
	return m_StructureModel;
}
  	
e4c::tag_t StructurePackage::getTag_StructureModel() const
{
	return e4c::tag< StructureModel >::get();
}
 
ecore::EClass_ptr StructurePackage::getComponent() const
{
	return m_Component;
}
  	
e4c::tag_t StructurePackage::getTag_Component() const
{
	return e4c::tag< Component >::get();
}
 
ecore::EClass_ptr StructurePackage::getSoftwareSystem() const
{
	return m_SoftwareSystem;
}
  	
e4c::tag_t StructurePackage::getTag_SoftwareSystem() const
{
	return e4c::tag< SoftwareSystem >::get();
}
 
ecore::EClass_ptr StructurePackage::getAbstractStructureRelationship() const
{
	return m_AbstractStructureRelationship;
}
  	
e4c::tag_t StructurePackage::getTag_AbstractStructureRelationship() const
{
	return e4c::tag< AbstractStructureRelationship >::get();
}
 
ecore::EClass_ptr StructurePackage::getStructureRelationship() const
{
	return m_StructureRelationship;
}
  	
e4c::tag_t StructurePackage::getTag_StructureRelationship() const
{
	return e4c::tag< StructureRelationship >::get();
}
 
ecore::EClass_ptr StructurePackage::getArchitectureView() const
{
	return m_ArchitectureView;
}
  	
e4c::tag_t StructurePackage::getTag_ArchitectureView() const
{
	return e4c::tag< ArchitectureView >::get();
}
 
ecore::EClass_ptr StructurePackage::getStructureElement() const
{
	return m_StructureElement;
}
  	
e4c::tag_t StructurePackage::getTag_StructureElement() const
{
	return e4c::tag< StructureElement >::get();
}
 
e4c::tag_t StructurePackage::getTag_AbstractStructureElement__aggregated() const
{
	return e4c::tag< AbstractStructureElement__aggregated_tag >::get();
}

ecore::EReference_ptr StructurePackage::getAbstractStructureElement__aggregated() const
{
	return m_AbstractStructureElement__aggregated;
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__implementation() const
{
	return e4c::tag< AbstractStructureElement__implementation_tag >::get();
}

ecore::EReference_ptr StructurePackage::getAbstractStructureElement__implementation() const
{
	return m_AbstractStructureElement__implementation;
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureElement() const
{
	return e4c::tag< AbstractStructureElement__structureElement_tag >::get();
}

ecore::EReference_ptr StructurePackage::getAbstractStructureElement__structureElement() const
{
	return m_AbstractStructureElement__structureElement;
}

e4c::tag_t StructurePackage::getTag_AbstractStructureElement__structureRelationship() const
{
	return e4c::tag< AbstractStructureElement__structureRelationship_tag >::get();
}

ecore::EReference_ptr StructurePackage::getAbstractStructureElement__structureRelationship() const
{
	return m_AbstractStructureElement__structureRelationship;
}

e4c::tag_t StructurePackage::getTag_StructureModel__structureElement() const
{
	return e4c::tag< StructureModel__structureElement_tag >::get();
}

ecore::EReference_ptr StructurePackage::getStructureModel__structureElement() const
{
	return m_StructureModel__structureElement;
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__to() const
{
	return e4c::tag< StructureRelationship__to_tag >::get();
}

ecore::EReference_ptr StructurePackage::getStructureRelationship__to() const
{
	return m_StructureRelationship__to;
}

e4c::tag_t StructurePackage::getTag_StructureRelationship__from() const
{
	return e4c::tag< StructureRelationship__from_tag >::get();
}

ecore::EReference_ptr StructurePackage::getStructureRelationship__from() const
{
	return m_StructureRelationship__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_structure()
{
	return ::kdm::structure::StructurePackage::_instance();
}
