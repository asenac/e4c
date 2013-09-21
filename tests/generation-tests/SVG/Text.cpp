
#include "Text.hpp"

using namespace SVG;

Text::Text() : 
	m_lengthAdjust(),
    m_content()
{
}

Text::~Text()
{
}

void Text::setLengthAdjust(lengthAdjust_t _lengthAdjust)
{
	m_lengthAdjust = _lengthAdjust;;
}

Text::lengthAdjust_t Text::getLengthAdjust() const
{
	return m_lengthAdjust;
}

void Text::setContent(content_t _content)
{
	m_content = _content;;
}

Text::content_t Text::getContent() const
{
	return m_content;
}



