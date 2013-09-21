
#include "AbstractNegatedToken.hpp"
#include <xtext/AbstractElement.hpp>

using namespace xtext;

AbstractNegatedToken::AbstractNegatedToken() : 
	m_terminal()
{
}

AbstractNegatedToken::~AbstractNegatedToken()
{
}

AbstractNegatedToken::terminal_t AbstractNegatedToken::getTerminal() const
{
	return e4c::returned(m_terminal);
}



