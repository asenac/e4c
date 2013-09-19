
#include "AbstractDataElement.hpp"
#include <kdm/source/SourceRef.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

AbstractDataElement::AbstractDataElement() : 
	m_source(),
    m_dataRelation(),
    m_abstraction()
{
}

AbstractDataElement::~AbstractDataElement()
{
}



