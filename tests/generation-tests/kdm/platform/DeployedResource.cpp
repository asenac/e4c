
#include "DeployedResource.hpp"
#include <kdm/platform/ResourceType.hpp>

using namespace kdm::platform;

DeployedResource::DeployedResource() : 
	m_platformElement()
{
}

DeployedResource::~DeployedResource()
{
}

DeployedResource::platformElement_t DeployedResource::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}



