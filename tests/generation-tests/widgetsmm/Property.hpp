
#ifndef EMF_CPP_WIDGETSMM_PROPERTY__HPP
#define EMF_CPP_WIDGETSMM_PROPERTY__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


// widgetsmm::Property
class Property
{
public:

	typedef Property_ptr ptr_type;
	
	Property();
	virtual ~Property();

	typedef :: name_t;
	typedef :: value_t;

	
	void setName(name_t _name);
	name_t getName() const;
	void setValue(value_t _value);
	value_t getValue() const;


	name_t m_name;
	value_t m_value;

		
protected:

};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_PROPERTY__HPP
