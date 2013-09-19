
#ifndef EMF_CPP_MAKE_SHELLLINE__HPP
#define EMF_CPP_MAKE_SHELLLINE__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::ShellLine
class ShellLine
{
public:

	typedef ShellLine_ptr ptr_type;
	
	ShellLine();
	virtual ~ShellLine();

	typedef int command_t;
	typedef int display_t;
	typedef Make::Rule_ptr ruleShellLine_t;

	
	void setCommand(command_t _command);
	command_t getCommand() const;
	void setDisplay(display_t _display);
	display_t getDisplay() const;
	// TODO

	
protected:

	command_t m_command;
	display_t m_display;
	ruleShellLine_t m_ruleShellLine;

};

} // Make


#endif // EMF_CPP_MAKE_SHELLLINE__HPP
