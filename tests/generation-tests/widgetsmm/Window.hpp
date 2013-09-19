
#ifndef EMF_CPP_WIDGETSMM_WINDOW__HPP
#define EMF_CPP_WIDGETSMM_WINDOW__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <widgetsmm/Widget.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


// widgetsmm::Window
class Window :  public virtual ::widgetsmm::Widget
{
public:

	typedef Window_ptr ptr_type;
	
	Window();
	virtual ~Window();

	typedef int title_t;
	typedef boost::ptr_vector < widgetsmm::Widget > children_t;

	
	void setTitle(title_t _title);
	title_t getTitle() const;
	// TODO

	
protected:

	title_t m_title;
	children_t m_children;

};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_WINDOW__HPP
