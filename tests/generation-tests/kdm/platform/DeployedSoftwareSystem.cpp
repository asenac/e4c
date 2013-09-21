
#include "DeployedSoftwareSystem.hpp"
#include <kdm/platform/DeployedComponent.hpp>

using namespace kdm::platform;

DeployedSoftwareSystem::DeployedSoftwareSystem() : 
	m_groupedComponent()
{
}

DeployedSoftwareSystem::~DeployedSoftwareSystem()
{
}

DeployedSoftwareSystem::groupedComponent_t DeployedSoftwareSystem::getGroupedComponent() const
{
	return e4c::returned(m_groupedComponent);
}



