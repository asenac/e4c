
#include "Window.hpp"
#include <widgetsmm/Widget.hpp>

using namespace widgetsmm;

Window::Window() : 
	m_title(),
    m_children()
{
}

Window::~Window()
{
}

void Window::setTitle(title_t _title)
{
	m_title = _title;;
}

title_t Window::getTitle() const
{
	return m_title;
}



