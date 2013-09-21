
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
	typedef std::vector < widgetsmm::Property_ptr > properties_t;
	typedef :: name_t;
	typedef :: type_t;

	
	parent_t getParent() const;
	properties_t getProperties() const;
	void setName(name_t _name);
	name_t getName() const;
	void setType(type_t _type);
	type_t getType() const;


	widgetsmm::Window_ptr m_parent;
	std::vector < std::unique_ptr < widgetsmm::Property > > m_properties;
	name_t m_name;
	type_t m_type;

		
protected:

};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_WIDGET__HPP
