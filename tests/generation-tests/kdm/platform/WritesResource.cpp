
#include "WritesResource.hpp"
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

WritesResource::WritesResource() : 
	m_to(),
    m_from()
{
}

WritesResource::~WritesResource()
{
}

WritesResource::to_t WritesResource::getTo() const
{
	return e4c::returned(m_to);
}

WritesResource::from_t WritesResource::getFrom() const
{
	return e4c::returned(m_from);
}



