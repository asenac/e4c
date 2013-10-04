
#include "AbsoluteCoord.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::AbsoluteCoord include) START*/
/*PROTECTED REGION END*/

AbsoluteCoord::AbsoluteCoord()
{
	/*PROTECTED REGION ID(AbsoluteCoord constructor) START*/
	/*PROTECTED REGION END*/
}

AbsoluteCoord::~AbsoluteCoord()
{
	/*PROTECTED REGION ID(AbsoluteCoord destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::AbsoluteCoord implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbsoluteCoord::eClassImpl() const
{
	return SVGPackage::_instance()->getAbsoluteCoord();
}
 
