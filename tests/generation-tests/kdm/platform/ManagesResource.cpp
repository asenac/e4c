
#include "ManagesResource.hpp"
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

ManagesResource::ManagesResource() : 
	m_to(),
    m_from()
{
}

ManagesResource::~ManagesResource()
{
}

ManagesResource::to_t ManagesResource::getTo() const
{
	return e4c::returned(m_to);
}

ManagesResource::from_t ManagesResource::getFrom() const
{
	return e4c::returned(m_from);
}



