
#include "Tspan.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Tspan include) START*/
/*PROTECTED REGION END*/

Tspan::Tspan() : 
	m_content()
{
	/*PROTECTED REGION ID(Tspan constructor) START*/
	/*PROTECTED REGION END*/
}

Tspan::~Tspan()
{
	/*PROTECTED REGION ID(Tspan destructor) START*/
	/*PROTECTED REGION END*/
}

void Tspan::setContent(content_t _content)
{
	m_content = _content;;
}

Tspan::content_t Tspan::getContent() const
{
	return m_content;
}



/*PROTECTED REGION ID(SVG::Tspan implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Tspan::eClassImpl() const
{
	return SVGPackage::_instance()->getTspan();
}
 
