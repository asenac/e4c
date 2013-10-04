
#include "Transform.hpp"
#include <SVG/SVGPackage.hpp>

using namespace SVG;

/*PROTECTED REGION ID(SVG::Transform include) START*/
/*PROTECTED REGION END*/

Transform::Transform()
{
	/*PROTECTED REGION ID(Transform constructor) START*/
	/*PROTECTED REGION END*/
}

Transform::~Transform()
{
	/*PROTECTED REGION ID(Transform destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(SVG::Transform implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Transform::eClassImpl() const
{
	return SVGPackage::_instance()->getTransform();
}
 
