
#include "InventoryRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

InventoryRelationship::InventoryRelationship() : 
	m_to(),
    m_from()
{
}

InventoryRelationship::~InventoryRelationship()
{
}

InventoryRelationship::to_t InventoryRelationship::getTo() const
{
	return e4c::returned(m_to);
}

InventoryRelationship::from_t InventoryRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



