
#ifndef EMF_CPP_WIDGETSMM_PROPERTY__HPP
#define EMF_CPP_WIDGETSMM_PROPERTY__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


class Property : ::ecore::EObject
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
	

	/*PROTECTED REGION ID(widgetsmm::Property public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class WidgetsmmPackage;

	name_t m_name;
	value_t m_value;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(widgetsmm::Property protected) START*/
	/*PROTECTED REGION END*/
};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_PROPERTY__HPP
