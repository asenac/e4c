
#ifndef EMF_CPP_MAKE_SHELLLINE__HPP
#define EMF_CPP_MAKE_SHELLLINE__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class ShellLine : ::ecore::EObject
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


    /*PROTECTED REGION ID(Make::ShellLine public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class MakePackage;

    command_t m_command;
    display_t m_display;
    Make::Rule_ptr m_ruleShellLine;


    friend class ::Make::Rule;
    void setRuleShellLine(ruleShellLine_t ruleShellLine_);


    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(Make::ShellLine protected) START*/
    /*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_SHELLLINE__HPP
