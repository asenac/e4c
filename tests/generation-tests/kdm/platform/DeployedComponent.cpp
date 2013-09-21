
#include "DeployedComponent.hpp"
#include <kdm/code/Module.hpp>

using namespace kdm::platform;

DeployedComponent::DeployedComponent() : 
	m_groupedCode()
{
}

DeployedComponent::~DeployedComponent()
{
}

DeployedComponent::groupedCode_t DeployedComponent::getGroupedCode() const
{
	return e4c::returned(m_groupedCode);
}



