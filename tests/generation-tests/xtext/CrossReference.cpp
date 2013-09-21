
#include "CrossReference.hpp"
#include <xtext/TypeRef.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

CrossReference::CrossReference() : 
	m_type(),
    m_terminal()
{
}

CrossReference::~CrossReference()
{
}

CrossReference::type_t CrossReference::getType() const
{
	return e4c::returned(m_type);
}

CrossReference::terminal_t CrossReference::getTerminal() const
{
	return e4c::returned(m_terminal);
}



