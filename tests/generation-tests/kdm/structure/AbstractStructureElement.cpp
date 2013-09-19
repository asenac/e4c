
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



