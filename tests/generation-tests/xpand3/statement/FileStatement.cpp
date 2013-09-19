
#include "FileStatement.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::statement;

FileStatement::FileStatement() : 
	m_fileNameExpression(),
    m_outletNameIdentifier(),
    m_once()
{
}

FileStatement::~FileStatement()
{
}

void FileStatement::setOnce(once_t _once)
{
	m_once = _once;;
}

once_t FileStatement::getOnce() const
{
	return m_once;
}



