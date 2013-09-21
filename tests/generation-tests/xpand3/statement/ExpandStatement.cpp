
#include "ExpandStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::statement;

ExpandStatement::ExpandStatement() : 
	m_foreach(),
    m_parameters(),
    m_separator(),
    m_target(),
    m_definition()
{
}

ExpandStatement::~ExpandStatement()
{
}

void ExpandStatement::setForeach(foreach_t _foreach)
{
	m_foreach = _foreach;;
}

ExpandStatement::foreach_t ExpandStatement::getForeach() const
{
	return m_foreach;
}

ExpandStatement::parameters_t ExpandStatement::getParameters() const
{
	return e4c::returned(m_parameters);
}

ExpandStatement::separator_t ExpandStatement::getSeparator() const
{
	return e4c::returned(m_separator);
}

ExpandStatement::target_t ExpandStatement::getTarget() const
{
	return e4c::returned(m_target);
}

ExpandStatement::definition_t ExpandStatement::getDefinition() const
{
	return e4c::returned(m_definition);
}



