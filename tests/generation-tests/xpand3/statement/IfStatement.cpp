
#include "IfStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/statement/IfStatement.hpp>

using namespace xpand3::statement;

IfStatement::IfStatement() : 
	m_condition(),
    m_elseIf()
{
}

IfStatement::~IfStatement()
{
}



