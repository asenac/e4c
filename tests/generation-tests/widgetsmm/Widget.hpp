
#ifndef EMF_CPP_WIDGETSMM_WIDGET__HPP
#define EMF_CPP_WIDGETSMM_WIDGET__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


// widgetsmm::Widget
class Widget
{
public:

	typedef Widget_ptr ptr_type;
	
	Widget();
	virtual ~Widget();

	typedef widgetsmm::Window_ptr parent_t;
	typedef boost::ptr_vector < widgetsmm::Property > properties_t;
	typedef int name_t;
	typedef int type_t;

	
	// TODO
	// TODO
	void setName(name_t _name);
	name_t getName() const;
	void setType(type_t _type);
	type_t getType() const;

	
protected:

	parent_t m_parent;
	properties_t m_properties;
	name_t m_name;
	type_t m_type;

};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_WIDGET__HPP
