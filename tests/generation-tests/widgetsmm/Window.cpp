
#include "Window.hpp"
#include <widgetsmm/WidgetsmmPackage.hpp>
#include <widgetsmm/Widget.hpp>

using namespace widgetsmm;

/*PROTECTED REGION ID(widgetsmm::Window include) START*/
/*PROTECTED REGION END*/

Window::Window() :
    m_title(),
    m_children()
{
    /*PROTECTED REGION ID(Window constructor) START*/
    /*PROTECTED REGION END*/
}

Window::~Window()
{
    /*PROTECTED REGION ID(Window destructor) START*/
    /*PROTECTED REGION END*/
}

void Window::setTitle(title_t _title)
{
    m_title = _title;;
}

Window::title_t Window::getTitle() const
{
    return m_title;
}

Window::children_t Window::getChildren() const
{
    return e4c::returned(m_children);
}


void Window::addChildren(widgetsmm::Widget_ptr children_)
{
    children_->setParent(this);
    m_children.push_back(std::unique_ptr < widgetsmm::Widget >(children_));
}

void Window::addAllChildren(const children_t& children_)
{
    for (auto i = children_.begin(); i != children_.end(); i++)
        addChildren(*i);
}



/*PROTECTED REGION ID(widgetsmm::Window implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Window::eClassImpl() const
{
    return WidgetsmmPackage::_instance()->getWindow();
}

