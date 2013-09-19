
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



