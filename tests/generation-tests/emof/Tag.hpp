
#ifndef EMF_CPP_EMOF_TAG__HPP
#define EMF_CPP_EMOF_TAG__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/Element.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Tag
class Tag :  public virtual ::emof::Element
{
public:

	typedef Tag_ptr ptr_type;
	
	Tag();
	virtual ~Tag();

	typedef std::set < emof::Element_ptr > element_t;
	typedef ::emof::String name_t;
	typedef ::emof::String value_t;

	
	element_t getElement() const;
	void setName(name_t _name);
	name_t getName() const;
	void setValue(value_t _value);
	value_t getValue() const;


	std::set < emof::Element_ptr > m_element;
	name_t m_name;
	value_t m_value;

		
protected:

};

} // emof


#endif // EMF_CPP_EMOF_TAG__HPP
