
#include "BindsTo.hpp"
#include <kdm/platform/ResourceType.hpp>

using namespace kdm::platform;

BindsTo::BindsTo() : 
	m_to(),
    m_from()
{
}

BindsTo::~BindsTo()
{
}

BindsTo::to_t BindsTo::getTo() const
{
	return e4c::returned(m_to);
}

BindsTo::from_t BindsTo::getFrom() const
{
	return e4c::returned(m_from);
}



