
#include "LetStatement.hpp"
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

LetStatement::LetStatement() : 
	m_varName(),
    m_varValue()
{
}

LetStatement::~LetStatement()
{
}



