
#ifndef EMF_CPP_WIDGETSMM_COMBOBOX__HPP
#define EMF_CPP_WIDGETSMM_COMBOBOX__HPP

#include <widgetsmm/fwd.hpp>
#include <widgetsmm/meta.hpp>
#include <widgetsmm/Widget.hpp>

#include <e4c/mapping.hpp>

namespace widgetsmm
{


class ComboBox :  public virtual ::widgetsmm::Widget
{
public:

	typedef ComboBox_ptr ptr_type;
	
	ComboBox();
	virtual ~ComboBox();

	typedef ::ecore::EInt count_t;
	typedef ::ecore::EInt currentIndex_t;
	
	void setCount(count_t _count);
	count_t getCount() const;
	void setCurrentIndex(currentIndex_t _currentIndex);
	currentIndex_t getCurrentIndex() const;
	

	/*PROTECTED REGION ID(widgetsmm::ComboBox public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class WidgetsmmPackage;

	count_t m_count;
	currentIndex_t m_currentIndex;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(widgetsmm::ComboBox protected) START*/
	/*PROTECTED REGION END*/
};

} // widgetsmm


#endif // EMF_CPP_WIDGETSMM_COMBOBOX__HPP
