
#ifndef EMF_CPP_MAKE_MACRO__HPP
#define EMF_CPP_MAKE_MACRO__HPP

#include <Make/fwd.hpp>
#include <Make/meta.hpp>
#include <Make/Element.hpp>

#include <e4c/mapping.hpp>

namespace Make
{


class Macro :  public virtual ::Make::Element
{
public:

	typedef Macro_ptr ptr_type;
	
	Macro();
	virtual ~Macro();

	typedef ::PrimitiveTypes::String value_t;
	
	void setValue(value_t _value);
	value_t getValue() const;
	

	/*PROTECTED REGION ID(Make::Macro public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class MakePackage;

	value_t m_value;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(Make::Macro protected) START*/
	/*PROTECTED REGION END*/
};

} // Make


#endif // EMF_CPP_MAKE_MACRO__HPP
