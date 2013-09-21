
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

	typedef ::ecore::EString title_t;
	typedef std::vector < widgetsmm::Widget_ptr > children_t;

	
	void setTitle(title_t _title);
	title_t getTitle() const;
	children_t getChildren() const;


	title_t m_title;
	std::vector < std::unique_ptr < widgetsmm::Widget > > m_children;

		
protected:

};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_WINDOW__HPP
