
#include "Widget.hpp"
#include <widgetsmm/WidgetsmmPackage.hpp>
#include <widgetsmm/Window.hpp>
#include <widgetsmm/Property.hpp>

using namespace widgetsmm;

/*PROTECTED REGION ID(widgetsmm::Widget include) START*/
/*PROTECTED REGION END*/

Widget::Widget() : 
	m_parent(),
    m_properties(),
    m_name(),
    m_type()
{
	/*PROTECTED REGION ID(Widget constructor) START*/
	/*PROTECTED REGION END*/
}

Widget::~Widget()
{
	/*PROTECTED REGION ID(Widget destructor) START*/
	/*PROTECTED REGION END*/
}

Widget::parent_t Widget::getParent() const
{
	return e4c::returned(m_parent);
}

void Widget::setParent(parent_t parent_)
{
	m_parent = parent_;
}

Widget::properties_t Widget::getProperties() const
{
	return e4c::returned(m_properties);
}


void Widget::addProperties(widgetsmm::Property_ptr properties_)
{
	m_properties.push_back(std::unique_ptr < widgetsmm::Property >(properties_));
}

void Widget::addAllProperties(const properties_t& properties_)
{
	for (auto i = properties_.begin(); i != properties_.end(); i++)
		addProperties(*i);
}

void Widget::setName(name_t _name)
{
	m_name = _name;;
}

Widget::name_t Widget::getName() const
{
	return m_name;
}

void Widget::setType(type_t _type)
{
	m_type = _type;;
}

Widget::type_t Widget::getType() const
{
	return m_type;
}



/*PROTECTED REGION ID(widgetsmm::Widget implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Widget::eClassImpl() const
{
	return WidgetsmmPackage::_instance()->getWidget();
}
 
