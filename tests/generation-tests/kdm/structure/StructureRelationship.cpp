
#include "StructureRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

using namespace kdm::structure;

StructureRelationship::StructureRelationship() : 
	m_to(),
    m_from()
{
}

StructureRelationship::~StructureRelationship()
{
}

StructureRelationship::to_t StructureRelationship::getTo() const
{
	return e4c::returned(m_to);
}

StructureRelationship::from_t StructureRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



