
#include "ControlElement.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

ControlElement::ControlElement() : 
	m_type(),
    m_entryFlow(),
    m_codeElement()
{
}

ControlElement::~ControlElement()
{
}

ControlElement::type_t ControlElement::getType() const
{
	return e4c::returned(m_type);
}

ControlElement::entryFlow_t ControlElement::getEntryFlow() const
{
	return e4c::returned(m_entryFlow);
}

ControlElement::codeElement_t ControlElement::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



