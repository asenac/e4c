
#include "kdm/structure/AbstractStructureElement.hpp"

using namespace kdm::structure;

AbstractStructureElement::AbstractStructureElement() : aggregated(this), implementation(this), structureElement(this), structureRelationship(this)
{
}

AbstractStructureElement::~AbstractStructureElement()
{
}

