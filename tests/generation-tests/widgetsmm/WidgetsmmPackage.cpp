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
	
	
	
	m_Widget = ecoreFactory->createEClass();
	m_Widget->setName("Widget");
	addEClassifiers(m_Widget);
	m_ComboBox = ecoreFactory->createEClass();
	m_ComboBox->setName("ComboBox");
	addEClassifiers(m_ComboBox);
	m_Window = ecoreFactory->createEClass();
	m_Window->setName("Window");
	addEClassifiers(m_Window);
	m_Property = ecoreFactory->createEClass();
	m_Property->setName("Property");
	addEClassifiers(m_Property);

	
    {
        m_Widget__parent = ecoreFactory->createEReference();
        m_Widget__parent->setName("parent");
        m_Widget->addEStructuralFeatures(m_Widget__parent);
        m_Widget->addEAllStructuralFeatures(m_Widget__parent);
        m_Widget->addEReferences(m_Widget__parent);
        m_Widget->addEAllReferences(m_Widget__parent);
    }
    {
        m_Widget__properties = ecoreFactory->createEReference();
        m_Widget__properties->setName("properties");
        m_Widget->addEStructuralFeatures(m_Widget__properties);
        m_Widget->addEAllStructuralFeatures(m_Widget__properties);
        m_Widget->addEReferences(m_Widget__properties);
        m_Widget->addEAllReferences(m_Widget__properties);
    }
    {
        m_Widget__name = ecoreFactory->createEAttribute();
        m_Widget__name->setName("name");
        m_Widget->addEStructuralFeatures(m_Widget__name);
        m_Widget->addEAllStructuralFeatures(m_Widget__name);
        m_Widget->addEAttributes(m_Widget__name);
        m_Widget->addEAllAttributes(m_Widget__name);
    }
    {
        m_Widget__type = ecoreFactory->createEAttribute();
        m_Widget__type->setName("type");
        m_Widget->addEStructuralFeatures(m_Widget__type);
        m_Widget->addEAllStructuralFeatures(m_Widget__type);
        m_Widget->addEAttributes(m_Widget__type);
        m_Widget->addEAllAttributes(m_Widget__type);
    }
    {
        m_ComboBox__count = ecoreFactory->createEAttribute();
        m_ComboBox__count->setName("count");
        m_ComboBox->addEStructuralFeatures(m_ComboBox__count);
        m_ComboBox->addEAllStructuralFeatures(m_ComboBox__count);
        m_ComboBox->addEAttributes(m_ComboBox__count);
        m_ComboBox->addEAllAttributes(m_ComboBox__count);
    }
    {
        m_ComboBox__currentIndex = ecoreFactory->createEAttribute();
        m_ComboBox__currentIndex->setName("currentIndex");
        m_ComboBox->addEStructuralFeatures(m_ComboBox__currentIndex);
        m_ComboBox->addEAllStructuralFeatures(m_ComboBox__currentIndex);
        m_ComboBox->addEAttributes(m_ComboBox__currentIndex);
        m_ComboBox->addEAllAttributes(m_ComboBox__currentIndex);
    }
    {
        m_Window__title = ecoreFactory->createEAttribute();
        m_Window__title->setName("title");
        m_Window->addEStructuralFeatures(m_Window__title);
        m_Window->addEAllStructuralFeatures(m_Window__title);
        m_Window->addEAttributes(m_Window__title);
        m_Window->addEAllAttributes(m_Window__title);
    }
    {
        m_Window__children = ecoreFactory->createEReference();
        m_Window__children->setName("children");
        m_Window->addEStructuralFeatures(m_Window__children);
        m_Window->addEAllStructuralFeatures(m_Window__children);
        m_Window->addEReferences(m_Window__children);
        m_Window->addEAllReferences(m_Window__children);
    }
    {
        m_Property__name = ecoreFactory->createEAttribute();
        m_Property__name->setName("name");
        m_Property->addEStructuralFeatures(m_Property__name);
        m_Property->addEAllStructuralFeatures(m_Property__name);
        m_Property->addEAttributes(m_Property__name);
        m_Property->addEAllAttributes(m_Property__name);
    }
    {
        m_Property__value = ecoreFactory->createEAttribute();
        m_Property__value->setName("value");
        m_Property->addEStructuralFeatures(m_Property__value);
        m_Property->addEAllStructuralFeatures(m_Property__value);
        m_Property->addEAttributes(m_Property__value);
        m_Property->addEAllAttributes(m_Property__value);
    }
	
	m_ComboBox->addESuperTypes(m_Widget);
	m_ComboBox->addAllEAllOperations(m_Widget->getEOperations());
	m_ComboBox->addAllEAllReferences(m_Widget->getEReferences());
	m_ComboBox->addAllEAllAttributes(m_Widget->getEAttributes());
	m_ComboBox->addAllEAllStructuralFeatures(m_Widget->getEStructuralFeatures());
	m_Window->addESuperTypes(m_Widget);
	m_Window->addAllEAllOperations(m_Widget->getEOperations());
	m_Window->addAllEAllReferences(m_Widget->getEReferences());
	m_Window->addAllEAllAttributes(m_Widget->getEAttributes());
	m_Window->addAllEAllStructuralFeatures(m_Widget->getEStructuralFeatures());
	
	
	m_Widget->addFeatureAccesors(m_Widget__parent, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Widget_ptr >(o)->getParent()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Widget->addFeatureAccesors(m_Widget__properties, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Widget_ptr >(o)->getProperties()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Widget->addFeatureAccesors(m_Widget__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Widget_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Widget->addFeatureAccesors(m_Widget__type, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Widget_ptr >(o)->getType()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ComboBox->addFeatureAccesors(m_ComboBox__count, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::ComboBox_ptr >(o)->getCount()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_ComboBox->addFeatureAccesors(m_ComboBox__currentIndex, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::ComboBox_ptr >(o)->getCurrentIndex()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Window->addFeatureAccesors(m_Window__title, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Window_ptr >(o)->getTitle()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Window->addFeatureAccesors(m_Window__children, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Window_ptr >(o)->getChildren()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__name, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Property_ptr >(o)->getName()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_Property->addFeatureAccesors(m_Property__value, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< widgetsmm::Property_ptr >(o)->getValue()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const WidgetsmmPackage_ptr WidgetsmmPackage::_instance()
{
	static WidgetsmmPackage __instance;
	return &__instance;
}

ecore::EClass_ptr WidgetsmmPackage::getWidget() const
{
	return m_Widget;
}
  	
e4c::tag_t WidgetsmmPackage::getTag_Widget() const
{
	return e4c::tag< Widget >::get();
}
 
ecore::EClass_ptr WidgetsmmPackage::getComboBox() const
{
	return m_ComboBox;
}
  	
e4c::tag_t WidgetsmmPackage::getTag_ComboBox() const
{
	return e4c::tag< ComboBox >::get();
}
 
ecore::EClass_ptr WidgetsmmPackage::getWindow() const
{
	return m_Window;
}
  	
e4c::tag_t WidgetsmmPackage::getTag_Window() const
{
	return e4c::tag< Window >::get();
}
 
ecore::EClass_ptr WidgetsmmPackage::getProperty() const
{
	return m_Property;
}
  	
e4c::tag_t WidgetsmmPackage::getTag_Property() const
{
	return e4c::tag< Property >::get();
}
 
e4c::tag_t WidgetsmmPackage::getTag_Widget__parent() const
{
	return e4c::tag< Widget__parent_tag >::get();
}

ecore::EReference_ptr WidgetsmmPackage::getWidget__parent() const
{
	return m_Widget__parent;
}

e4c::tag_t WidgetsmmPackage::getTag_Widget__properties() const
{
	return e4c::tag< Widget__properties_tag >::get();
}

ecore::EReference_ptr WidgetsmmPackage::getWidget__properties() const
{
	return m_Widget__properties;
}

e4c::tag_t WidgetsmmPackage::getTag_Widget__name() const
{
	return e4c::tag< Widget__name_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getWidget__name() const
{
	return m_Widget__name;
}

e4c::tag_t WidgetsmmPackage::getTag_Widget__type() const
{
	return e4c::tag< Widget__type_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getWidget__type() const
{
	return m_Widget__type;
}

e4c::tag_t WidgetsmmPackage::getTag_ComboBox__count() const
{
	return e4c::tag< ComboBox__count_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getComboBox__count() const
{
	return m_ComboBox__count;
}

e4c::tag_t WidgetsmmPackage::getTag_ComboBox__currentIndex() const
{
	return e4c::tag< ComboBox__currentIndex_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getComboBox__currentIndex() const
{
	return m_ComboBox__currentIndex;
}

e4c::tag_t WidgetsmmPackage::getTag_Window__title() const
{
	return e4c::tag< Window__title_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getWindow__title() const
{
	return m_Window__title;
}

e4c::tag_t WidgetsmmPackage::getTag_Window__children() const
{
	return e4c::tag< Window__children_tag >::get();
}

ecore::EReference_ptr WidgetsmmPackage::getWindow__children() const
{
	return m_Window__children;
}

e4c::tag_t WidgetsmmPackage::getTag_Property__name() const
{
	return e4c::tag< Property__name_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getProperty__name() const
{
	return m_Property__name;
}

e4c::tag_t WidgetsmmPackage::getTag_Property__value() const
{
	return e4c::tag< Property__value_tag >::get();
}

ecore::EAttribute_ptr WidgetsmmPackage::getProperty__value() const
{
	return m_Property__value;
}


extern "C" ::ecore::EPackage_ptr e4c_widgetsmm()
{
	return ::widgetsmm::WidgetsmmPackage::_instance();
}
