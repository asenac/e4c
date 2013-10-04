
#include "CLongDouble.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CLongDouble include) START*/
/*PROTECTED REGION END*/

CLongDouble::CLongDouble()
{
	/*PROTECTED REGION ID(CLongDouble constructor) START*/
	/*PROTECTED REGION END*/
}

CLongDouble::~CLongDouble()
{
	/*PROTECTED REGION ID(CLongDouble destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CLongDouble implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CLongDouble::eClassImpl() const
{
	return CPackage::_instance()->getCLongDouble();
}
 
