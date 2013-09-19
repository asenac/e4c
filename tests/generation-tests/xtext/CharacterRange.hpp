
#ifndef EMF_CPP_XTEXT_CHARACTERRANGE__HPP
#define EMF_CPP_XTEXT_CHARACTERRANGE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::CharacterRange
class CharacterRange :  public virtual ::xtext::AbstractElement
{
public:

	typedef CharacterRange_ptr ptr_type;
	
	CharacterRange();
	virtual ~CharacterRange();

	typedef std::unique_ptr < xtext::Keyword > left_t;
	typedef std::unique_ptr < xtext::Keyword > right_t;

	
	// TODO
	// TODO

	
protected:

	left_t m_left;
	right_t m_right;

};

} // xtext


#endif // EMF_CPP_XTEXT_CHARACTERRANGE__HPP
