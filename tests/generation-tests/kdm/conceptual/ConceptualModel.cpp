
#include "ConceptualModel.hpp"
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

ConceptualModel::ConceptualModel() : 
	m_conceptualElement()
{
}

ConceptualModel::~ConceptualModel()
{
}

ConceptualModel::conceptualElement_t ConceptualModel::getConceptualElement() const
{
	return e4c::returned(m_conceptualElement);
}



