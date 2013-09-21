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
	
	::ecore::EClass_ptr AbstractUIElement_ = ecoreFactory->createEClass();
	AbstractUIElement_->setName("AbstractUIElement");
	// m_eClassifiers.push_back(AbstractUIElement_);
	::ecore::EClass_ptr UIResource_ = ecoreFactory->createEClass();
	UIResource_->setName("UIResource");
	// m_eClassifiers.push_back(UIResource_);
	::ecore::EClass_ptr UIDisplay_ = ecoreFactory->createEClass();
	UIDisplay_->setName("UIDisplay");
	// m_eClassifiers.push_back(UIDisplay_);
	::ecore::EClass_ptr Screen_ = ecoreFactory->createEClass();
	Screen_->setName("Screen");
	// m_eClassifiers.push_back(Screen_);
	::ecore::EClass_ptr Report_ = ecoreFactory->createEClass();
	Report_->setName("Report");
	// m_eClassifiers.push_back(Report_);
	::ecore::EClass_ptr UIModel_ = ecoreFactory->createEClass();
	UIModel_->setName("UIModel");
	// m_eClassifiers.push_back(UIModel_);
	::ecore::EClass_ptr AbstractUIRelationship_ = ecoreFactory->createEClass();
	AbstractUIRelationship_->setName("AbstractUIRelationship");
	// m_eClassifiers.push_back(AbstractUIRelationship_);
	::ecore::EClass_ptr UILayout_ = ecoreFactory->createEClass();
	UILayout_->setName("UILayout");
	// m_eClassifiers.push_back(UILayout_);
	::ecore::EClass_ptr UIField_ = ecoreFactory->createEClass();
	UIField_->setName("UIField");
	// m_eClassifiers.push_back(UIField_);
	::ecore::EClass_ptr DisplaysImage_ = ecoreFactory->createEClass();
	DisplaysImage_->setName("DisplaysImage");
	// m_eClassifiers.push_back(DisplaysImage_);
	::ecore::EClass_ptr Displays_ = ecoreFactory->createEClass();
	Displays_->setName("Displays");
	// m_eClassifiers.push_back(Displays_);
	::ecore::EClass_ptr UIFlow_ = ecoreFactory->createEClass();
	UIFlow_->setName("UIFlow");
	// m_eClassifiers.push_back(UIFlow_);
	::ecore::EClass_ptr UIElement_ = ecoreFactory->createEClass();
	UIElement_->setName("UIElement");
	// m_eClassifiers.push_back(UIElement_);
	::ecore::EClass_ptr UIRelationship_ = ecoreFactory->createEClass();
	UIRelationship_->setName("UIRelationship");
	// m_eClassifiers.push_back(UIRelationship_);
	::ecore::EClass_ptr UIAction_ = ecoreFactory->createEClass();
	UIAction_->setName("UIAction");
	// m_eClassifiers.push_back(UIAction_);
	::ecore::EClass_ptr UIEvent_ = ecoreFactory->createEClass();
	UIEvent_->setName("UIEvent");
	// m_eClassifiers.push_back(UIEvent_);
	::ecore::EClass_ptr ReadsUI_ = ecoreFactory->createEClass();
	ReadsUI_->setName("ReadsUI");
	// m_eClassifiers.push_back(ReadsUI_);
	::ecore::EClass_ptr WritesUI_ = ecoreFactory->createEClass();
	WritesUI_->setName("WritesUI");
	// m_eClassifiers.push_back(WritesUI_);
	::ecore::EClass_ptr ManagesUI_ = ecoreFactory->createEClass();
	ManagesUI_->setName("ManagesUI");
	// m_eClassifiers.push_back(ManagesUI_);
	
	
	// AbstractUIElement_->addESuperType(KDMEntity_);
	// UIResource_->addESuperType(AbstractUIElement_);
	// UIDisplay_->addESuperType(UIResource_);
	// Screen_->addESuperType(UIDisplay_);
	// Report_->addESuperType(UIDisplay_);
	// UIModel_->addESuperType(KDMModel_);
	// AbstractUIRelationship_->addESuperType(KDMRelationship_);
	// UILayout_->addESuperType(AbstractUIRelationship_);
	// UIField_->addESuperType(UIResource_);
	// DisplaysImage_->addESuperType(AbstractUIRelationship_);
	// Displays_->addESuperType(AbstractUIRelationship_);
	// UIFlow_->addESuperType(AbstractUIRelationship_);
	// UIElement_->addESuperType(AbstractUIElement_);
	// UIRelationship_->addESuperType(AbstractUIRelationship_);
	// UIAction_->addESuperType(AbstractUIElement_);
	// UIEvent_->addESuperType(AbstractUIElement_);
	// ReadsUI_->addESuperType(AbstractActionRelationship_);
	// WritesUI_->addESuperType(AbstractActionRelationship_);
	// ManagesUI_->addESuperType(AbstractActionRelationship_);
	
	
	
	
}

