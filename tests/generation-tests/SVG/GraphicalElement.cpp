
#include "GraphicalElement.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::GraphicalElement include) START*/
/*PROTECTED REGION END*/

GraphicalElement::GraphicalElement() : 
	m_stroke()
{
	/*PROTECTED REGION ID(GraphicalElement constructor) START*/
	/*PROTECTED REGION END*/
}

GraphicalElement::~GraphicalElement()
{
	/*PROTECTED REGION ID(GraphicalElement destructor) START*/
	/*PROTECTED REGION END*/
}

void GraphicalElement::setStroke(stroke_t _stroke)
{
	m_stroke = _stroke;;
}

GraphicalElement::stroke_t GraphicalElement::getStroke() const
{
	return m_stroke;
}



/*PROTECTED REGION ID(SVG::GraphicalElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GraphicalElement::eClassImpl() const
{
	return SVGPackage::_instance()->getGraphicalElement();
}
 
