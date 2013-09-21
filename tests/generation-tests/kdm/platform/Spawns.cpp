
#include "Spawns.hpp"
#include <kdm/platform/RuntimeResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

Spawns::Spawns() : 
	m_to(),
    m_from()
{
}

Spawns::~Spawns()
{
}

Spawns::to_t Spawns::getTo() const
{
	return e4c::returned(m_to);
}

Spawns::from_t Spawns::getFrom() const
{
	return e4c::returned(m_from);
}



