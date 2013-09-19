
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

	typedef std::unique_ptr < xtext::AbstractElement > terminal_t;

	
	// TODO

	
protected:

	terminal_t m_terminal;

};

} // xtext


#endif // EMF_CPP_XTEXT_ABSTRACTNEGATEDTOKEN__HPP
