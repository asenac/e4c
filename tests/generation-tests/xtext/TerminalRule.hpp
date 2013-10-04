
#ifndef EMF_CPP_XTEXT_TERMINALRULE__HPP
#define EMF_CPP_XTEXT_TERMINALRULE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractRule.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class TerminalRule :  public virtual ::xtext::AbstractRule
{
public:

	typedef TerminalRule_ptr ptr_type;
	
	TerminalRule();
	virtual ~TerminalRule();

	
	

	/*PROTECTED REGION ID(xtext::TerminalRule public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::TerminalRule protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_TERMINALRULE__HPP
