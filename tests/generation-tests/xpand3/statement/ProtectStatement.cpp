
#include "ProtectStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

ProtectStatement::ProtectStatement() : 
	m_commentStart(),
    m_commentEnd(),
    m_id(),
    m_disable()
{
}

ProtectStatement::~ProtectStatement()
{
}

void ProtectStatement::setDisable(disable_t _disable)
{
	m_disable = _disable;;
}

disable_t ProtectStatement::getDisable() const
{
	return m_disable;
}



