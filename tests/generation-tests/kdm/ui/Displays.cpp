
#include "Displays.hpp"
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

Displays::Displays() : 
	m_to(),
    m_from()
{
}

Displays::~Displays()
{
}

Displays::to_t Displays::getTo() const
{
	return e4c::returned(m_to);
}

Displays::from_t Displays::getFrom() const
{
	return e4c::returned(m_from);
}



