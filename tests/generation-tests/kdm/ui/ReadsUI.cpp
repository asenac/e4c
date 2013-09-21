
#include "ReadsUI.hpp"
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

ReadsUI::ReadsUI() : 
	m_to(),
    m_from()
{
}

ReadsUI::~ReadsUI()
{
}

ReadsUI::to_t ReadsUI::getTo() const
{
	return e4c::returned(m_to);
}

ReadsUI::from_t ReadsUI::getFrom() const
{
	return e4c::returned(m_from);
}



