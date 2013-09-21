
#include "ConceptualContainer.hpp"
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

ConceptualContainer::ConceptualContainer() : 
	m_conceptualElement()
{
}

ConceptualContainer::~ConceptualContainer()
{
}

ConceptualContainer::conceptualElement_t ConceptualContainer::getConceptualElement() const
{
	return e4c::returned(m_conceptualElement);
}



