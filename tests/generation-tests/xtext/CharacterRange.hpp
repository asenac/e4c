
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

	typedef xtext::Keyword_ptr left_t;
	typedef xtext::Keyword_ptr right_t;

	
	left_t getLeft() const;
	right_t getRight() const;


	std::unique_ptr < xtext::Keyword > m_left;
	std::unique_ptr < xtext::Keyword > m_right;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_CHARACTERRANGE__HPP
