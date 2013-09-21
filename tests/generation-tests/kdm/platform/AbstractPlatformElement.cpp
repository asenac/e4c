
#include "AbstractPlatformElement.hpp"
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::platform;

AbstractPlatformElement::AbstractPlatformElement() : 
	m_source(),
    m_relation(),
    m_abstraction(),
    m_implementation()
{
}

AbstractPlatformElement::~AbstractPlatformElement()
{
}

AbstractPlatformElement::source_t AbstractPlatformElement::getSource() const
{
	return e4c::returned(m_source);
}

AbstractPlatformElement::relation_t AbstractPlatformElement::getRelation() const
{
	return e4c::returned(m_relation);
}

AbstractPlatformElement::abstraction_t AbstractPlatformElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}

AbstractPlatformElement::implementation_t AbstractPlatformElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}



