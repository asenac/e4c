
#include "Tref.hpp"
#include <SVG/TextElement.hpp>

using namespace SVG;

Tref::Tref() : 
	m_xlinkHref()
{
}

Tref::~Tref()
{
}

Tref::xlinkHref_t Tref::getXlinkHref() const
{
	return e4c::returned(m_xlinkHref);
}



