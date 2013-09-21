
#include "Widget.hpp"
#include <widgetsmm/Window.hpp>
#include <widgetsmm/Property.hpp>

using namespace widgetsmm;

Widget::Widget() : 
	m_parent(),
    m_properties(),
    m_name(),
    m_type()
{
}

Widget::~Widget()
{
}

Widget::parent_t Widget::getParent() const
{
	return e4c::returned(m_parent);
}

Widget::properties_t Widget::getProperties() const
{
	return e4c::returned(m_properties);
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



