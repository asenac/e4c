
#include "ConceptualRole.hpp"
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

ConceptualRole::ConceptualRole() : 
	m_conceptualElement()
{
}

ConceptualRole::~ConceptualRole()
{
}

ConceptualRole::conceptualElement_t ConceptualRole::getConceptualElement() const
{
	return e4c::returned(m_conceptualElement);
}



