
#ifndef EMF_CPP_WIDGETSMM_COMBOBOX__HPP
#define EMF_CPP_WIDGETSMM_COMBOBOX__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <widgetsmm/Widget.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


// widgetsmm::ComboBox
class ComboBox :  public virtual ::widgetsmm::Widget
{
public:

	typedef ComboBox_ptr ptr_type;
	
	ComboBox();
	virtual ~ComboBox();

	typedef int count_t;
	typedef int currentIndex_t;

	
	void setCount(count_t _count);
	count_t getCount() const;
	void setCurrentIndex(currentIndex_t _currentIndex);
	currentIndex_t getCurrentIndex() const;

	
protected:

	count_t m_count;
	currentIndex_t m_currentIndex;

};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_COMBOBOX__HPP
