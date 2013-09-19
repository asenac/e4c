
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

void AggregatedRelationship::setDensity(density_t _density)
{
	m_density = _density;;
}

density_t AggregatedRelationship::getDensity() const
{
	return m_density;
}



