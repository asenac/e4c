
#include "UIResource.hpp"
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

UIResource::UIResource() : 
	m_UIElement()
{
}

UIResource::~UIResource()
{
}

UIResource::UIElement_t UIResource::getUIElement() const
{
	return e4c::returned(m_UIElement);
}



