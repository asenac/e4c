#include "WidgetsmmFactory.hpp"
#include "WidgetsmmPackage.hpp"
#include "include.hpp"

using namespace widgetsmm;

WidgetsmmFactory::WidgetsmmFactory()
{
	// m_ePackage = WidgetsmmPackage::_instance();
	// std::bind(&WidgetsmmFactory::createWidget, this);
	// m_ePackage->getTag_Widget();
	// std::bind(&WidgetsmmFactory::createComboBox, this);
	// m_ePackage->getTag_ComboBox();
	// std::bind(&WidgetsmmFactory::createWindow, this);
	// m_ePackage->getTag_Window();
	// std::bind(&WidgetsmmFactory::createProperty, this);
	// m_ePackage->getTag_Property();
}

const WidgetsmmFactory_ptr WidgetsmmFactory::_instance()
{
	static WidgetsmmFactory __instance;
	return &__instance;
}

Widget_ptr WidgetsmmFactory::createWidget() const
{
	return new Widget();
}

ComboBox_ptr WidgetsmmFactory::createComboBox() const
{
	return new ComboBox();
}

Window_ptr WidgetsmmFactory::createWindow() const
{
	return new Window();
}

Property_ptr WidgetsmmFactory::createProperty() const
{
	return new Property();
}

