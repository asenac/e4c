
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



