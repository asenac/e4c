
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

foreach_t ExpandStatement::getForeach() const
{
	return m_foreach;
}



