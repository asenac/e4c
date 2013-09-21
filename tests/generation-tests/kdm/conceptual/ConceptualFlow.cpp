
#include "ConceptualFlow.hpp"
#include <kdm/conceptual/ConceptualContainer.hpp>

using namespace kdm::conceptual;

ConceptualFlow::ConceptualFlow() : 
	m_to(),
    m_from()
{
}

ConceptualFlow::~ConceptualFlow()
{
}

ConceptualFlow::to_t ConceptualFlow::getTo() const
{
	return e4c::returned(m_to);
}

ConceptualFlow::from_t ConceptualFlow::getFrom() const
{
	return e4c::returned(m_from);
}



