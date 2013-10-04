
#ifndef EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP
#define EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class AbstractNegatedToken :  public virtual ::xtext::AbstractElement
{
public:

	typedef AbstractNegatedToken_ptr ptr_type;
	
	AbstractNegatedToken();
	virtual ~AbstractNegatedToken();

	typedef xtext::AbstractElement_ptr terminal_t;
	
	terminal_t getTerminal() const;
	void setTerminal(terminal_t terminal_);
	terminal_t releaseTerminal();
	

	/*PROTECTED REGION ID(xtext::AbstractNegatedToken public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class XtextPackage;

	std::unique_ptr < xtext::AbstractElement > m_terminal;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xtext::AbstractNegatedToken protected) START*/
	/*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP
