
#include "ForEachStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::statement;

ForEachStatement::ForEachStatement() : 
	m_target(),
    m_separator(),
    m_variable(),
    m_iteratorName()
{
}

ForEachStatement::~ForEachStatement()
{
}

ForEachStatement::target_t ForEachStatement::getTarget() const
{
	return e4c::returned(m_target);
}

ForEachStatement::separator_t ForEachStatement::getSeparator() const
{
	return e4c::returned(m_separator);
}

ForEachStatement::variable_t ForEachStatement::getVariable() const
{
	return e4c::returned(m_variable);
}

ForEachStatement::iteratorName_t ForEachStatement::getIteratorName() const
{
	return e4c::returned(m_iteratorName);
}



