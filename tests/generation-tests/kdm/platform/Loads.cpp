
#include "Loads.hpp"
#include <kdm/platform/DeployedComponent.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

Loads::Loads() : 
	m_to(),
    m_from()
{
}

Loads::~Loads()
{
}

Loads::to_t Loads::getTo() const
{
	return e4c::returned(m_to);
}

Loads::from_t Loads::getFrom() const
{
	return e4c::returned(m_from);
}



