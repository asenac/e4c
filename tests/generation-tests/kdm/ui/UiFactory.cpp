#include "UiFactory.hpp"
#include "UiPackage.hpp"
#include "include.hpp"

using namespace kdm::ui;

UiFactory::UiFactory()
{
	m_ePackage = UiPackage::_instance();
	// std::bind(&UiFactory::createUIResource, this);
	// m_ePackage->getTag_UIResource();
	// std::bind(&UiFactory::createUIDisplay, this);
	// m_ePackage->getTag_UIDisplay();
	// std::bind(&UiFactory::createScreen, this);
	// m_ePackage->getTag_Screen();
	// std::bind(&UiFactory::createReport, this);
	// m_ePackage->getTag_Report();
	// std::bind(&UiFactory::createUIModel, this);
	// m_ePackage->getTag_UIModel();
	// std::bind(&UiFactory::createUILayout, this);
	// m_ePackage->getTag_UILayout();
	// std::bind(&UiFactory::createUIField, this);
	// m_ePackage->getTag_UIField();
	// std::bind(&UiFactory::createDisplaysImage, this);
	// m_ePackage->getTag_DisplaysImage();
	// std::bind(&UiFactory::createDisplays, this);
	// m_ePackage->getTag_Displays();
	// std::bind(&UiFactory::createUIFlow, this);
	// m_ePackage->getTag_UIFlow();
	// std::bind(&UiFactory::createUIElement, this);
	// m_ePackage->getTag_UIElement();
	// std::bind(&UiFactory::createUIRelationship, this);
	// m_ePackage->getTag_UIRelationship();
	// std::bind(&UiFactory::createUIAction, this);
	// m_ePackage->getTag_UIAction();
	// std::bind(&UiFactory::createUIEvent, this);
	// m_ePackage->getTag_UIEvent();
	// std::bind(&UiFactory::createReadsUI, this);
	// m_ePackage->getTag_ReadsUI();
	// std::bind(&UiFactory::createWritesUI, this);
	// m_ePackage->getTag_WritesUI();
	// std::bind(&UiFactory::createManagesUI, this);
	// m_ePackage->getTag_ManagesUI();
}

const UiFactory_ptr UiFactory::_instance()
{
	static UiFactory __instance;
	return &__instance;
}

UIResource_ptr UiFactory::createUIResource() const
{
	return new UIResource();
}

UIDisplay_ptr UiFactory::createUIDisplay() const
{
	return new UIDisplay();
}

Screen_ptr UiFactory::createScreen() const
{
	return new Screen();
}

Report_ptr UiFactory::createReport() const
{
	return new Report();
}

UIModel_ptr UiFactory::createUIModel() const
{
	return new UIModel();
}

UILayout_ptr UiFactory::createUILayout() const
{
	return new UILayout();
}

UIField_ptr UiFactory::createUIField() const
{
	return new UIField();
}

DisplaysImage_ptr UiFactory::createDisplaysImage() const
{
	return new DisplaysImage();
}

Displays_ptr UiFactory::createDisplays() const
{
	return new Displays();
}

UIFlow_ptr UiFactory::createUIFlow() const
{
	return new UIFlow();
}

UIElement_ptr UiFactory::createUIElement() const
{
	return new UIElement();
}

UIRelationship_ptr UiFactory::createUIRelationship() const
{
	return new UIRelationship();
}

UIAction_ptr UiFactory::createUIAction() const
{
	return new UIAction();
}

UIEvent_ptr UiFactory::createUIEvent() const
{
	return new UIEvent();
}

ReadsUI_ptr UiFactory::createReadsUI() const
{
	return new ReadsUI();
}

WritesUI_ptr UiFactory::createWritesUI() const
{
	return new WritesUI();
}

ManagesUI_ptr UiFactory::createManagesUI() const
{
	return new ManagesUI();
}

