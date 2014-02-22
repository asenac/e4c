
#include "UIAction.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIEvent.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIAction include) START*/
/*PROTECTED REGION END*/

UIAction::UIAction() :
    m_kind(),
    m_UIElement()
{
    /*PROTECTED REGION ID(UIAction constructor) START*/
    /*PROTECTED REGION END*/
}

UIAction::~UIAction()
{
    /*PROTECTED REGION ID(UIAction destructor) START*/
    /*PROTECTED REGION END*/
}

void UIAction::setKind(kind_t _kind)
{
    m_kind = _kind;;
}

UIAction::kind_t UIAction::getKind() const
{
    return m_kind;
}

UIAction::UIElement_t UIAction::getUIElement() const
{
    return e4c::returned(m_UIElement);
}


void UIAction::addUIElement(kdm::ui::UIEvent_ptr UIElement_)
{
    m_UIElement.insert(std::unique_ptr < kdm::ui::UIEvent >(UIElement_));
}

void UIAction::addAllUIElement(const UIElement_t& UIElement_)
{
    for (auto i = UIElement_.begin(); i != UIElement_.end(); i++)
        addUIElement(*i);
}



/*PROTECTED REGION ID(kdm::ui::UIAction implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIAction::eClassImpl() const
{
    return UiPackage::_instance()->getUIAction();
}

