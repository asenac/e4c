
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

AbstractUIElement::source_t AbstractUIElement::getSource() const
{
	return e4c::returned(m_source);
}

AbstractUIElement::UIRelation_t AbstractUIElement::getUIRelation() const
{
	return e4c::returned(m_UIRelation);
}

AbstractUIElement::implementation_t AbstractUIElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

AbstractUIElement::abstraction_t AbstractUIElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}



