
#include "ForEachStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::ForEachStatement include) START*/
/*PROTECTED REGION END*/

ForEachStatement::ForEachStatement() : 
	m_target(),
    m_separator(),
    m_variable(),
    m_iteratorName()
{
	/*PROTECTED REGION ID(ForEachStatement constructor) START*/
	/*PROTECTED REGION END*/
}

ForEachStatement::~ForEachStatement()
{
	/*PROTECTED REGION ID(ForEachStatement destructor) START*/
	/*PROTECTED REGION END*/
}

ForEachStatement::target_t ForEachStatement::getTarget() const
{
	return e4c::returned(m_target);
}


void ForEachStatement::setTarget(target_t target_)
{
	m_target.reset(target_);
}

ForEachStatement::target_t ForEachStatement::releaseTarget()
{
	return m_target.release();
}

ForEachStatement::separator_t ForEachStatement::getSeparator() const
{
	return e4c::returned(m_separator);
}


void ForEachStatement::setSeparator(separator_t separator_)
{
	m_separator.reset(separator_);
}

ForEachStatement::separator_t ForEachStatement::releaseSeparator()
{
	return m_separator.release();
}

ForEachStatement::variable_t ForEachStatement::getVariable() const
{
	return e4c::returned(m_variable);
}


void ForEachStatement::setVariable(variable_t variable_)
{
	m_variable.reset(variable_);
}

ForEachStatement::variable_t ForEachStatement::releaseVariable()
{
	return m_variable.release();
}

ForEachStatement::iteratorName_t ForEachStatement::getIteratorName() const
{
	return e4c::returned(m_iteratorName);
}


void ForEachStatement::setIteratorName(iteratorName_t iteratorName_)
{
	m_iteratorName.reset(iteratorName_);
}

ForEachStatement::iteratorName_t ForEachStatement::releaseIteratorName()
{
	return m_iteratorName.release();
}



/*PROTECTED REGION ID(xpand3::statement::ForEachStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ForEachStatement::eClassImpl() const
{
	return StatementPackage::_instance()->getForEachStatement();
}
 
