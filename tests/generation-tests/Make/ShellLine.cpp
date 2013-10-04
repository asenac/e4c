
#include "ShellLine.hpp"
#include <Make/MakePackage.hpp>
#include <Make/Rule.hpp>

using namespace Make;

/*PROTECTED REGION ID(Make::ShellLine include) START*/
/*PROTECTED REGION END*/

ShellLine::ShellLine() : 
	m_command(),
    m_display(),
    m_ruleShellLine()
{
	/*PROTECTED REGION ID(ShellLine constructor) START*/
	/*PROTECTED REGION END*/
}

ShellLine::~ShellLine()
{
	/*PROTECTED REGION ID(ShellLine destructor) START*/
	/*PROTECTED REGION END*/
}

void ShellLine::setCommand(command_t _command)
{
	m_command = _command;;
}

ShellLine::command_t ShellLine::getCommand() const
{
	return m_command;
}

void ShellLine::setDisplay(display_t _display)
{
	m_display = _display;;
}

ShellLine::display_t ShellLine::getDisplay() const
{
	return m_display;
}

ShellLine::ruleShellLine_t ShellLine::getRuleShellLine() const
{
	return e4c::returned(m_ruleShellLine);
}

void ShellLine::setRuleShellLine(ruleShellLine_t ruleShellLine_)
{
	m_ruleShellLine = ruleShellLine_;
}



/*PROTECTED REGION ID(Make::ShellLine implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ShellLine::eClassImpl() const
{
	return MakePackage::_instance()->getShellLine();
}
 
