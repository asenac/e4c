
#include "AbstractEventElement.hpp"
#include <kdm/source/SourceRef.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::event;

AbstractEventElement::AbstractEventElement() : 
	m_source(),
    m_eventRelation(),
    m_abstraction(),
    m_implementation()
{
}

AbstractEventElement::~AbstractEventElement()
{
}

AbstractEventElement::source_t AbstractEventElement::getSource() const
{
	return e4c::returned(m_source);
}

AbstractEventElement::eventRelation_t AbstractEventElement::getEventRelation() const
{
	return e4c::returned(m_eventRelation);
}

AbstractEventElement::abstraction_t AbstractEventElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}

AbstractEventElement::implementation_t AbstractEventElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}



