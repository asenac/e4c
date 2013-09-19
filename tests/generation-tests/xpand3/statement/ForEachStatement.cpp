
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



