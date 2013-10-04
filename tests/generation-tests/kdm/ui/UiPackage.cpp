#include "UiPackage.hpp"
#include "UiFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::ui;

UiPackage::UiPackage()
{
	m_eFactoryInstance = UiFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	
	
	m_AbstractUIElement = ecoreFactory->createEClass();
	m_AbstractUIElement->setName("AbstractUIElement");
	addEClassifiers(m_AbstractUIElement);
	m_UIResource = ecoreFactory->createEClass();
	m_UIResource->setName("UIResource");
	addEClassifiers(m_UIResource);
	m_UIDisplay = ecoreFactory->createEClass();
	m_UIDisplay->setName("UIDisplay");
	addEClassifiers(m_UIDisplay);
	m_Screen = ecoreFactory->createEClass();
	m_Screen->setName("Screen");
	addEClassifiers(m_Screen);
	m_Report = ecoreFactory->createEClass();
	m_Report->setName("Report");
	addEClassifiers(m_Report);
	m_UIModel = ecoreFactory->createEClass();
	m_UIModel->setName("UIModel");
	addEClassifiers(m_UIModel);
	m_AbstractUIRelationship = ecoreFactory->createEClass();
	m_AbstractUIRelationship->setName("AbstractUIRelationship");
	addEClassifiers(m_AbstractUIRelationship);
	m_UILayout = ecoreFactory->createEClass();
	m_UILayout->setName("UILayout");
	addEClassifiers(m_UILayout);
	m_UIField = ecoreFactory->createEClass();
	m_UIField->setName("UIField");
	addEClassifiers(m_UIField);
	m_DisplaysImage = ecoreFactory->createEClass();
	m_DisplaysImage->setName("DisplaysImage");
	addEClassifiers(m_DisplaysImage);
	m_Displays = ecoreFactory->createEClass();
	m_Displays->setName("Displays");
	addEClassifiers(m_Displays);
	m_UIFlow = ecoreFactory->createEClass();
	m_UIFlow->setName("UIFlow");
	addEClassifiers(m_UIFlow);
	m_UIElement = ecoreFactory->createEClass();
	m_UIElement->setName("UIElement");
	addEClassifiers(m_UIElement);
	m_UIRelationship = ecoreFactory->createEClass();
	m_UIRelationship->setName("UIRelationship");
	addEClassifiers(m_UIRelationship);
	m_UIAction = ecoreFactory->createEClass();
	m_UIAction->setName("UIAction");
	addEClassifiers(m_UIAction);
	m_UIEvent = ecoreFactory->createEClass();
	m_UIEvent->setName("UIEvent");
	addEClassifiers(m_UIEvent);
	m_ReadsUI = ecoreFactory->createEClass();
	m_ReadsUI->setName("ReadsUI");
	addEClassifiers(m_ReadsUI);
	m_WritesUI = ecoreFactory->createEClass();
	m_WritesUI->setName("WritesUI");
	addEClassifiers(m_WritesUI);
	m_ManagesUI = ecoreFactory->createEClass();
	m_ManagesUI->setName("ManagesUI");
	addEClassifiers(m_ManagesUI);

	
    {
        m_AbstractUIElement__source = ecoreFactory->createEReference();
        m_AbstractUIElement__source->setName("source");
        m_AbstractUIElement->addEStructuralFeatures(m_AbstractUIElement__source);
        m_AbstractUIElement->addEAllStructuralFeatures(m_AbstractUIElement__source);
        m_AbstractUIElement->addEReferences(m_AbstractUIElement__source);
        m_AbstractUIElement->addEAllReferences(m_AbstractUIElement__source);
    }
    {
        m_AbstractUIElement__UIRelation = ecoreFactory->createEReference();
        m_AbstractUIElement__UIRelation->setName("UIRelation");
        m_AbstractUIElement->addEStructuralFeatures(m_AbstractUIElement__UIRelation);
        m_AbstractUIElement->addEAllStructuralFeatures(m_AbstractUIElement__UIRelation);
        m_AbstractUIElement->addEReferences(m_AbstractUIElement__UIRelation);
        m_AbstractUIElement->addEAllReferences(m_AbstractUIElement__UIRelation);
    }
    {
        m_AbstractUIElement__implementation = ecoreFactory->createEReference();
        m_AbstractUIElement__implementation->setName("implementation");
        m_AbstractUIElement->addEStructuralFeatures(m_AbstractUIElement__implementation);
        m_AbstractUIElement->addEAllStructuralFeatures(m_AbstractUIElement__implementation);
        m_AbstractUIElement->addEReferences(m_AbstractUIElement__implementation);
        m_AbstractUIElement->addEAllReferences(m_AbstractUIElement__implementation);
    }
    {
        m_AbstractUIElement__abstraction = ecoreFactory->createEReference();
        m_AbstractUIElement__abstraction->setName("abstraction");
        m_AbstractUIElement->addEStructuralFeatures(m_AbstractUIElement__abstraction);
        m_AbstractUIElement->addEAllStructuralFeatures(m_AbstractUIElement__abstraction);
        m_AbstractUIElement->addEReferences(m_AbstractUIElement__abstraction);
        m_AbstractUIElement->addEAllReferences(m_AbstractUIElement__abstraction);
    }
    {
        m_UIResource__UIElement = ecoreFactory->createEReference();
        m_UIResource__UIElement->setName("UIElement");
        m_UIResource->addEStructuralFeatures(m_UIResource__UIElement);
        m_UIResource->addEAllStructuralFeatures(m_UIResource__UIElement);
        m_UIResource->addEReferences(m_UIResource__UIElement);
        m_UIResource->addEAllReferences(m_UIResource__UIElement);
    }
    {
        m_UIModel__UIElement = ecoreFactory->createEReference();
        m_UIModel__UIElement->setName("UIElement");
        m_UIModel->addEStructuralFeatures(m_UIModel__UIElement);
        m_UIModel->addEAllStructuralFeatures(m_UIModel__UIElement);
        m_UIModel->addEReferences(m_UIModel__UIElement);
        m_UIModel->addEAllReferences(m_UIModel__UIElement);
    }
    {
        m_UILayout__to = ecoreFactory->createEReference();
        m_UILayout__to->setName("to");
        m_UILayout->addEStructuralFeatures(m_UILayout__to);
        m_UILayout->addEAllStructuralFeatures(m_UILayout__to);
        m_UILayout->addEReferences(m_UILayout__to);
        m_UILayout->addEAllReferences(m_UILayout__to);
    }
    {
        m_UILayout__from = ecoreFactory->createEReference();
        m_UILayout__from->setName("from");
        m_UILayout->addEStructuralFeatures(m_UILayout__from);
        m_UILayout->addEAllStructuralFeatures(m_UILayout__from);
        m_UILayout->addEReferences(m_UILayout__from);
        m_UILayout->addEAllReferences(m_UILayout__from);
    }
    {
        m_DisplaysImage__to = ecoreFactory->createEReference();
        m_DisplaysImage__to->setName("to");
        m_DisplaysImage->addEStructuralFeatures(m_DisplaysImage__to);
        m_DisplaysImage->addEAllStructuralFeatures(m_DisplaysImage__to);
        m_DisplaysImage->addEReferences(m_DisplaysImage__to);
        m_DisplaysImage->addEAllReferences(m_DisplaysImage__to);
    }
    {
        m_DisplaysImage__from = ecoreFactory->createEReference();
        m_DisplaysImage__from->setName("from");
        m_DisplaysImage->addEStructuralFeatures(m_DisplaysImage__from);
        m_DisplaysImage->addEAllStructuralFeatures(m_DisplaysImage__from);
        m_DisplaysImage->addEReferences(m_DisplaysImage__from);
        m_DisplaysImage->addEAllReferences(m_DisplaysImage__from);
    }
    {
        m_Displays__to = ecoreFactory->createEReference();
        m_Displays__to->setName("to");
        m_Displays->addEStructuralFeatures(m_Displays__to);
        m_Displays->addEAllStructuralFeatures(m_Displays__to);
        m_Displays->addEReferences(m_Displays__to);
        m_Displays->addEAllReferences(m_Displays__to);
    }
    {
        m_Displays__from = ecoreFactory->createEReference();
        m_Displays__from->setName("from");
        m_Displays->addEStructuralFeatures(m_Displays__from);
        m_Displays->addEAllStructuralFeatures(m_Displays__from);
        m_Displays->addEReferences(m_Displays__from);
        m_Displays->addEAllReferences(m_Displays__from);
    }
    {
        m_UIFlow__to = ecoreFactory->createEReference();
        m_UIFlow__to->setName("to");
        m_UIFlow->addEStructuralFeatures(m_UIFlow__to);
        m_UIFlow->addEAllStructuralFeatures(m_UIFlow__to);
        m_UIFlow->addEReferences(m_UIFlow__to);
        m_UIFlow->addEAllReferences(m_UIFlow__to);
    }
    {
        m_UIFlow__from = ecoreFactory->createEReference();
        m_UIFlow__from->setName("from");
        m_UIFlow->addEStructuralFeatures(m_UIFlow__from);
        m_UIFlow->addEAllStructuralFeatures(m_UIFlow__from);
        m_UIFlow->addEReferences(m_UIFlow__from);
        m_UIFlow->addEAllReferences(m_UIFlow__from);
    }
    {
        m_UIRelationship__to = ecoreFactory->createEReference();
        m_UIRelationship__to->setName("to");
        m_UIRelationship->addEStructuralFeatures(m_UIRelationship__to);
        m_UIRelationship->addEAllStructuralFeatures(m_UIRelationship__to);
        m_UIRelationship->addEReferences(m_UIRelationship__to);
        m_UIRelationship->addEAllReferences(m_UIRelationship__to);
    }
    {
        m_UIRelationship__from = ecoreFactory->createEReference();
        m_UIRelationship__from->setName("from");
        m_UIRelationship->addEStructuralFeatures(m_UIRelationship__from);
        m_UIRelationship->addEAllStructuralFeatures(m_UIRelationship__from);
        m_UIRelationship->addEReferences(m_UIRelationship__from);
        m_UIRelationship->addEAllReferences(m_UIRelationship__from);
    }
    {
        m_UIAction__kind = ecoreFactory->createEAttribute();
        m_UIAction__kind->setName("kind");
        m_UIAction->addEStructuralFeatures(m_UIAction__kind);
        m_UIAction->addEAllStructuralFeatures(m_UIAction__kind);
        m_UIAction->addEAttributes(m_UIAction__kind);
        m_UIAction->addEAllAttributes(m_UIAction__kind);
    }
    {
        m_UIAction__UIElement = ecoreFactory->createEReference();
        m_UIAction__UIElement->setName("UIElement");
        m_UIAction->addEStructuralFeatures(m_UIAction__UIElement);
        m_UIAction->addEAllStructuralFeatures(m_UIAction__UIElement);
        m_UIAction->addEReferences(m_UIAction__UIElement);
        m_UIAction->addEAllReferences(m_UIAction__UIElement);
    }
    {
        m_UIEvent__kind = ecoreFactory->createEAttribute();
        m_UIEvent__kind->setName("kind");
        m_UIEvent->addEStructuralFeatures(m_UIEvent__kind);
        m_UIEvent->addEAllStructuralFeatures(m_UIEvent__kind);
        m_UIEvent->addEAttributes(m_UIEvent__kind);
        m_UIEvent->addEAllAttributes(m_UIEvent__kind);
    }
    {
        m_ReadsUI__to = ecoreFactory->createEReference();
        m_ReadsUI__to->setName("to");
        m_ReadsUI->addEStructuralFeatures(m_ReadsUI__to);
        m_ReadsUI->addEAllStructuralFeatures(m_ReadsUI__to);
        m_ReadsUI->addEReferences(m_ReadsUI__to);
        m_ReadsUI->addEAllReferences(m_ReadsUI__to);
    }
    {
        m_ReadsUI__from = ecoreFactory->createEReference();
        m_ReadsUI__from->setName("from");
        m_ReadsUI->addEStructuralFeatures(m_ReadsUI__from);
        m_ReadsUI->addEAllStructuralFeatures(m_ReadsUI__from);
        m_ReadsUI->addEReferences(m_ReadsUI__from);
        m_ReadsUI->addEAllReferences(m_ReadsUI__from);
    }
    {
        m_WritesUI__to = ecoreFactory->createEReference();
        m_WritesUI__to->setName("to");
        m_WritesUI->addEStructuralFeatures(m_WritesUI__to);
        m_WritesUI->addEAllStructuralFeatures(m_WritesUI__to);
        m_WritesUI->addEReferences(m_WritesUI__to);
        m_WritesUI->addEAllReferences(m_WritesUI__to);
    }
    {
        m_WritesUI__from = ecoreFactory->createEReference();
        m_WritesUI__from->setName("from");
        m_WritesUI->addEStructuralFeatures(m_WritesUI__from);
        m_WritesUI->addEAllStructuralFeatures(m_WritesUI__from);
        m_WritesUI->addEReferences(m_WritesUI__from);
        m_WritesUI->addEAllReferences(m_WritesUI__from);
    }
    {
        m_ManagesUI__to = ecoreFactory->createEReference();
        m_ManagesUI__to->setName("to");
        m_ManagesUI->addEStructuralFeatures(m_ManagesUI__to);
        m_ManagesUI->addEAllStructuralFeatures(m_ManagesUI__to);
        m_ManagesUI->addEReferences(m_ManagesUI__to);
        m_ManagesUI->addEAllReferences(m_ManagesUI__to);
    }
    {
        m_ManagesUI__from = ecoreFactory->createEReference();
        m_ManagesUI__from->setName("from");
        m_ManagesUI->addEStructuralFeatures(m_ManagesUI__from);
        m_ManagesUI->addEAllStructuralFeatures(m_ManagesUI__from);
        m_ManagesUI->addEReferences(m_ManagesUI__from);
        m_ManagesUI->addEAllReferences(m_ManagesUI__from);
    }
	
	m_AbstractUIElement->addESuperTypes(m_KDMEntity);
	m_AbstractUIElement->addAllEAllOperations(m_KDMEntity->getEOperations());
	m_AbstractUIElement->addAllEAllReferences(m_KDMEntity->getEReferences());
	m_AbstractUIElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
	m_AbstractUIElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
	m_UIResource->addESuperTypes(m_AbstractUIElement);
	m_UIResource->addAllEAllOperations(m_AbstractUIElement->getEOperations());
	m_UIResource->addAllEAllReferences(m_AbstractUIElement->getEReferences());
	m_UIResource->addAllEAllAttributes(m_AbstractUIElement->getEAttributes());
	m_UIResource->addAllEAllStructuralFeatures(m_AbstractUIElement->getEStructuralFeatures());
	m_UIDisplay->addESuperTypes(m_UIResource);
	m_UIDisplay->addAllEAllOperations(m_UIResource->getEOperations());
	m_UIDisplay->addAllEAllReferences(m_UIResource->getEReferences());
	m_UIDisplay->addAllEAllAttributes(m_UIResource->getEAttributes());
	m_UIDisplay->addAllEAllStructuralFeatures(m_UIResource->getEStructuralFeatures());
	m_Screen->addESuperTypes(m_UIDisplay);
	m_Screen->addAllEAllOperations(m_UIDisplay->getEOperations());
	m_Screen->addAllEAllReferences(m_UIDisplay->getEReferences());
	m_Screen->addAllEAllAttributes(m_UIDisplay->getEAttributes());
	m_Screen->addAllEAllStructuralFeatures(m_UIDisplay->getEStructuralFeatures());
	m_Report->addESuperTypes(m_UIDisplay);
	m_Report->addAllEAllOperations(m_UIDisplay->getEOperations());
	m_Report->addAllEAllReferences(m_UIDisplay->getEReferences());
	m_Report->addAllEAllAttributes(m_UIDisplay->getEAttributes());
	m_Report->addAllEAllStructuralFeatures(m_UIDisplay->getEStructuralFeatures());
	m_UIModel->addESuperTypes(m_KDMModel);
	m_UIModel->addAllEAllOperations(m_KDMModel->getEOperations());
	m_UIModel->addAllEAllReferences(m_KDMModel->getEReferences());
	m_UIModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
	m_UIModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
	m_AbstractUIRelationship->addESuperTypes(m_KDMRelationship);
	m_AbstractUIRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
	m_AbstractUIRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
	m_AbstractUIRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
	m_AbstractUIRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
	m_UILayout->addESuperTypes(m_AbstractUIRelationship);
	m_UILayout->addAllEAllOperations(m_AbstractUIRelationship->getEOperations());
	m_UILayout->addAllEAllReferences(m_AbstractUIRelationship->getEReferences());
	m_UILayout->addAllEAllAttributes(m_AbstractUIRelationship->getEAttributes());
	m_UILayout->addAllEAllStructuralFeatures(m_AbstractUIRelationship->getEStructuralFeatures());
	m_UIField->addESuperTypes(m_UIResource);
	m_UIField->addAllEAllOperations(m_UIResource->getEOperations());
	m_UIField->addAllEAllReferences(m_UIResource->getEReferences());
	m_UIField->addAllEAllAttributes(m_UIResource->getEAttributes());
	m_UIField->addAllEAllStructuralFeatures(m_UIResource->getEStructuralFeatures());
	m_DisplaysImage->addESuperTypes(m_AbstractUIRelationship);
	m_DisplaysImage->addAllEAllOperations(m_AbstractUIRelationship->getEOperations());
	m_DisplaysImage->addAllEAllReferences(m_AbstractUIRelationship->getEReferences());
	m_DisplaysImage->addAllEAllAttributes(m_AbstractUIRelationship->getEAttributes());
	m_DisplaysImage->addAllEAllStructuralFeatures(m_AbstractUIRelationship->getEStructuralFeatures());
	m_Displays->addESuperTypes(m_AbstractUIRelationship);
	m_Displays->addAllEAllOperations(m_AbstractUIRelationship->getEOperations());
	m_Displays->addAllEAllReferences(m_AbstractUIRelationship->getEReferences());
	m_Displays->addAllEAllAttributes(m_AbstractUIRelationship->getEAttributes());
	m_Displays->addAllEAllStructuralFeatures(m_AbstractUIRelationship->getEStructuralFeatures());
	m_UIFlow->addESuperTypes(m_AbstractUIRelationship);
	m_UIFlow->addAllEAllOperations(m_AbstractUIRelationship->getEOperations());
	m_UIFlow->addAllEAllReferences(m_AbstractUIRelationship->getEReferences());
	m_UIFlow->addAllEAllAttributes(m_AbstractUIRelationship->getEAttributes());
	m_UIFlow->addAllEAllStructuralFeatures(m_AbstractUIRelationship->getEStructuralFeatures());
	m_UIElement->addESuperTypes(m_AbstractUIElement);
	m_UIElement->addAllEAllOperations(m_AbstractUIElement->getEOperations());
	m_UIElement->addAllEAllReferences(m_AbstractUIElement->getEReferences());
	m_UIElement->addAllEAllAttributes(m_AbstractUIElement->getEAttributes());
	m_UIElement->addAllEAllStructuralFeatures(m_AbstractUIElement->getEStructuralFeatures());
	m_UIRelationship->addESuperTypes(m_AbstractUIRelationship);
	m_UIRelationship->addAllEAllOperations(m_AbstractUIRelationship->getEOperations());
	m_UIRelationship->addAllEAllReferences(m_AbstractUIRelationship->getEReferences());
	m_UIRelationship->addAllEAllAttributes(m_AbstractUIRelationship->getEAttributes());
	m_UIRelationship->addAllEAllStructuralFeatures(m_AbstractUIRelationship->getEStructuralFeatures());
	m_UIAction->addESuperTypes(m_AbstractUIElement);
	m_UIAction->addAllEAllOperations(m_AbstractUIElement->getEOperations());
	m_UIAction->addAllEAllReferences(m_AbstractUIElement->getEReferences());
	m_UIAction->addAllEAllAttributes(m_AbstractUIElement->getEAttributes());
	m_UIAction->addAllEAllStructuralFeatures(m_AbstractUIElement->getEStructuralFeatures());
	m_UIEvent->addESuperTypes(m_AbstractUIElement);
	m_UIEvent->addAllEAllOperations(m_AbstractUIElement->getEOperations());
	m_UIEvent->addAllEAllReferences(m_AbstractUIElement->getEReferences());
	m_UIEvent->addAllEAllAttributes(m_AbstractUIElement->getEAttributes());
	m_UIEvent->addAllEAllStructuralFeatures(m_AbstractUIElement->getEStructuralFeatures());
	m_ReadsUI->addESuperTypes(m_AbstractActionRelationship);
	m_ReadsUI->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ReadsUI->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ReadsUI->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ReadsUI->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_WritesUI->addESuperTypes(m_AbstractActionRelationship);
	m_WritesUI->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_WritesUI->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_WritesUI->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_WritesUI->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	m_ManagesUI->addESuperTypes(m_AbstractActionRelationship);
	m_ManagesUI->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
	m_ManagesUI->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
	m_ManagesUI->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
	m_ManagesUI->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
	
	
	m_AbstractUIElement->addFeatureAccesors(m_AbstractUIElement__source, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::AbstractUIElement_ptr >(o)->getSource()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractUIElement->addFeatureAccesors(m_AbstractUIElement__UIRelation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::AbstractUIElement_ptr >(o)->getUIRelation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractUIElement->addFeatureAccesors(m_AbstractUIElement__implementation, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::AbstractUIElement_ptr >(o)->getImplementation()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_AbstractUIElement->addFeatureAccesors(m_AbstractUIElement__abstraction, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::AbstractUIElement_ptr >(o)->getAbstraction()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIResource->addFeatureAccesors(m_UIResource__UIElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIResource_ptr >(o)->getUIElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIModel->addFeatureAccesors(m_UIModel__UIElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIModel_ptr >(o)->getUIElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UILayout->addFeatureAccesors(m_UILayout__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UILayout_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UILayout->addFeatureAccesors(m_UILayout__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UILayout_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DisplaysImage->addFeatureAccesors(m_DisplaysImage__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::DisplaysImage_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_DisplaysImage->addFeatureAccesors(m_DisplaysImage__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::DisplaysImage_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Displays->addFeatureAccesors(m_Displays__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::Displays_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Displays->addFeatureAccesors(m_Displays__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::Displays_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIFlow->addFeatureAccesors(m_UIFlow__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIFlow_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIFlow->addFeatureAccesors(m_UIFlow__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIFlow_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIRelationship->addFeatureAccesors(m_UIRelationship__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIRelationship_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIRelationship->addFeatureAccesors(m_UIRelationship__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIRelationship_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIAction->addFeatureAccesors(m_UIAction__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIAction_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIAction->addFeatureAccesors(m_UIAction__UIElement, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIAction_ptr >(o)->getUIElement()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_UIEvent->addFeatureAccesors(m_UIEvent__kind, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::UIEvent_ptr >(o)->getKind()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ReadsUI->addFeatureAccesors(m_ReadsUI__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::ReadsUI_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ReadsUI->addFeatureAccesors(m_ReadsUI__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::ReadsUI_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_WritesUI->addFeatureAccesors(m_WritesUI__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::WritesUI_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_WritesUI->addFeatureAccesors(m_WritesUI__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::WritesUI_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ManagesUI->addFeatureAccesors(m_ManagesUI__to, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::ManagesUI_ptr >(o)->getTo()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ManagesUI->addFeatureAccesors(m_ManagesUI__from, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::ui::ManagesUI_ptr >(o)->getFrom()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const UiPackage_ptr UiPackage::_instance()
{
	static UiPackage __instance;
	return &__instance;
}

ecore::EClass_ptr UiPackage::getAbstractUIElement() const
{
	return m_AbstractUIElement;
}
  	
e4c::tag_t UiPackage::getTag_AbstractUIElement() const
{
	return e4c::tag< AbstractUIElement >::get();
}
 
ecore::EClass_ptr UiPackage::getUIResource() const
{
	return m_UIResource;
}
  	
e4c::tag_t UiPackage::getTag_UIResource() const
{
	return e4c::tag< UIResource >::get();
}
 
ecore::EClass_ptr UiPackage::getUIDisplay() const
{
	return m_UIDisplay;
}
  	
e4c::tag_t UiPackage::getTag_UIDisplay() const
{
	return e4c::tag< UIDisplay >::get();
}
 
ecore::EClass_ptr UiPackage::getScreen() const
{
	return m_Screen;
}
  	
e4c::tag_t UiPackage::getTag_Screen() const
{
	return e4c::tag< Screen >::get();
}
 
ecore::EClass_ptr UiPackage::getReport() const
{
	return m_Report;
}
  	
e4c::tag_t UiPackage::getTag_Report() const
{
	return e4c::tag< Report >::get();
}
 
ecore::EClass_ptr UiPackage::getUIModel() const
{
	return m_UIModel;
}
  	
e4c::tag_t UiPackage::getTag_UIModel() const
{
	return e4c::tag< UIModel >::get();
}
 
ecore::EClass_ptr UiPackage::getAbstractUIRelationship() const
{
	return m_AbstractUIRelationship;
}
  	
e4c::tag_t UiPackage::getTag_AbstractUIRelationship() const
{
	return e4c::tag< AbstractUIRelationship >::get();
}
 
ecore::EClass_ptr UiPackage::getUILayout() const
{
	return m_UILayout;
}
  	
e4c::tag_t UiPackage::getTag_UILayout() const
{
	return e4c::tag< UILayout >::get();
}
 
ecore::EClass_ptr UiPackage::getUIField() const
{
	return m_UIField;
}
  	
e4c::tag_t UiPackage::getTag_UIField() const
{
	return e4c::tag< UIField >::get();
}
 
ecore::EClass_ptr UiPackage::getDisplaysImage() const
{
	return m_DisplaysImage;
}
  	
e4c::tag_t UiPackage::getTag_DisplaysImage() const
{
	return e4c::tag< DisplaysImage >::get();
}
 
ecore::EClass_ptr UiPackage::getDisplays() const
{
	return m_Displays;
}
  	
e4c::tag_t UiPackage::getTag_Displays() const
{
	return e4c::tag< Displays >::get();
}
 
ecore::EClass_ptr UiPackage::getUIFlow() const
{
	return m_UIFlow;
}
  	
e4c::tag_t UiPackage::getTag_UIFlow() const
{
	return e4c::tag< UIFlow >::get();
}
 
ecore::EClass_ptr UiPackage::getUIElement() const
{
	return m_UIElement;
}
  	
e4c::tag_t UiPackage::getTag_UIElement() const
{
	return e4c::tag< UIElement >::get();
}
 
ecore::EClass_ptr UiPackage::getUIRelationship() const
{
	return m_UIRelationship;
}
  	
e4c::tag_t UiPackage::getTag_UIRelationship() const
{
	return e4c::tag< UIRelationship >::get();
}
 
ecore::EClass_ptr UiPackage::getUIAction() const
{
	return m_UIAction;
}
  	
e4c::tag_t UiPackage::getTag_UIAction() const
{
	return e4c::tag< UIAction >::get();
}
 
ecore::EClass_ptr UiPackage::getUIEvent() const
{
	return m_UIEvent;
}
  	
e4c::tag_t UiPackage::getTag_UIEvent() const
{
	return e4c::tag< UIEvent >::get();
}
 
ecore::EClass_ptr UiPackage::getReadsUI() const
{
	return m_ReadsUI;
}
  	
e4c::tag_t UiPackage::getTag_ReadsUI() const
{
	return e4c::tag< ReadsUI >::get();
}
 
ecore::EClass_ptr UiPackage::getWritesUI() const
{
	return m_WritesUI;
}
  	
e4c::tag_t UiPackage::getTag_WritesUI() const
{
	return e4c::tag< WritesUI >::get();
}
 
ecore::EClass_ptr UiPackage::getManagesUI() const
{
	return m_ManagesUI;
}
  	
e4c::tag_t UiPackage::getTag_ManagesUI() const
{
	return e4c::tag< ManagesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIElement__source() const
{
	return e4c::tag< AbstractUIElement__source_tag >::get();
}

ecore::EReference_ptr UiPackage::getAbstractUIElement__source() const
{
	return m_AbstractUIElement__source;
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__UIRelation() const
{
	return e4c::tag< AbstractUIElement__UIRelation_tag >::get();
}

ecore::EReference_ptr UiPackage::getAbstractUIElement__UIRelation() const
{
	return m_AbstractUIElement__UIRelation;
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__implementation() const
{
	return e4c::tag< AbstractUIElement__implementation_tag >::get();
}

ecore::EReference_ptr UiPackage::getAbstractUIElement__implementation() const
{
	return m_AbstractUIElement__implementation;
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__abstraction() const
{
	return e4c::tag< AbstractUIElement__abstraction_tag >::get();
}

ecore::EReference_ptr UiPackage::getAbstractUIElement__abstraction() const
{
	return m_AbstractUIElement__abstraction;
}

e4c::tag_t UiPackage::getTag_UIResource__UIElement() const
{
	return e4c::tag< UIResource__UIElement_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIResource__UIElement() const
{
	return m_UIResource__UIElement;
}

e4c::tag_t UiPackage::getTag_UIModel__UIElement() const
{
	return e4c::tag< UIModel__UIElement_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIModel__UIElement() const
{
	return m_UIModel__UIElement;
}

e4c::tag_t UiPackage::getTag_UILayout__to() const
{
	return e4c::tag< UILayout__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getUILayout__to() const
{
	return m_UILayout__to;
}

e4c::tag_t UiPackage::getTag_UILayout__from() const
{
	return e4c::tag< UILayout__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getUILayout__from() const
{
	return m_UILayout__from;
}

e4c::tag_t UiPackage::getTag_DisplaysImage__to() const
{
	return e4c::tag< DisplaysImage__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getDisplaysImage__to() const
{
	return m_DisplaysImage__to;
}

e4c::tag_t UiPackage::getTag_DisplaysImage__from() const
{
	return e4c::tag< DisplaysImage__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getDisplaysImage__from() const
{
	return m_DisplaysImage__from;
}

e4c::tag_t UiPackage::getTag_Displays__to() const
{
	return e4c::tag< Displays__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getDisplays__to() const
{
	return m_Displays__to;
}

e4c::tag_t UiPackage::getTag_Displays__from() const
{
	return e4c::tag< Displays__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getDisplays__from() const
{
	return m_Displays__from;
}

e4c::tag_t UiPackage::getTag_UIFlow__to() const
{
	return e4c::tag< UIFlow__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIFlow__to() const
{
	return m_UIFlow__to;
}

e4c::tag_t UiPackage::getTag_UIFlow__from() const
{
	return e4c::tag< UIFlow__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIFlow__from() const
{
	return m_UIFlow__from;
}

e4c::tag_t UiPackage::getTag_UIRelationship__to() const
{
	return e4c::tag< UIRelationship__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIRelationship__to() const
{
	return m_UIRelationship__to;
}

e4c::tag_t UiPackage::getTag_UIRelationship__from() const
{
	return e4c::tag< UIRelationship__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIRelationship__from() const
{
	return m_UIRelationship__from;
}

e4c::tag_t UiPackage::getTag_UIAction__kind() const
{
	return e4c::tag< UIAction__kind_tag >::get();
}

ecore::EAttribute_ptr UiPackage::getUIAction__kind() const
{
	return m_UIAction__kind;
}

e4c::tag_t UiPackage::getTag_UIAction__UIElement() const
{
	return e4c::tag< UIAction__UIElement_tag >::get();
}

ecore::EReference_ptr UiPackage::getUIAction__UIElement() const
{
	return m_UIAction__UIElement;
}

e4c::tag_t UiPackage::getTag_UIEvent__kind() const
{
	return e4c::tag< UIEvent__kind_tag >::get();
}

ecore::EAttribute_ptr UiPackage::getUIEvent__kind() const
{
	return m_UIEvent__kind;
}

e4c::tag_t UiPackage::getTag_ReadsUI__to() const
{
	return e4c::tag< ReadsUI__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getReadsUI__to() const
{
	return m_ReadsUI__to;
}

e4c::tag_t UiPackage::getTag_ReadsUI__from() const
{
	return e4c::tag< ReadsUI__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getReadsUI__from() const
{
	return m_ReadsUI__from;
}

e4c::tag_t UiPackage::getTag_WritesUI__to() const
{
	return e4c::tag< WritesUI__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getWritesUI__to() const
{
	return m_WritesUI__to;
}

e4c::tag_t UiPackage::getTag_WritesUI__from() const
{
	return e4c::tag< WritesUI__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getWritesUI__from() const
{
	return m_WritesUI__from;
}

e4c::tag_t UiPackage::getTag_ManagesUI__to() const
{
	return e4c::tag< ManagesUI__to_tag >::get();
}

ecore::EReference_ptr UiPackage::getManagesUI__to() const
{
	return m_ManagesUI__to;
}

e4c::tag_t UiPackage::getTag_ManagesUI__from() const
{
	return e4c::tag< ManagesUI__from_tag >::get();
}

ecore::EReference_ptr UiPackage::getManagesUI__from() const
{
	return m_ManagesUI__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_ui()
{
	return ::kdm::ui::UiPackage::_instance();
}
