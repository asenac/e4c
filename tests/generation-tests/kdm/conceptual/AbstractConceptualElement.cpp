
#include "AbstractConceptualElement.hpp"
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::conceptual;

AbstractConceptualElement::AbstractConceptualElement() : 
	m_source(),
    m_implementation(),
    m_conceptualRelation(),
    m_abstraction()
{
}

AbstractConceptualElement::~AbstractConceptualElement()
{
}



