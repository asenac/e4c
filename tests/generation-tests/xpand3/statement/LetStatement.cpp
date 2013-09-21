
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

LetStatement::varName_t LetStatement::getVarName() const
{
	return e4c::returned(m_varName);
}

LetStatement::varValue_t LetStatement::getVarValue() const
{
	return e4c::returned(m_varValue);
}



