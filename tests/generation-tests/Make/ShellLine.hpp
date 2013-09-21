
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

	typedef ::PrimitiveTypes::String command_t;
	typedef ::PrimitiveTypes::Boolean display_t;
	typedef Make::Rule_ptr ruleShellLine_t;

	
	void setCommand(command_t _command);
	command_t getCommand() const;
	void setDisplay(display_t _display);
	display_t getDisplay() const;
	ruleShellLine_t getRuleShellLine() const;


	command_t m_command;
	display_t m_display;
	Make::Rule_ptr m_ruleShellLine;

		
protected:

};

} // Make


#endif // EMF_CPP_MAKE_SHELLLINE__HPP
