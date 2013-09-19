
#ifndef EMF_CPP_MAKE_MACRO__HPP
#define EMF_CPP_MAKE_MACRO__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Element.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


// Make::Macro
class Macro :  public virtual ::Make::Element
{
public:

	typedef Macro_ptr ptr_type;
	
	Macro();
	virtual ~Macro();

	typedef int value_t;

	
	void setValue(value_t _value);
	value_t getValue() const;

	
protected:

	value_t m_value;

};

} // Make


#endif // EMF_CPP_MAKE_MACRO__HPP
