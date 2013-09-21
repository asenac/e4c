
#include "Use.hpp"
#include <SVG/Element.hpp>

using namespace SVG;

Use::Use() : 
	m_use()
{
}

Use::~Use()
{
}

Use::use_t Use::getUse() const
{
	return e4c::returned(m_use);
}



