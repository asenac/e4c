
#include "ComboBox.hpp"
#include <widgetsmm/WidgetsmmPackage.hpp>

using namespace widgetsmm;

/*PROTECTED REGION ID(widgetsmm::ComboBox include) START*/
/*PROTECTED REGION END*/

ComboBox::ComboBox() : 
	m_count(),
    m_currentIndex()
{
	/*PROTECTED REGION ID(ComboBox constructor) START*/
	/*PROTECTED REGION END*/
}

ComboBox::~ComboBox()
{
	/*PROTECTED REGION ID(ComboBox destructor) START*/
	/*PROTECTED REGION END*/
}

void ComboBox::setCount(count_t _count)
{
	m_count = _count;;
}

ComboBox::count_t ComboBox::getCount() const
{
	return m_count;
}

void ComboBox::setCurrentIndex(currentIndex_t _currentIndex)
{
	m_currentIndex = _currentIndex;;
}

ComboBox::currentIndex_t ComboBox::getCurrentIndex() const
{
	return m_currentIndex;
}



/*PROTECTED REGION ID(widgetsmm::ComboBox implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ComboBox::eClassImpl() const
{
	return WidgetsmmPackage::_instance()->getComboBox();
}
 
