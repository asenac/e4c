
#include "Visibility.hpp"

using namespace SVG;

Visibility::Visibility() : 
	m_visible()
{
}

Visibility::~Visibility()
{
}

void Visibility::setVisible(visible_t _visible)
{
	m_visible = _visible;;
}

Visibility::visible_t Visibility::getVisible() const
{
	return m_visible;
}



