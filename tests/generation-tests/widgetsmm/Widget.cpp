
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

void Widget::setName(name_t _name)
{
	m_name = _name;;
}

name_t Widget::getName() const
{
	return m_name;
}

void Widget::setType(type_t _type)
{
	m_type = _type;;
}

type_t Widget::getType() const
{
	return m_type;
}



