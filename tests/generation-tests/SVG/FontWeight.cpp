
#include "FontWeight.hpp"

using namespace SVG;

FontWeight::FontWeight() : 
	m_bold()
{
}

FontWeight::~FontWeight()
{
}

void FontWeight::setBold(bold_t _bold)
{
	m_bold = _bold;;
}

bold_t FontWeight::getBold() const
{
	return m_bold;
}



