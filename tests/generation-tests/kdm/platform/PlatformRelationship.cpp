
#include "PlatformRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

using namespace kdm::platform;

PlatformRelationship::PlatformRelationship() : 
	m_to(),
    m_from()
{
}

PlatformRelationship::~PlatformRelationship()
{
}

PlatformRelationship::to_t PlatformRelationship::getTo() const
{
	return e4c::returned(m_to);
}

PlatformRelationship::from_t PlatformRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



