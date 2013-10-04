
#include "Visibility.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Visibility include) START*/
/*PROTECTED REGION END*/

Visibility::Visibility() : 
	m_visible()
{
	/*PROTECTED REGION ID(Visibility constructor) START*/
	/*PROTECTED REGION END*/
}

Visibility::~Visibility()
{
	/*PROTECTED REGION ID(Visibility destructor) START*/
	/*PROTECTED REGION END*/
}

void Visibility::setVisible(visible_t _visible)
{
	m_visible = _visible;;
}

Visibility::visible_t Visibility::getVisible() const
{
	return m_visible;
}



/*PROTECTED REGION ID(SVG::Visibility implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Visibility::eClassImpl() const
{
	return SVGPackage::_instance()->getVisibility();
}
 
