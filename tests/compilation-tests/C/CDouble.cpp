
#include "CDouble.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CDouble include) START*/
/*PROTECTED REGION END*/

CDouble::CDouble()
{
	/*PROTECTED REGION ID(CDouble constructor) START*/
	/*PROTECTED REGION END*/
}

CDouble::~CDouble()
{
	/*PROTECTED REGION ID(CDouble destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CDouble implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CDouble::eClassImpl() const
{
	return CPackage::_instance()->getCDouble();
}
 
