
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

IfStatement::condition_t IfStatement::getCondition() const
{
	return e4c::returned(m_condition);
}

IfStatement::elseIf_t IfStatement::getElseIf() const
{
	return e4c::returned(m_elseIf);
}



