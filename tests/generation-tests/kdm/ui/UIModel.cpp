
#include "UIModel.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIModel include) START*/
/*PROTECTED REGION END*/

UIModel::UIModel() :
    m_UIElement()
{
    /*PROTECTED REGION ID(UIModel constructor) START*/
    /*PROTECTED REGION END*/
}

UIModel::~UIModel()
{
    /*PROTECTED REGION ID(UIModel destructor) START*/
    /*PROTECTED REGION END*/
}

UIModel::UIElement_t UIModel::getUIElement() const
{
    return e4c::returned(m_UIElement);
}


void UIModel::addUIElement(kdm::ui::AbstractUIElement_ptr UIElement_)
{
    m_UIElement.insert(std::unique_ptr < kdm::ui::AbstractUIElement >(UIElement_));
}

void UIModel::addAllUIElement(const UIElement_t& UIElement_)
{
    for (auto i = UIElement_.begin(); i != UIElement_.end(); i++)
        addUIElement(*i);
}



/*PROTECTED REGION ID(kdm::ui::UIModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIModel::eClassImpl() const
{
    return UiPackage::_instance()->getUIModel();
}

