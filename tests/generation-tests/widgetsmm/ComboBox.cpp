
#include "ComboBox.hpp"

using namespace widgetsmm;

ComboBox::ComboBox() : 
	m_count(),
    m_currentIndex()
{
}

ComboBox::~ComboBox()
{
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



