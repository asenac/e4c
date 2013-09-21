
#include "UILayout.hpp"
#include <kdm/ui/UIResource.hpp>

using namespace kdm::ui;

UILayout::UILayout() : 
	m_to(),
    m_from()
{
}

UILayout::~UILayout()
{
}

UILayout::to_t UILayout::getTo() const
{
	return e4c::returned(m_to);
}

UILayout::from_t UILayout::getFrom() const
{
	return e4c::returned(m_from);
}



