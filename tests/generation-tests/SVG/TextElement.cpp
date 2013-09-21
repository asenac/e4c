
#include "TextElement.hpp"

using namespace SVG;

TextElement::TextElement() : 
	m_rotate(),
    m_textLength(),
    m_fontSize()
{
}

TextElement::~TextElement()
{
}

void TextElement::setRotate(rotate_t _rotate)
{
	m_rotate = _rotate;;
}

TextElement::rotate_t TextElement::getRotate() const
{
	return m_rotate;
}

void TextElement::setTextLength(textLength_t _textLength)
{
	m_textLength = _textLength;;
}

TextElement::textLength_t TextElement::getTextLength() const
{
	return m_textLength;
}

void TextElement::setFontSize(fontSize_t _fontSize)
{
	m_fontSize = _fontSize;;
}

TextElement::fontSize_t TextElement::getFontSize() const
{
	return m_fontSize;
}



