
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

AbstractDataElement::source_t AbstractDataElement::getSource() const
{
	return e4c::returned(m_source);
}

AbstractDataElement::dataRelation_t AbstractDataElement::getDataRelation() const
{
	return e4c::returned(m_dataRelation);
}

AbstractDataElement::abstraction_t AbstractDataElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}



