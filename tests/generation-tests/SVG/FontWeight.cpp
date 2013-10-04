
#include "FontWeight.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::FontWeight include) START*/
/*PROTECTED REGION END*/

FontWeight::FontWeight() : 
	m_bold()
{
	/*PROTECTED REGION ID(FontWeight constructor) START*/
	/*PROTECTED REGION END*/
}

FontWeight::~FontWeight()
{
	/*PROTECTED REGION ID(FontWeight destructor) START*/
	/*PROTECTED REGION END*/
}

void FontWeight::setBold(bold_t _bold)
{
	m_bold = _bold;;
}

FontWeight::bold_t FontWeight::getBold() const
{
	return m_bold;
}



/*PROTECTED REGION ID(SVG::FontWeight implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FontWeight::eClassImpl() const
{
	return SVGPackage::_instance()->getFontWeight();
}
 
