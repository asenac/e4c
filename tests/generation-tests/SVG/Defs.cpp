
#include "Defs.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Defs include) START*/
/*PROTECTED REGION END*/

Defs::Defs()
{
	/*PROTECTED REGION ID(Defs constructor) START*/
	/*PROTECTED REGION END*/
}

Defs::~Defs()
{
	/*PROTECTED REGION ID(Defs destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Defs implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Defs::eClassImpl() const
{
	return SVGPackage::_instance()->getDefs();
}
 
