
#include "ShellLine.hpp"
#include <Make/Rule.hpp>

using namespace Make;

ShellLine::ShellLine() : 
	m_command(),
    m_display(),
    m_ruleShellLine()
{
}

ShellLine::~ShellLine()
{
}

void ShellLine::setCommand(command_t _command)
{
	m_command = _command;;
}

command_t ShellLine::getCommand() const
{
	return m_command;
}

void ShellLine::setDisplay(display_t _display)
{
	m_display = _display;;
}

display_t ShellLine::getDisplay() const
{
	return m_display;
}



