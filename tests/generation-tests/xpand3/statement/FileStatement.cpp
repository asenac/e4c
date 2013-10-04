
#include "FileStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::FileStatement include) START*/
/*PROTECTED REGION END*/

FileStatement::FileStatement() : 
	m_fileNameExpression(),
    m_outletNameIdentifier(),
    m_once()
{
	/*PROTECTED REGION ID(FileStatement constructor) START*/
	/*PROTECTED REGION END*/
}

FileStatement::~FileStatement()
{
	/*PROTECTED REGION ID(FileStatement destructor) START*/
	/*PROTECTED REGION END*/
}

FileStatement::fileNameExpression_t FileStatement::getFileNameExpression() const
{
	return e4c::returned(m_fileNameExpression);
}


void FileStatement::setFileNameExpression(fileNameExpression_t fileNameExpression_)
{
	m_fileNameExpression.reset(fileNameExpression_);
}

FileStatement::fileNameExpression_t FileStatement::releaseFileNameExpression()
{
	return m_fileNameExpression.release();
}

FileStatement::outletNameIdentifier_t FileStatement::getOutletNameIdentifier() const
{
	return e4c::returned(m_outletNameIdentifier);
}


void FileStatement::setOutletNameIdentifier(outletNameIdentifier_t outletNameIdentifier_)
{
	m_outletNameIdentifier.reset(outletNameIdentifier_);
}

FileStatement::outletNameIdentifier_t FileStatement::releaseOutletNameIdentifier()
{
	return m_outletNameIdentifier.release();
}

void FileStatement::setOnce(once_t _once)
{
	m_once = _once;;
}

FileStatement::once_t FileStatement::getOnce() const
{
	return m_once;
}



/*PROTECTED REGION ID(xpand3::statement::FileStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FileStatement::eClassImpl() const
{
	return StatementPackage::_instance()->getFileStatement();
}
 
