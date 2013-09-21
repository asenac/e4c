
#include "ManagesUI.hpp"
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

ManagesUI::ManagesUI() : 
	m_to(),
    m_from()
{
}

ManagesUI::~ManagesUI()
{
}

ManagesUI::to_t ManagesUI::getTo() const
{
	return e4c::returned(m_to);
}

ManagesUI::from_t ManagesUI::getFrom() const
{
	return e4c::returned(m_from);
}



