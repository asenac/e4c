
#include "ActionRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

ActionRelationship::ActionRelationship() : 
	m_to(),
    m_from()
{
}

ActionRelationship::~ActionRelationship()
{
}

ActionRelationship::to_t ActionRelationship::getTo() const
{
	return e4c::returned(m_to);
}

ActionRelationship::from_t ActionRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



