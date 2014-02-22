
#include "Text.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Text include) START*/
/*PROTECTED REGION END*/

Text::Text() :
    m_lengthAdjust(),
    m_content()
{
    /*PROTECTED REGION ID(Text constructor) START*/
    /*PROTECTED REGION END*/
}

Text::~Text()
{
    /*PROTECTED REGION ID(Text destructor) START*/
    /*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(SVG::Text implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Text::eClassImpl() const
{
    return SVGPackage::_instance()->getText();
}

