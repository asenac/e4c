
#include "AbstractStructureElement.hpp"
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>

using namespace kdm::structure;

AbstractStructureElement::AbstractStructureElement() : 
	m_aggregated(),
    m_implementation(),
    m_structureElement(),
    m_structureRelationship()
{
}

AbstractStructureElement::~AbstractStructureElement()
{
}

AbstractStructureElement::aggregated_t AbstractStructureElement::getAggregated() const
{
	return e4c::returned(m_aggregated);
}

AbstractStructureElement::implementation_t AbstractStructureElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

AbstractStructureElement::structureElement_t AbstractStructureElement::getStructureElement() const
{
	return e4c::returned(m_structureElement);
}

AbstractStructureElement::structureRelationship_t AbstractStructureElement::getStructureRelationship() const
{
	return e4c::returned(m_structureRelationship);
}



