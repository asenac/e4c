
#include "RelativeCoord.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::RelativeCoord include) START*/
/*PROTECTED REGION END*/

RelativeCoord::RelativeCoord()
{
	/*PROTECTED REGION ID(RelativeCoord constructor) START*/
	/*PROTECTED REGION END*/
}

RelativeCoord::~RelativeCoord()
{
	/*PROTECTED REGION ID(RelativeCoord destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::RelativeCoord implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RelativeCoord::eClassImpl() const
{
	return SVGPackage::_instance()->getRelativeCoord();
}
 
