
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

	typedef std::vector < emof::Element_ptr > element_t;
	typedef int name_t;
	typedef int value_t;

	
	// TODO
	void setName(name_t _name);
	name_t getName() const;
	void setValue(value_t _value);
	value_t getValue() const;

	
protected:

	element_t m_element;
	name_t m_name;
	value_t m_value;

};

} // emof


#endif // EMF_CPP_EMOF_TAG__HPP
