
#include "ErrorStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

ErrorStatement::ErrorStatement() : 
	m_message()
{
}

ErrorStatement::~ErrorStatement()
{
}

ErrorStatement::message_t ErrorStatement::getMessage() const
{
	return e4c::returned(m_message);
}



