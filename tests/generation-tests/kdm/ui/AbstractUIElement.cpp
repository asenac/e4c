
#include "AbstractUIElement.hpp"
#include <kdm/source/SourceRef.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

AbstractUIElement::AbstractUIElement() : 
	m_source(),
    m_UIRelation(),
    m_implementation(),
    m_abstraction()
{
}

AbstractUIElement::~AbstractUIElement()
{
}



