
#include "Literal.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

Literal::Literal() : 
	m_literalValue()
{
}

Literal::~Literal()
{
}

Literal::literalValue_t Literal::getLiteralValue() const
{
	return e4c::returned(m_literalValue);
}



