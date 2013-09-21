#include "WidgetsmmPackage.hpp"
#include "WidgetsmmFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace widgetsmm;

WidgetsmmPackage::WidgetsmmPackage()
{
	m_eFactoryInstance = WidgetsmmFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr Widget_ = ecoreFactory->createEClass();
	Widget_->setName("Widget");
	// m_eClassifiers.push_back(Widget_);
	::ecore::EClass_ptr ComboBox_ = ecoreFactory->createEClass();
	ComboBox_->setName("ComboBox");
	// m_eClassifiers.push_back(ComboBox_);
	::ecore::EClass_ptr Window_ = ecoreFactory->createEClass();
	Window_->setName("Window");
	// m_eClassifiers.push_back(Window_);
	::ecore::EClass_ptr Property_ = ecoreFactory->createEClass();
	Property_->setName("Property");
	// m_eClassifiers.push_back(Property_);
	
	
	// ComboBox_->addESuperType(Widget_);
	// Window_->addESuperType(Widget_);
	
	
	
	
}

const WidgetsmmPackage_ptr WidgetsmmPackage::_instance()
{
	static WidgetsmmPackage __instance;
	return &__instance;
}

e4c::tag_t WidgetsmmPackage::getTag_Widget() const
{
	return e4c::tag< Widget >::get();
}
 
e4c::tag_t WidgetsmmPackage::getTag_ComboBox() const
{
	return e4c::tag< ComboBox >::get();
}
 
e4c::tag_t WidgetsmmPackage::getTag_Window() const
{
	return e4c::tag< Window >::get();
}
 
e4c::tag_t WidgetsmmPackage::getTag_Property() const
{
	return e4c::tag< Property >::get();
}
 
e4c::tag_t WidgetsmmPackage::getTag_Widget__parent() const
{
	return e4c::tag< Widget__parent_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Widget__properties() const
{
	return e4c::tag< Widget__properties_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Widget__name() const
{
	return e4c::tag< Widget__name_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Widget__type() const
{
	return e4c::tag< Widget__type_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_ComboBox__count() const
{
	return e4c::tag< ComboBox__count_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_ComboBox__currentIndex() const
{
	return e4c::tag< ComboBox__currentIndex_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Window__title() const
{
	return e4c::tag< Window__title_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Window__children() const
{
	return e4c::tag< Window__children_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Property__name() const
{
	return e4c::tag< Property__name_tag >::get();
}

e4c::tag_t WidgetsmmPackage::getTag_Property__value() const
{
	return e4c::tag< Property__value_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_widgetsmm()
{
	return ::widgetsmm::WidgetsmmPackage::_instance();
}
