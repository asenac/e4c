
#include "UIAction.hpp"
#include <kdm/ui/UIEvent.hpp>

using namespace kdm::ui;

UIAction::UIAction() : 
	m_kind(),
    m_UIElement()
{
}

UIAction::~UIAction()
{
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



