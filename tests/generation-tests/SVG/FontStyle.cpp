
#include "FontStyle.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::FontStyle include) START*/
/*PROTECTED REGION END*/

FontStyle::FontStyle() :
    m_italic()
{
    /*PROTECTED REGION ID(FontStyle constructor) START*/
    /*PROTECTED REGION END*/
}

FontStyle::~FontStyle()
{
    /*PROTECTED REGION ID(FontStyle destructor) START*/
    /*PROTECTED REGION END*/
}

void FontStyle::setItalic(italic_t _italic)
{
    m_italic = _italic;;
}

FontStyle::italic_t FontStyle::getItalic() const
{
    return m_italic;
}



/*PROTECTED REGION ID(SVG::FontStyle implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FontStyle::eClassImpl() const
{
    return SVGPackage::_instance()->getFontStyle();
}

