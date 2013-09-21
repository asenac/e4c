
#include "ReadsResource.hpp"
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

ReadsResource::ReadsResource() : 
	m_to(),
    m_from()
{
}

ReadsResource::~ReadsResource()
{
}

ReadsResource::to_t ReadsResource::getTo() const
{
	return e4c::returned(m_to);
}

ReadsResource::from_t ReadsResource::getFrom() const
{
	return e4c::returned(m_from);
}



