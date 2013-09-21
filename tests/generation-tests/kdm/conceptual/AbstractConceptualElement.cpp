
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

AbstractConceptualElement::source_t AbstractConceptualElement::getSource() const
{
	return e4c::returned(m_source);
}

AbstractConceptualElement::implementation_t AbstractConceptualElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

AbstractConceptualElement::conceptualRelation_t AbstractConceptualElement::getConceptualRelation() const
{
	return e4c::returned(m_conceptualRelation);
}

AbstractConceptualElement::abstraction_t AbstractConceptualElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}



