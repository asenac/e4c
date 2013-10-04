
#include "IfStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/statement/IfStatement.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::IfStatement include) START*/
/*PROTECTED REGION END*/

IfStatement::IfStatement() : 
	m_condition(),
    m_elseIf()
{
	/*PROTECTED REGION ID(IfStatement constructor) START*/
	/*PROTECTED REGION END*/
}

IfStatement::~IfStatement()
{
	/*PROTECTED REGION ID(IfStatement destructor) START*/
	/*PROTECTED REGION END*/
}

IfStatement::condition_t IfStatement::getCondition() const
{
	return e4c::returned(m_condition);
}


void IfStatement::setCondition(condition_t condition_)
{
	m_condition.reset(condition_);
}

IfStatement::condition_t IfStatement::releaseCondition()
{
	return m_condition.release();
}

IfStatement::elseIf_t IfStatement::getElseIf() const
{
	return e4c::returned(m_elseIf);
}


void IfStatement::setElseIf(elseIf_t elseIf_)
{
	m_elseIf.reset(elseIf_);
}

IfStatement::elseIf_t IfStatement::releaseElseIf()
{
	return m_elseIf.release();
}



/*PROTECTED REGION ID(xpand3::statement::IfStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IfStatement::eClassImpl() const
{
	return StatementPackage::_instance()->getIfStatement();
}
 
