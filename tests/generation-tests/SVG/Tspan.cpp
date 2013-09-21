
#include "Tspan.hpp"

using namespace SVG;

Tspan::Tspan() : 
	m_content()
{
}

Tspan::~Tspan()
{
}

void Tspan::setContent(content_t _content)
{
	m_content = _content;;
}

Tspan::content_t Tspan::getContent() const
{
	return m_content;
}



