
#include "AggregatedRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>

using namespace kdm::core;

AggregatedRelationship::AggregatedRelationship() : 
	m_from(),
    m_to(),
    m_relation(),
    m_density()
{
}

AggregatedRelationship::~AggregatedRelationship()
{
}

AggregatedRelationship::from_t AggregatedRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

AggregatedRelationship::to_t AggregatedRelationship::getTo() const
{
	return e4c::returned(m_to);
}

AggregatedRelationship::relation_t AggregatedRelationship::getRelation() const
{
	return e4c::returned(m_relation);
}

void AggregatedRelationship::setDensity(density_t _density)
{
	m_density = _density;;
}

AggregatedRelationship::density_t AggregatedRelationship::getDensity() const
{
	return m_density;
}



