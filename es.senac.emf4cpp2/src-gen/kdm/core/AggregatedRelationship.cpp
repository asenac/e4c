
#include "kdm/core/AggregatedRelationship.hpp"

using namespace kdm::core;

AggregatedRelationship::AggregatedRelationship() : from(this), to(this), relation(this), density(this)
{
}

AggregatedRelationship::~AggregatedRelationship()
{
}

