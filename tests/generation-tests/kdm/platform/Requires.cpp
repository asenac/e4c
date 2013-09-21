
#include "Requires.hpp"
#include <kdm/platform/AbstractPlatformElement.hpp>
#include <kdm/platform/DeployedComponent.hpp>

using namespace kdm::platform;

Requires::Requires() : 
	m_to(),
    m_from()
{
}

Requires::~Requires()
{
}

Requires::to_t Requires::getTo() const
{
	return e4c::returned(m_to);
}

Requires::from_t Requires::getFrom() const
{
	return e4c::returned(m_from);
}



