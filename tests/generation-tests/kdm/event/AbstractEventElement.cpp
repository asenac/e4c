
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



