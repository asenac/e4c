
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

ProtectStatement::commentStart_t ProtectStatement::getCommentStart() const
{
	return e4c::returned(m_commentStart);
}

ProtectStatement::commentEnd_t ProtectStatement::getCommentEnd() const
{
	return e4c::returned(m_commentEnd);
}

ProtectStatement::id_t ProtectStatement::getId() const
{
	return e4c::returned(m_id);
}

void ProtectStatement::setDisable(disable_t _disable)
{
	m_disable = _disable;;
}

ProtectStatement::disable_t ProtectStatement::getDisable() const
{
	return m_disable;
}



