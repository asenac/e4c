
#include "Dimension.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Dimension include) START*/
/*PROTECTED REGION END*/

Dimension::Dimension() : 
	m_width(),
    m_height()
{
	/*PROTECTED REGION ID(Dimension constructor) START*/
	/*PROTECTED REGION END*/
}

Dimension::~Dimension()
{
	/*PROTECTED REGION ID(Dimension destructor) START*/
	/*PROTECTED REGION END*/
}

void Dimension::setWidth(width_t _width)
{
	m_width = _width;;
}

Dimension::width_t Dimension::getWidth() const
{
	return m_width;
}

void Dimension::setHeight(height_t _height)
{
	m_height = _height;;
}

Dimension::height_t Dimension::getHeight() const
{
	return m_height;
}



/*PROTECTED REGION ID(SVG::Dimension implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Dimension::eClassImpl() const
{
	return SVGPackage::_instance()->getDimension();
}
 