const UiPackage_ptr UiPackage::_instance()
{
	static UiPackage __instance;
	return &__instance;
}

e4c::tag_t UiPackage::getTag_AbstractUIElement() const
{
	return e4c::tag< AbstractUIElement >::get();
}
 
e4c::tag_t UiPackage::getTag_UIResource() const
{
	return e4c::tag< UIResource >::get();
}
 
e4c::tag_t UiPackage::getTag_UIDisplay() const
{
	return e4c::tag< UIDisplay >::get();
}
 
e4c::tag_t UiPackage::getTag_Screen() const
{
	return e4c::tag< Screen >::get();
}
 
e4c::tag_t UiPackage::getTag_Report() const
{
	return e4c::tag< Report >::get();
}
 
e4c::tag_t UiPackage::getTag_UIModel() const
{
	return e4c::tag< UIModel >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIRelationship() const
{
	return e4c::tag< AbstractUIRelationship >::get();
}
 
e4c::tag_t UiPackage::getTag_UILayout() const
{
	return e4c::tag< UILayout >::get();
}
 
e4c::tag_t UiPackage::getTag_UIField() const
{
	return e4c::tag< UIField >::get();
}
 
e4c::tag_t UiPackage::getTag_DisplaysImage() const
{
	return e4c::tag< DisplaysImage >::get();
}
 
e4c::tag_t UiPackage::getTag_Displays() const
{
	return e4c::tag< Displays >::get();
}
 
e4c::tag_t UiPackage::getTag_UIFlow() const
{
	return e4c::tag< UIFlow >::get();
}
 
e4c::tag_t UiPackage::getTag_UIElement() const
{
	return e4c::tag< UIElement >::get();
}
 
e4c::tag_t UiPackage::getTag_UIRelationship() const
{
	return e4c::tag< UIRelationship >::get();
}
 
e4c::tag_t UiPackage::getTag_UIAction() const
{
	return e4c::tag< UIAction >::get();
}
 
e4c::tag_t UiPackage::getTag_UIEvent() const
{
	return e4c::tag< UIEvent >::get();
}
 
e4c::tag_t UiPackage::getTag_ReadsUI() const
{
	return e4c::tag< ReadsUI >::get();
}
 
e4c::tag_t UiPackage::getTag_WritesUI() const
{
	return e4c::tag< WritesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_ManagesUI() const
{
	return e4c::tag< ManagesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIElement__source() const
{
	return e4c::tag< AbstractUIElement__source_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__UIRelation() const
{
	return e4c::tag< AbstractUIElement__UIRelation_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__implementation() const
{
	return e4c::tag< AbstractUIElement__implementation_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__abstraction() const
{
	return e4c::tag< AbstractUIElement__abstraction_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIResource__UIElement() const
{
	return e4c::tag< UIResource__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIModel__UIElement() const
{
	return e4c::tag< UIModel__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UILayout__to() const
{
	return e4c::tag< UILayout__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UILayout__from() const
{
	return e4c::tag< UILayout__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_DisplaysImage__to() const
{
	return e4c::tag< DisplaysImage__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_DisplaysImage__from() const
{
	return e4c::tag< DisplaysImage__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_Displays__to() const
{
	return e4c::tag< Displays__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_Displays__from() const
{
	return e4c::tag< Displays__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIFlow__to() const
{
	return e4c::tag< UIFlow__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIFlow__from() const
{
	return e4c::tag< UIFlow__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIRelationship__to() const
{
	return e4c::tag< UIRelationship__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIRelationship__from() const
{
	return e4c::tag< UIRelationship__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIAction__kind() const
{
	return e4c::tag< UIAction__kind_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIAction__UIElement() const
{
	return e4c::tag< UIAction__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIEvent__kind() const
{
	return e4c::tag< UIEvent__kind_tag >::get();
}

e4c::tag_t UiPackage::getTag_ReadsUI__to() const
{
	return e4c::tag< ReadsUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_ReadsUI__from() const
{
	return e4c::tag< ReadsUI__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_WritesUI__to() const
{
	return e4c::tag< WritesUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_WritesUI__from() const
{
	return e4c::tag< WritesUI__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_ManagesUI__to() const
{
	return e4c::tag< ManagesUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_ManagesUI__from() const
{
	return e4c::tag< ManagesUI__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_ui()
{
	return ::kdm::ui::UiPackage::_instance();
}
