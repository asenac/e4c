
#include "GraphicalElement.hpp"

using namespace SVG;

GraphicalElement::GraphicalElement() : 
	m_stroke()
{
}

GraphicalElement::~GraphicalElement()
{
}

void GraphicalElement::setStroke(stroke_t _stroke)
{
	m_stroke = _stroke;;
}

GraphicalElement::stroke_t GraphicalElement::getStroke() const
{
	return m_stroke;
}



