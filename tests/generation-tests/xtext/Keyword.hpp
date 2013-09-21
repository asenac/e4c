
#ifndef EMF_CPP_XTEXT_KEYWORD__HPP
#define EMF_CPP_XTEXT_KEYWORD__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::Keyword
class Keyword :  public virtual ::xtext::AbstractElement
{
public:

	typedef Keyword_ptr ptr_type;
	
	Keyword();
	virtual ~Keyword();

	typedef ::ecore::EString value_t;

	
	void setValue(value_t _value);
	value_t getValue() const;


	value_t m_value;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_KEYWORD__HPP
