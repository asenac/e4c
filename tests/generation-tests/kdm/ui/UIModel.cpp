
#include "UIModel.hpp"
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

UIModel::UIModel() : 
	m_UIElement()
{
}

UIModel::~UIModel()
{
}

UIModel::UIElement_t UIModel::getUIElement() const
{
	return e4c::returned(m_UIElement);
}



