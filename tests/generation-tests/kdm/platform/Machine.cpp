
#include "Machine.hpp"
#include <kdm/platform/DeployedComponent.hpp>
#include <kdm/platform/DeployedResource.hpp>

using namespace kdm::platform;

Machine::Machine() : 
	m_deployedComponent(),
    m_deployedResource()
{
}

Machine::~Machine()
{
}

Machine::deployedComponent_t Machine::getDeployedComponent() const
{
	return e4c::returned(m_deployedComponent);
}

Machine::deployedResource_t Machine::getDeployedResource() const
{
	return e4c::returned(m_deployedResource);
}



