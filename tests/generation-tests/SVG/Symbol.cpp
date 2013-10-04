
#include "Symbol.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Symbol include) START*/
/*PROTECTED REGION END*/

Symbol::Symbol()
{
	/*PROTECTED REGION ID(Symbol constructor) START*/
	/*PROTECTED REGION END*/
}

Symbol::~Symbol()
{
	/*PROTECTED REGION ID(Symbol destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Symbol implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Symbol::eClassImpl() const
{
	return SVGPackage::_instance()->getSymbol();
}
 
