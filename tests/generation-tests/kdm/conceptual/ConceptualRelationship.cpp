
#include "ConceptualRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

ConceptualRelationship::ConceptualRelationship() : 
	m_to(),
    m_from()
{
}

ConceptualRelationship::~ConceptualRelationship()
{
}

ConceptualRelationship::to_t ConceptualRelationship::getTo() const
{
	return e4c::returned(m_to);
}

ConceptualRelationship::from_t ConceptualRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



