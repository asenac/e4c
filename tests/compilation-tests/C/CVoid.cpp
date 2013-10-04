
#include "CVoid.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CVoid include) START*/
/*PROTECTED REGION END*/

CVoid::CVoid()
{
	/*PROTECTED REGION ID(CVoid constructor) START*/
	/*PROTECTED REGION END*/
}

CVoid::~CVoid()
{
	/*PROTECTED REGION ID(CVoid destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CVoid implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CVoid::eClassImpl() const
{
	return CPackage::_instance()->getCVoid();
}
 
