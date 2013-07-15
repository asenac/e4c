
#include "kdm/conceptual/ConceptualRelationship.hpp"

using namespace kdm::conceptual;

ConceptualRelationship::ConceptualRelationship() : to(this), from(this)
{
}

ConceptualRelationship::~ConceptualRelationship()
{
}

