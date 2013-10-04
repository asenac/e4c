
#include "Assignment.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::Assignment include) START*/
/*PROTECTED REGION END*/

Assignment::Assignment() : 
	m_feature(),
    m_operator(),
    m_terminal()
{
	/*PROTECTED REGION ID(Assignment constructor) START*/
	/*PROTECTED REGION END*/
}

Assignment::~Assignment()
{
	/*PROTECTED REGION ID(Assignment destructor) START*/
	/*PROTECTED REGION END*/
}

void Assignment::setFeature(feature_t _feature)
{
	m_feature = _feature;;
}

Assignment::feature_t Assignment::getFeature() const
{
	return m_feature;
}

void Assignment::setOperator(operator_t _operator)
{
	m_operator = _operator;;
}

Assignment::operator_t Assignment::getOperator() const
{
	return m_operator;
}

Assignment::terminal_t Assignment::getTerminal() const
{
	return e4c::returned(m_terminal);
}


void Assignment::setTerminal(terminal_t terminal_)
{
	m_terminal.reset(terminal_);
}

Assignment::terminal_t Assignment::releaseTerminal()
{
	return m_terminal.release();
}



/*PROTECTED REGION ID(xtext::Assignment implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Assignment::eClassImpl() const
{
	return XtextPackage::_instance()->getAssignment();
}
 
