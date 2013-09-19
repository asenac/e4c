
#include "FontStyle.hpp"

using namespace SVG;

FontStyle::FontStyle() : 
	m_italic()
{
}

FontStyle::~FontStyle()
{
}

void FontStyle::setItalic(italic_t _italic)
{
	m_italic = _italic;;
}

italic_t FontStyle::getItalic() const
{
	return m_italic;
}



