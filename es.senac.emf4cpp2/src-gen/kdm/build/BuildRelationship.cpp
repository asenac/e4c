
#include "kdm/build/BuildRelationship.hpp"

using namespace kdm::build;

BuildRelationship::BuildRelationship() : to(this), from(this)
{
}

BuildRelationship::~BuildRelationship()
{
}

