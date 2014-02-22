
#include "TextElement.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::TextElement include) START*/
/*PROTECTED REGION END*/

TextElement::TextElement() :
    m_rotate(),
    m_textLength(),
    m_fontSize()
{
    /*PROTECTED REGION ID(TextElement constructor) START*/
    /*PROTECTED REGION END*/
}

TextElement::~TextElement()
{
    /*PROTECTED REGION ID(TextElement destructor) START*/
    /*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(SVG::TextElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TextElement::eClassImpl() const
{
    return SVGPackage::_instance()->getTextElement();
}

