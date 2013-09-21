
#ifndef EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP
#define EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::AbstractNegatedToken
class AbstractNegatedToken :  public virtual ::xtext::AbstractElement
{
public:

	typedef AbstractNegatedToken_ptr ptr_type;
	
	AbstractNegatedToken();
	virtual ~AbstractNegatedToken();

	typedef xtext::AbstractElement_ptr terminal_t;

	
	terminal_t getTerminal() const;


	std::unique_ptr < xtext::AbstractElement > m_terminal;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP
