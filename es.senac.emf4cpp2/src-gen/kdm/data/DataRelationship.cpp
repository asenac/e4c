
#include "kdm/data/DataRelationship.hpp"

using namespace kdm::data;

DataRelationship::DataRelationship() : to(this), from(this)
{
}

DataRelationship::~DataRelationship()
{
}

