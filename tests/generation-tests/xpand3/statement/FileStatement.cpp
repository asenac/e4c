
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

FileStatement::fileNameExpression_t FileStatement::getFileNameExpression() const
{
	return e4c::returned(m_fileNameExpression);
}

FileStatement::outletNameIdentifier_t FileStatement::getOutletNameIdentifier() const
{
	return e4c::returned(m_outletNameIdentifier);
}

void FileStatement::setOnce(once_t _once)
{
	m_once = _once;;
}

FileStatement::once_t FileStatement::getOnce() const
{
	return m_once;
}



