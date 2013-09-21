
#include "WritesUI.hpp"
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

WritesUI::WritesUI() : 
	m_to(),
    m_from()
{
}

WritesUI::~WritesUI()
{
}

WritesUI::to_t WritesUI::getTo() const
{
	return e4c::returned(m_to);
}

WritesUI::from_t WritesUI::getFrom() const
{
	return e4c::returned(m_from);
}



