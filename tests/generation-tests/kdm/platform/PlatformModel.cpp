
#include "PlatformModel.hpp"
#include <kdm/platform/AbstractPlatformElement.hpp>

using namespace kdm::platform;

PlatformModel::PlatformModel() : 
	m_platformElement()
{
}

PlatformModel::~PlatformModel()
{
}

PlatformModel::platformElement_t PlatformModel::getPlatformElement() const
{
	return e4c::returned(m_platformElement);
}



