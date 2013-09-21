
#include "ResourceType.hpp"
#include <kdm/platform/AbstractPlatformElement.hpp>

using namespace kdm::platform;

ResourceType::ResourceType() : 
	m_platformElement()
{
}

ResourceType::~ResourceType()
{
}

ResourceType::platformElement_t ResourceType::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}



