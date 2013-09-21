
#include "EventRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/event/AbstractEventElement.hpp>

using namespace kdm::event;

EventRelationship::EventRelationship() : 
	m_to(),
    m_from()
{
}

EventRelationship::~EventRelationship()
{
}

EventRelationship::to_t EventRelationship::getTo() const
{
	return e4c::returned(m_to);
}

EventRelationship::from_t EventRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



